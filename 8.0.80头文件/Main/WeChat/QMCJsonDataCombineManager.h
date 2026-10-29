@interface QMCJsonDataCombineManager : NSObject
{
    NSSet * _skipItems; // +0x8
    NSDictionary * _targetToSources; // +0x10
    NSDictionary * _mcpItemMap; // +0x18
    NSMutableDictionary * _processedItems; // +0x20
    NSMutableArray * _processingQueue; // +0x28
}
- (id)init;
- (void)prepareCombineMapping:(id)arg1 craftDataJson:(id)arg2;
- (id)immutableCopyOfTargetToSourcesArray:(id)arg1;
- (id)calculateTopologicalOrderWithArray:(id)arg1;
- (id)processCombineForItem:(id)arg1;
- (void)processQueuedItems;
- (id)executeUnifiedCombine:(id)arg1 sourceItems:(id)arg2;
- (id)getDataArray:(id)arg1;
- (id)addSourceTemplateMarker:(id)arg1 sourceTemplateKey:(id)arg2;
- (BOOL)shouldSkipCommandProcessing:(id)arg1;
- (BOOL)isMergeTarget:(id)arg1;
- (void)cleanup;
- (id)skipItems;
- (void)setSkipItems:(id)arg1;
- (id)targetToSources;
- (void)setTargetToSources:(id)arg1;
- (id)mcpItemMap;
- (void)setMcpItemMap:(id)arg1;
- (id)processedItems;
- (void)setProcessedItems:(id)arg1;
- (id)processingQueue;
- (void)setProcessingQueue:(id)arg1;
- (void).cxx_destruct;
@end
