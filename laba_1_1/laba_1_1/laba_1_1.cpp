/*
    Copyright 2010 Etay Meiri
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    Tutorial 01 - Create a window
*/

#include <GL/freeglut.h>


static void RenderSceneCB()
{
    glClear(GL_COLOR_BUFFER_BIT); //Всё что мы делаем в нашей функции рендера - это очистка буфера кадра
    glutSwapBuffers(); //функция просит GLUT поменять фоновый буфер и буфер кадра местами
}

static void InitializeGlutCallbacks()
{
    glutDisplayFunc(RenderSceneCB); //Так как мы начали работать в оконной системе, большая часть действий с запущенной программой происходит через функции обратного вызова
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);                        //Здесь мы инициализируем GLUT.
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); //Так настраиваются некоторые опции GLUT
    glutInitWindowSize(1024, 768);                //
    glutInitWindowPosition(100, 100);             //Эти функции задают параметры окна и создают его. Так же мы даем ему заголовок
    glutCreateWindow("Tutorial 01");              //

    InitializeGlutCallbacks(); 

    glClearColor(1.0f, 0.5f, 0.4f, 0.0f); //Вызов выше устанавливает цвет, который будет использован во время очистки буфера кадра (объяснения будут позже). Цвет имеет 4 канала (красный, зелёный, синий, альфа-канал) и принимает значения от 0.0 и до 1.0.

    glutMainLoop(); //Этот вызов передаёт контроль GLUT'у, который теперь начнёт свой собственный цикл

    return 0;
}