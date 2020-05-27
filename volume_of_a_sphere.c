#include <stdio.h> i
int main(void)
{
	/* Radius of Sphere */
	float vrad_sphere;
	float vol_sphere;

	/* Ask user for the length of the radius in cm */
	printf("What's the radius of the sphere, the sphere for which you trying to find the volume?\n ");
	scanf("%f", &vrad_sphere);

	/*Calculating Volume*/
	vol_sphere = (4.0f/3.0f) * 3.14159265358979323846264338327950288419716939937510f * (vrad_sphere * vrad_sphere * vrad_sphere);

	/* Display on the screen */
	printf("Radius of The Sphere: %.2f \n", vrad_sphere );
	printf("Volume of the sphere: %.2f \n", vol_sphere );
}