@interface MMFinderLiveECShopWindowShareTask : MMFinderLiveECBaseShareTask
{
    BOOL _useShopWindowCardV2; // +0x8
    NSString * _liteAppID; // +0x10
    NSString * _liteAppPath; // +0x18
    NSString * _liteAppQuery; // +0x20
    NSString * _query; // +0x28
    WCFinderLiveShopWindowShareItem * _shopWindowShareItem; // +0x30
}
- (id)init;
- (BOOL)useShopWindowCardV2;
- (void)setUseShopWindowCardV2:(BOOL)arg1;
- (id)liteAppID;
- (void)setLiteAppID:(id)arg1;
- (id)liteAppPath;
- (void)setLiteAppPath:(id)arg1;
- (id)liteAppQuery;
- (void)setLiteAppQuery:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)shopWindowShareItem;
- (void)setShopWindowShareItem:(id)arg1;
- (void).cxx_destruct;
@end

