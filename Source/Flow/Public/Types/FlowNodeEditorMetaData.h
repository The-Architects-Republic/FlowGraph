// Copyrights ArkRep

#pragma once

#include "CoreMinimal.h"

#include "FlowNodeEditorMetaData.generated.h"


/**
 * Editor metadata to be displayed in the graph node of a Flow Node.
 * Usually displayed at the bottom of the node.
 */
USTRUCT()
struct FLOW_API FFlowNodeEditorMetaData
{
	GENERATED_BODY()

public:
	/** Node's informative image. Only relevant in the editor. */
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> Image { nullptr };

public:
	FFlowNodeEditorMetaData() = default;

	bool HasData() const;
};
