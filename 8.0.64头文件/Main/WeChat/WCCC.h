@interface WCCC : NSObject
+ (id)usedsDataFromPtr:(const BOOL *)arg1 count:(unsigned long long)arg2;
+ (id)usedsData;
+ (id)usedsData:(id)arg1 byIncludingUsedsData:(id)arg2;
+ (id)usedsData:(id)arg1 byIncludingUsedIndexes:(id)arg2;
+ (id)usedsData:(id)arg1 byExcludingUsedsData:(id)arg2;
+ (BOOL)isValidWithIndex:(unsigned long long)arg1 inUsedsData:(id)arg2;
+ (BOOL)isCoveredWithIndex:(unsigned long long)arg1 inUsedsData:(id)arg2;
+ (id)collectionBlocksFromUsedsData:(id)arg1;
+ (id)collectionBlocks;
+ (id)usedIndexesWithCollectionOfPath:(id)arg1;
@end
