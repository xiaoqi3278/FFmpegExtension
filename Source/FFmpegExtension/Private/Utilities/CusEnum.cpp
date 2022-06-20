// Fill out your copyright notice in the Description page of Project Settings.


#include "Utilities/CusEnum.h"

FString UCusEnum::PixFormatToFString(EPixFormat PixFormat)
{
	switch(PixFormat)
	{
	case EPixFormat::yuv420p :
		return FString("yuv420p");
	}
}

std::string UCusEnum::PixFormatToStandardString(EPixFormat PixFormat)
{
	switch (PixFormat)
	{
	case EPixFormat::yuv420p:
		return std::string("yuv420p");
	}
}

const char* UCusEnum::PixFormatToChar(EPixFormat PixFormat)
{
	switch (PixFormat)
	{
	case EPixFormat::yuv420p:
		return "yuv420p";
	}
}
