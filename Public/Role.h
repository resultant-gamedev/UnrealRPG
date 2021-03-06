// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#pragma once

#include "Role.generated.h"

USTRUCT(BlueprintType)
struct UNREALRPG_API FAttribute
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int32 base;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	float percent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int32 extra;

	FAttribute()
		:base(0)
		,percent(1.0f)
		, extra(0)
	{}

	FAttribute(int32 InBase)
		:base(InBase)
		, percent(1.0f)
		, extra(0)
	{}

	// get the current value of this attribute 
	int32 Value();

	/*
	* add some addition data on base
	*/
	void AddBase(int32 InAdd);

	void AddPercent(float InPercent);

	void AddExtra(int32 InExtra);
};

USTRUCT(BlueprintType)
struct UNREALRPG_API FAttPoint
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute Point")
	int32 current;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute Point")
	FAttribute max;

	FAttPoint()
		:max()
		,current(100)
	{
	}

	FAttPoint(int32 InMax)
		:max(InMax)
		, current(InMax)
	{
	}

	int32 GetMax()
	{
		return max.Value();
	}

	bool IsDead()
	{
		return current <= 0;
	}

	/*
	* add some addition data on current
	* return the overflow
	*/
	int32 AddPoint(int32 InAdd);

	void AddBase(int32 InAdd);
	void AddPercent(float InPercent);
};

/**
 * 
 */
USTRUCT(BlueprintType)
struct UNREALRPG_API FRole
{
	GENERATED_USTRUCT_BODY()
public:
	FRole();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttPoint Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttPoint Mana;
	// hungry
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttPoint Diet;
	
	/** 6 Attributes Begin**/

	/* 
	*	Strength
	*  Weapon Holding Level ; hit-rate of Melee
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttribute Str;

	/*
	*	Dexterity
	* Weapon Holding Level ; hit-rate of Remote
	* Armor level, riding, unlock, doge, escape, balace, Counterattack
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttribute Dex;

	/*
	*	Constitution
	* max-life; poison resist; focus for caster
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttribute Con;

	/*
	*	Intelligence
	* Get More Addition Point When LevelUp
	* Evaluation, search, Identify, knowledge
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttribute Int;
	
	/*
	*	Wisdom
	* guide, caster level,  Health care, listening
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttribute Wis;
	
	/*
	*	Charisma
	* persuasive, leader, heterosexual attraction
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FAttribute Cha;

	/** 6 Attributes End**/

	/** Economic **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int32 Money; // deposit of player

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int32 Coin;  // game money
};
