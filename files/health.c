#include "health.h"
#include "gba.h"

void initializeHealth (struct healthBar* healthBar, int x, int y, int width, int height, int max, u16 color) {
    healthBar->x = x;
    healthBar->y = y;
    healthBar->width = width;
    healthBar->height = height;
    healthBar->max = max;
    healthBar->curr = max;
    healthBar->color = color;
}

void drawHealth (struct healthBar* healthBar) {
    if (healthBar-> curr != 0) {
        int currentWidth = (healthBar->curr * healthBar->width) / healthBar->max;

        drawRectDMA(healthBar->x, healthBar->y, healthBar->width, healthBar->height, WHITE); // Outline
    
        drawRectDMA(healthBar->x, healthBar->y, currentWidth, healthBar->height, healthBar->color);
    }
}

void updateHealth(struct healthBar* healthBar, int damage) {
    int newHealth = healthBar->curr - damage;
    if (newHealth <= 0 || newHealth > healthBar->max) {
        healthBar->curr = 0;
    } else {
        healthBar->curr = newHealth;
    }
    drawHealth(healthBar);
}