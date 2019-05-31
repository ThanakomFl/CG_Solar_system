
#include "Makestars.h"

float red, green, blue;
float dx, dy;

Makestars stars;

void MoveEarth() {

	stars.nej += 1.93 / 10;
	stars.merj += 1.18 / 10;
	stars.vej += 0.68 / 10;
	stars.eaj += 1.68 / 10;
	stars.marj += 1.43 / 10;
	stars.juj += 2.68 / 10;
	stars.saj += 2.43 / 10;
	stars.urj += 2.18 / 10;
	stars.moonj += 2.93 / 10;
	glutPostRedisplay();
}

void Init() { 
	glClearColor(0.211, 0.278, 0.309, 1.0);
	gluOrtho2D(-200, 200, -200, 200);
	red = 1.0;
	green = 1.0;
	blue = 1.0;
	dx = 0.0;
	dy = 0.0;
}

void MyDisplay() {

	glClear(GL_COLOR_BUFFER_BIT);
		stars.randomstar();
		///////////////////////////////////////////////////////////////////////////////////////////// Sun
		stars.merx = 0;
		stars.mery = 0;

		stars.Makestar(21, stars.n, stars.merx, stars.mery, 0.294, 0.290, 0.309);
		stars.Makestar(19, stars.n, stars.merx, stars.mery, 0.435, 0.321, 0.298);
		stars.Makestar(16, stars.n, stars.merx, stars.mery, 0.662, 0.368, 0.278);
		stars.Makestar(14, stars.n, stars.merx, stars.mery, 0.835, 0.329, 0.203);
		stars.Makestar(13, stars.n, stars.merx, stars.mery, 1, 0.698, 0);
		///////////////////////////////////////////////////////////////////////////////////////////// Mercury
		stars.merx = stars.makeOrbitX(28, stars.merj, stars.n, 0);
		stars.mery = stars.makeOrbitY(28, stars.merj, stars.n , 0);

		stars.Makestar(6, stars.n, stars.merx, stars.mery, 0.886, 0.611, 0.478);
		stars.Makestar(5, stars.n, stars.merx+0.7, stars.mery+0.7, 0.988, 0.682, 0.533);
		stars.Makestar(1, stars.n, stars.merx + 0.7, stars.mery + 0.7, 0.819, 0.482, 0.423);
		stars.Makestar(1.5, stars.n, stars.merx - 0.5, stars.mery - 0.2, 0.819, 0.482, 0.423);
		stars.Makestar(1, stars.n, stars.merx +1.7, stars.mery +3, 0.819, 0.482, 0.423);
		stars.Makestar(0.75, stars.n, stars.merx +2.5, stars.mery -3, 0.819, 0.482, 0.423);
		///////////////////////////////////////////////////////////////////////////////////////////// Venus
		stars.merx = stars.makeOrbitX(45, stars.vej, stars.n, 0);
		stars.mery = stars.makeOrbitY(45, stars.vej, stars.n, 0);
			
		stars.Makestar(8, stars.n, stars.merx, stars.mery, 0.898, 0.898, 0.898);
		stars.Makestar(7, stars.n, stars.merx + 0.7, stars.mery + 0.7, 1, 1, 1);
		stars.Makestar(0.75, stars.n, stars.merx + 3, stars.mery +4, 0.898, 0.898, 0.898);
		stars.Makestar(1.5, stars.n, stars.merx - 0.5, stars.mery - 0.2, 0.898, 0.898, 0.898);

		///////////////////////////////////////////////////////////////////////////////////////////// Earth
		stars.merx = stars.makeOrbitX(72, stars.eaj, stars.n, 0);
		stars.mery = stars.makeOrbitY(72, stars.eaj, stars.n, 0);

		stars.Makestar(10, stars.n, stars.merx, stars.mery, 0.435, 0.784, 0.815);
		stars.Makestar(8, stars.n, stars.merx + 1, stars.mery + 1, 0.486, 0.870, 0.913);
		stars.Makestar(3, stars.n, stars.merx + 3, stars.mery + 0.7, 0.286, 0.749, 0.647);
		stars.Makestar(2.5, stars.n, stars.merx + 0.7, stars.mery + 0.7, 0.286, 0.749, 0.647);
		stars.Makestar(2, stars.n, stars.merx - 0.5, stars.mery - 0.2, 0.286, 0.749, 0.6473);
		stars.Makestar(1.5, stars.n, stars.merx + 1.7, stars.mery + 3, 0.286, 0.749, 0.647);
		stars.Makestar(0.75, stars.n, stars.merx + 2.5, stars.mery - 2.7, 0.286, 0.749, 0.647);
		stars.Makestar(0.75, stars.n, stars.merx + 5, stars.mery -5, 0.286, 0.749, 0.647);
		stars.Makestar(0.5, stars.n, stars.merx + 6, stars.mery + 4, 0.286, 0.749, 0.647);
		stars.Makestar(0.5, stars.n, stars.merx - 6, stars.mery + 5, 0.286, 0.749, 0.647);
		stars.Makestar(1, stars.n, stars.merx - 6, stars.mery + 5, 0.286, 0.749, 0.647);
		stars.Makestar(0.5, stars.n, stars.merx - 6, stars.mery + 4, 0.286, 0.749, 0.647);
		stars.Makestar(0.5, stars.n, stars.merx - 6, stars.mery + 3, 0.286, 0.749, 0.647);
		stars.Makestar(0.75, stars.n, stars.merx - 2, stars.mery - 2, 0.286, 0.749, 0.647);
		stars.Makestar(1, stars.n, stars.merx - 2, stars.mery - 2.5, 0.286, 0.749, 0.647);
		stars.Makestar(0.5, stars.n, stars.merx - 4, stars.mery - 3, 0.286, 0.749, 0.647);
		stars.Makestar(0.5, stars.n, stars.merx , stars.mery - 5.5, 0.286, 0.749, 0.647);

			///////////////////////// moon for earth 
		stars.merx = stars.makeOrbitX(15, stars.moonj, stars.n, stars.merx);
		stars.mery = stars.makeOrbitY(15, stars.moonj, stars.n, stars.mery);

		stars.Makestar(3, stars.n, stars.merx, stars.mery, 0.490, 0.490, 0.490);
		stars.Makestar(2.5, stars.n, stars.merx + 0.5, stars.mery + 0.5, 0.619, 0.611, 0.623);
		stars.Makestar(0.5, stars.n, stars.merx + 0.6, stars.mery + 1, 0.435, 0.435, 0.435);
		stars.Makestar(0.3, stars.n, stars.merx + 2, stars.mery , 0.435, 0.435, 0.435);
		///////////////////////////////////////////////////////////////////////////////////////////// Mars
		stars.merx = stars.makeOrbitX(102, stars.marj, stars.n, 0);
		stars.mery = stars.makeOrbitY(102, stars.marj, stars.n, 0);

		stars.Makestar(8.5, stars.n, stars.merx, stars.mery, 0.815, 0.380, 0.352);
		stars.Makestar(7.5, stars.n, stars.merx + 0.7, stars.mery + 0.75, 0.901, 0.419, 0.392);
		stars.Makestar(1, stars.n, stars.merx -0.80, stars.mery + 0.7, 0.980, 0.541, 0.537);
		stars.Makestar(1.5, stars.n, stars.merx - 1.5, stars.mery , 0.980, 0.541, 0.537);
		stars.Makestar(1, stars.n, stars.merx + 2.5, stars.mery + 5, 0.980, 0.541, 0.537);
		stars.Makestar(0.5, stars.n, stars.merx + 2, stars.mery + 3, 0.980, 0.541, 0.537);
		stars.Makestar(0.75, stars.n, stars.merx + 4.5, stars.mery -4, 0.980, 0.541, 0.537);
		///////////////////////////////////////////////////////////////////////////////////////////// Jupiter
		stars.merx = stars.makeOrbitX(124, stars.juj, stars.n, 0);
		stars.mery = stars.makeOrbitY(124, stars.juj, stars.n, 0);

			stars.Makestar(11, stars.n, stars.merx, stars.mery, 0.827, 0.537, 0.250);
			stars.Makestar(10, stars.n, stars.merx + 0.7, stars.mery + 0.75, 0.937, 0.596, 0.286);
			stars.MakeangleL(8, stars.merx - 2, stars.mery , 0.882, 0.764, 0.419);
			stars.MakeangleL(3.5, stars.merx - 6.5, stars.mery, 0.737, 0.298, 0.219);
			stars.MakeangleR(4, stars.merx + 5, stars.mery + 5, 0.882, 0.764, 0.419);
			stars.MakeangleR(2, stars.merx + 0.2, stars.mery + 5, 0.882, 0.764, 0.419);
			stars.MakeangleR(5, stars.merx + 4, stars.mery - 4.8, 0.882, 0.764, 0.419);
			stars.MakeangleR(2, stars.merx - 2, stars.mery - 4.8, 0.882, 0.764, 0.419);
			stars.Makestar(0.7, stars.n, stars.merx - 3, stars.mery - 7, 0.737, 0.298, 0.219);
			stars.MakeangleL(2, stars.merx - 5.6, stars.mery + 8, 0.737, 0.298, 0.219);
			stars.MakeangleR(2, stars.merx - 2, stars.mery + 3.5, 0.933, 0.901, 0.858);
		///////////////////////////////////////////////////////////////////////////////////////////// Saturn
			stars.merx = stars.makeOrbitX(148, stars.saj, stars.n, 0);
			stars.mery = stars.makeOrbitY(148, stars.saj, stars.n, 0);

			stars.Makestar(10.2, stars.n, stars.merx, stars.mery, 0.682, 0.643, 0.450);
			stars.Makestar(10, stars.n, stars.merx, stars.mery, 0.780, 0.698, 0.529);
			stars.Makestar(9, stars.n, stars.merx, stars.mery, 0.211, 0.278, 0.309);
			stars.Makestar(7.75, stars.n, stars.merx, stars.mery, 0.894, 0.745, 0.490);
			stars.Makestar(6.75, stars.n, stars.merx + 0.7, stars.mery + 0.75, 0.996, 0.843, 0.549);
			stars.MakeangleR(6, stars.merx + 1, stars.mery , 0.690, 0.556, 0.411);
			stars.MakeangleL(3, stars.merx -3.8, stars.mery - 2.8, 0.690, 0.556, 0.411);
			stars.MakeangleR(1.5, stars.merx + 4, stars.mery - 5, 0.690, 0.556, 0.411);
			stars.MakeangleL(3.5, stars.merx - 3.2, stars.mery + 3, 0.690, 0.556, 0.411);
			stars.MakeangleR(1.5, stars.merx + 4, stars.mery + 5, 0.690, 0.556, 0.411);
		///////////////////////////////////////////////////////////////////////////////////////////// Uranus
			stars.merx = stars.makeOrbitX(168, stars.urj, stars.n, 0);
			stars.mery = stars.makeOrbitY(168, stars.urj, stars.n, 0);

			stars.Makestar(7.2, stars.n, stars.merx, stars.mery, 0.839, 0.839, 0.839);
			stars.Makestar(7, stars.n, stars.merx, stars.mery, 1,1,1);
			stars.Makestar(6.7, stars.n, stars.merx, stars.mery, 0.211, 0.278, 0.309);
			stars.Makestar(6, stars.n, stars.merx, stars.mery, 0.364, 0.815, 0.764);
			stars.Makestar(5, stars.n, stars.merx + 0.5, stars.mery + 0.5, 0.407, 0.909, 0.850);
			stars.Makestar(0.4, stars.n, stars.merx + 2, stars.mery + 3, 0.980, 0.984, 1);
			stars.Makestar(0.6, stars.n, stars.merx - 0.5, stars.mery - 0.2, 0.980, 0.984, 1);
		///////////////////////////////////////////////////////////////////////////////////////////// Neptune
			stars.merx = stars.makeOrbitX(189, stars.nej, stars.n, 0);
			stars.mery = stars.makeOrbitY(189, stars.nej, stars.n, 0);

			stars.Makestar(11, stars.n, stars.merx, stars.mery, 0.258, 0.674, 0.584);
			stars.Makestar(9.5, stars.n, stars.merx + 0.8, stars.mery + 0.8, 0.286, 0.749, 0.647);
			stars.MakeangleR(9, stars.merx+0.2, stars.mery+4, 0.188, 0.537, 0.568);
			stars.MakeangleL(6, stars.merx-4.3, stars.mery -2.5, 0.188, 0.537, 0.568);
			stars.MakeangleR(3, stars.merx + 5.7, stars.mery - 6, 0.188, 0.537, 0.568);
		////////////////////////////////////////////////////////////////////////////////////////////// End
	glFlush();
}

void MyMouse(int button, int state, int x, int y) {
	switch (button) {
	case GLUT_LEFT_BUTTON: printf("Left Button\n");
		if (state == GLUT_DOWN)
			printf("Down \n");
		break;
	case GLUT_RIGHT_BUTTON: printf("Right Button\n");
		if (state == GLUT_UP)
			printf("Up\n");
		break;
	default: break;

	}

}

void MyKeyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 'a': printf("a\n");
		glutIdleFunc(MoveEarth);
		break;
	case 'A': printf("a\n");
		glutIdleFunc(MoveEarth);
		break;
	case 'b': printf("b\n");
		red = 0.0; green = 0.0; blue = 1.0;
		dx -= 2.0;
		glutPostRedisplay();
		break;
		
	default: exit(0);
	}
}

int main(int argc, char **argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(10, 0);
	//----------------------------------------------
	glutCreateWindow("Solar project");
	// --------------------- Call back function ------------
	glutDisplayFunc(MyDisplay);
	glutMouseFunc(MyMouse);
	glutKeyboardFunc(MyKeyboard);

	Init();

	glutMainLoop();
	
	return 0;
}