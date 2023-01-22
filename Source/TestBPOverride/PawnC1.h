
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CapsuleComponentC1.h"
#include "PawnC1.generated.h"

UCLASS()
class TESTBPOVERRIDE_API APawnC1 : public APawn
{
	GENERATED_BODY()

public:
	APawnC1();

private:
	UPROPERTY(Category=Components, VisibleAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"))
	TObjectPtr<UShapeComponent> ShapeComponent;
	UPROPERTY(Category=Components, VisibleAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"))
	TObjectPtr<UCapsuleComponent> CapsuleComponent;

	
	
};
