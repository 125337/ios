@interface WCFinderAccessoryDownloadHeap : NSObject
{
    NSMutableArray * _itemArray; // +0x8
    NSMutableDictionary * _item2IndexMap; // +0x10
}
- (long long)count;
- (void)addItem:(id)arg1;
- (void)removeItemWithIdentifierKey:(id)arg1;
- (void)removeItemWithGroupId:(id)arg1;
- (void)removeAll;
- (id)pop;
- (id)topItem;
- (void)changeItemWithIdentiferKey:(id)arg1 toPriority:(long long)arg2;
- (void)mergeItem:(id)arg1;
- (void)swimWithIndex:(long long)arg1;
- (void)sinkWithIndex:(long long)arg1;
- (void)swapItemWithIndexA:(long long)arg1 andIndexB:(long long)arg2;
- (id)itemAtIndex:(long long)arg1;
- (id)itemArray;
- (id)item2IndexMap;
- (void)setItemArray:(id)arg1;
- (void)setItem2IndexMap:(id)arg1;
- (void).cxx_destruct;
@end
