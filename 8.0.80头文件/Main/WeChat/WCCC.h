@interface WCCC : NSObject
+ (id)usedsData;
+ (id)usedsData:(id)arg1 byIncludingUsedsData:(id)arg2;
+ (id)usedsData:(id)arg1 byExcludingUsedsData:(id)arg2;
+ (BOOL)isValidWithIndex:(unsigned long long)arg1 inUsedsData:(id)arg2;
+ (BOOL)isCoveredWithIndex:(unsigned long long)arg1 inUsedsData:(id)arg2;
+ (id)collectionBlocksFromUsedsData:(id)arg1;
+ (id)collectionBlocks;
+ (void)enumerateRLEBlocksInUsedsData:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)usedIndexesWithCollectionOfPath:(id)arg1;
+ (id)mutableUsedsDataCurrent;
+ (BOOL)mutateUsedsData:(id)arg1 byIncludingUsedsData:(id)arg2;
+ (BOOL)mutateUsedsData:(id)arg1 byExcludingUsedsData:(id)arg2;
@end
