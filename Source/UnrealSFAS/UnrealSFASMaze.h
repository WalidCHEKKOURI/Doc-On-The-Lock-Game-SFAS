// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnrealSFASMaze.generated.h"

UCLASS()
class UNREALSFAS_API AUnrealSFASMaze : public AActor
{
	GENERATED_BODY()
	
		const static int32 mazeSize = 20;
	// Arrays of binary values: 1 = wall, 0 = space

		// Array of binary values: 1 = wall, 0 = space
	uint32 mazeArray1[mazeSize] = { 0b11111111111111111111,
									0b10100000000000000001,
									0b10101010111111111101,
									0b10101010001111000101,
									0b10101010100001010001,
									0b10101010111111111111,
									0b10101010000000000001,
									0b10001011111111111101,
									0b11111000000000000101,
									0b10001111111111111101,
									0b10101111111111111001,
									0b10100000000000001101,
									0b10111011111111101001,
									0b10100010000000101011,
									0b10101110111110101001,
									0b10100000100010101101,
									0b10101110001110100001,
									0b10111111111110111101,
									0b10000000000000000001,
									0b11111111111111111101 };



		
	uint32 mazeArray2[mazeSize] = { 0b11111111111111111111,
								0b10000000000000000001,
								0b10101010111111111101,
								0b10101010001111000101,
								0b10001010100001010001,
								0b10001010111111111111,
								0b10101010000000000001,
								0b10001011111111111001,
								0b11111000000000000001,
								0b10001111110001111101,
								0b10101111110011111101,
								0b10100011000000001101,
								0b10111011000111101001,
								0b10100010000000101011,
								0b10101110111110101011,
								0b10100000100010101111,
								0b10001110001110100001,
								0b10111111111110111101,
								0b10000000000000000001,
								0b10111111111111111111 };


	uint32 mazeArray3[mazeSize] = { 0b11111111111111111111,
							0b10100000000000000001,
							0b10001010111111011101,
							0b10101010000111000101,
							0b10101010100001010001,
							0b10101010111111111111,
							0b10101010000000000001,
							0b10001011111111111101,
							0b11111000000000000101,
							0b11111110111111111101,
							0b10101111111111111001,
							0b10100000000000001101,
							0b10111011111111101001,
							0b10100010000000101011,
							0b10101110111110101001,
							0b10100000100010101101,
							0b10101110001110100001,
							0b10111111111110111101,
							0b10000000000000000001,
							0b11111111110111111111 };

		
		
public:	
	// Sets default values for this actor's properties
	AUnrealSFASMaze();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditDefaultsOnly, Category = Maze)
	UStaticMesh* WallMesh;

	//Texture of the cube mesh
	UPROPERTY(EditInstanceOnly, Category = Maze)
	class UTexture* WallTexture ;

	//Material of the cube mesh
	UPROPERTY(EditDefaultsOnly, Category = Maze)
		class UMaterial* ExampleMaterial;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly ,Category = Maze, meta = (ClampMin = "1", ClampMax = "3" , UIMin = "1", UIMax = "3"))
	int MazeLevel = 1;
};
