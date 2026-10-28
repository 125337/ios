@interface MsgImgSearchPhashMemCache : MMObject
{
    NSMutableSet * _isGetingPhashStrSet; // +0x8
    NSMutableDictionary * _localID2MemItemMap; // +0x10
}
- (id)init;
- (BOOL)isInGettingSet:(id)arg1;
- (void)addToGettingSet:(id)arg1;
- (void)removeFromGettingSet:(id)arg1;
- (void)setMemItem:(id)arg1 localID:(unsigned long long)arg2;
- (id)getMemItemForLocalID:(unsigned long long)arg1;
- (id)getPhashStrForLocalID:(unsigned long long)arg1;
- (id)isGetingPhashStrSet;
- (void)setIsGetingPhashStrSet:(id)arg1;
- (id)localID2MemItemMap;
- (void)setLocalID2MemItemMap:(id)arg1;
- (void).cxx_destruct;
@end
