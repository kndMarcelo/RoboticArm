// Fill out your copyright notice in the Description page of Project Settings.


#include "Test/SampleTest.h"
//#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FATest, "Project.Sample.Test A", EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBTest, "Project.Sample.Test B", EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FATest::RunTest(const FString& Parameters)
{
	{
		TestEqual(TEXT("Testing assertEqual"), 1, 3);

	}

	return true;
}

bool FBTest::RunTest(const FString& Parameters)
{
	{
		TestEqual(TEXT("Testing assertEqual"), 3, 3);

	}

	return true;
}