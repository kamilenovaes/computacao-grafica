#include "vec.h"
#include "Color.h"
#include <iostream>

struct Dados{
	float a;
	vec2 v;
	vec3 w;
};

int main(){
	Dados d1 = {1, {2, 4}, {5, 8, 2}};
	Dados d2 = {3, {1, 2}, {2, 3, 1}};
	Dados d3;
	asVec(d3) = 0.75*asVec(d1) + 0.25*asVec(d2);
	print(asVec(d3));
	
	vec3 A = {0.1, 0.1, 0.8};
	vec3 B = {0.3, 0.7, 0.2};
	vec3 C = {0.3, 0.5, 0.0};
	vec3 D = {0.5, 0.3, 0.4};

	float t1 = 0.5;
	float t2 = 0.2;
	vec3 E = lerp(t1, A, B);
	vec3 F = lerp(t1, C, D);
	vec3 G = lerp(t2, E, F);

	print("E", transpose(E));
	print("F", transpose(F));
	print("G", transpose(G));
	
	vec2 u = {2, 1};
	vec2 v = {4, 3};

	vec2 w1 = u + v;
	vec2 w2 = 2*u - 3*v;
	vec2 w3 = u*v;
	vec2 w4 = u/v;

	vec3 m = {1, 2, 3};

	vec4 n = {1, 2, 3, 4};

	u[0] = 1;
	m[1]++;
	n[3] = n[2];

	print("u", u);
	print("v", v);
	print("w1", w1);
	print("w2", w2);
	print("w3", w3);
	print("w4", w4);
	print("m", m);
	print("n", n);

	printf("dot(u,v) = %g\n", dot(u, v));
	printf("norm(u) = %g\n", norm(u));
	print("u normalizado", normalize(u));
}