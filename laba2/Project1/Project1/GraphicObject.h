﻿#pragma once
#include <GL/freeglut.h>
#include<GL/gl.h>
#include<GL/GLU.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

class GraphicObject
{
private:
	// Позиция и угол поворота для объекта
	GLfloat position[3];
	GLfloat angle;
	// Матрица модели (расположение объекта) ‐ чтоб не вычислять каждый раз
	GLfloat modelMatrix[16];
	// Цвет модели
	GLfloat color[3];
public:
	// Конструктор
	GraphicObject(void);
	// Задать позицию объекта
	void setPosition(float x, float y, float z);
	// Задать угол поворота в градусах относительно оси OY
	void setAngle(float a);
	// Задать цвет модели
	void setСolor(float r, float g, float b);
	// Вывести объект
	void draw(void);
};

