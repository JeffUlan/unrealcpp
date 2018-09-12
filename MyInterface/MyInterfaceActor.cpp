// Harrison McGuire
// UE4 Version 4.20.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "MyInterfaceActor.h"


// Sets default values
AMyInterfaceActor::AMyInterfaceActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Name = FString(TEXT("Harry"));

}

// Called when the game starts or when spawned
void AMyInterfaceActor::BeginPlay()
{
	Super::BeginPlay();

	SaySomething();
	
}

// Called every frame
void AMyInterfaceActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyInterfaceActor::SaySomething() 
{
	IMyInterface::SaySomething();
	UE_LOG(LogTemp, Warning, TEXT("Hello Galaxy"));
}