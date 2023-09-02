#include "vec.h"
#include "geometry.h"
#include "Color.h"

int main(){
	vec2 P[] = {{0, 1}, {4, 2}, {2, 4}};

	float area = tri_area(P[0], P[1], P[2]);
	printf("area total = %g\n", area);
	float areaR = tri_area(P[2], P[1], P[0]);
	printf("area reversa = %g\n", areaR);

	vec2 Q = {3,2};
	vec3 a = barycentric_coords(Q, P);
	print("coordenadas baricentricas", a);
	vec2 vQ = a[0]*P[0] + a[1]*P[1] + a[2]*P[2];
	print("Q", Q);
	print("vQ", vQ);
	
	vec2 R = {13,22};
	vec3 b = barycentric_coords(R, P);
	print("coordenadas baricentricas", b);
	vec2 vR = b[0]*P[0] + b[1]*P[1] + b[2]*P[2];
	print("R", R);
	print("vR", vR);

	RGB c1 = 0x7d3fc2_rgb;
	RGB c2 = orange;
	RGB c3 = lerp(0.2, c1, c2);
	print("c1", toVec(c1));
	print("c2", toVec(c2));
	print("c3", toVec(c3));
}
