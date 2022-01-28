// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

class USphereComponent;

UCLASS()
class MYPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "My Components")
	UStaticMeshComponent* BallMesh;

	UPROPERTY(VisibleAnywhere, Category = "My Components")
	USphereComponent* SphereComponent;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
