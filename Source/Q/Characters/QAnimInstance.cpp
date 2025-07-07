#include "Q/Characters/QAnimInstance.h"
#include "Q/Characters/QCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UQAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	QCharacter = Cast<AQCharacter>(TryGetPawnOwner());
	if (QCharacter)
	{
		QCharacterMovement = QCharacter->GetCharacterMovement();
	}
}

void UQAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (QCharacterMovement)
	{
		GroundSpeed = UKismetMathLibrary::VSizeXY(QCharacterMovement->Velocity);
		IsFalling = QCharacterMovement->IsFalling();
		CharacterState = QCharacter->GetCharacterState();
		ActionState = QCharacter->GetActionState();
		DeathPose = QCharacter->GetDeathPose();
	}
}