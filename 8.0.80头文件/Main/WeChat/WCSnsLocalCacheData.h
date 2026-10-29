@interface WCSnsLocalCacheData : MMObject <PBCoding>
{
    unsigned int _updateTime; // +0x8
    NSString * _itemId; // +0x10
    WCSnsOperation * _snsOperation; // +0x18
}
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_snsOperation;
+ (void)PBArrayAdd_itemId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (id)snsOperation;
- (void)setSnsOperation:(id)arg1;
- (void).cxx_destruct;
@end
