// Fill out your copyright notice in the Description page of Project Settings.


#include "FStiloWidgetSlateWidgetStyle.h"

FFStiloWidgetSlateStyle::FFStiloWidgetSlateStyle()
{
}

FFStiloWidgetSlateStyle::~FFStiloWidgetSlateStyle()
{
}

const FName FFStiloWidgetSlateStyle::TypeName(TEXT("FFStiloWidgetSlateStyle"));

const FFStiloWidgetSlateStyle& FFStiloWidgetSlateStyle::GetDefault()
{
	static FFStiloWidgetSlateStyle Default;
	return Default;
}

void FFStiloWidgetSlateStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	// Add any brush resources here so that Slate can correctly atlas and reference them
}

