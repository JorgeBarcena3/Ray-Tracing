#include "../headers/Light.hpp"


Light::Light(vec3 _center, float _intensity)
{
	lightCenter = _center;
	lightIntensity = _intensity;

}

Light::~Light()
{
}

