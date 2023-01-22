
#include "PawnC1.h"
#include "Components/BoxComponent.h"


APawnC1::APawnC1()
{
	ShapeComponent = CreateDefaultSubobject<UShapeComponent,UBoxComponent>(TEXT("Any Shape"));
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent,UCapsuleComponentC1>(TEXT("Capsule Shape"));

}

