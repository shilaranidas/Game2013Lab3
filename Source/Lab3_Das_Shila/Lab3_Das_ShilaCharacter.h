// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Lab3_Das_ShilaCharacter.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogCharacter, Log, All);

UCLASS(Blueprintable)
class ALab3_Das_ShilaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ALab3_Das_ShilaCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns CursorToWorld subobject **/
	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }
	virtual void BeginPlay() override;
private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UDecalComponent* CursorToWorld;
	/*How much health value is*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "My Category", meta = (ALlowPrivateAccess = "true"))
	int health;
	UFUNCTION(BlueprintCallable, Category = "My Category")
	void AddHealth(int healthPoint);
};

