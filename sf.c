#include <stdio.h> 
#include <math.h> 

//Function to calculate slope 
double slope(double x, double y) 
{ 
	//Return the slope 
	return (y*x + y); 
} 

//Function to plot the slope field 
void slope_field(double xmin, double xmax, double ymin, double ymax, double step) 
{ 
	//Loop through the x and y range 
	for (double x = xmin; x <= xmax; x += step) 
	{ 
		for (double y = ymin; y <= ymax; y += step) 
		{ 
			//Calculate the slope at each point 
			double m = slope(x, y); 
			
			//Calculate the line coordinates 
			double x1 = x + 0.1; 
			double y1 = y + 0.1*m; 
			
			//Draw the line 
			printf("drawLine(%lf, %lf, %lf, %lf);\n", x, y, x1, y1); 
		} 
	} 
} 

//Driver code 
int main() 
{ 
	//Plot the slope field 
	slope_field(-10, 10, -10, 10, 1.0); 
	
	return 0;
}
