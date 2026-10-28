@interface MMLiveEnterRoomActionModel : NSObject
{
    unsigned long long _type; // +0x8
    long long _action; // +0x10
    FinderWindowProductInfo * _productInfo; // +0x18
    FinderJumpInfo * _jumpInfo; // +0x20
    MMFinderLiveShopSelfOpenParams * _openShopSelfParams; // +0x28
    NSMutableDictionary * _extraInfo; // +0x30
}
- (id)init;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)openShopSelfParams;
- (void)setOpenShopSelfParams:(id)arg1;
- (id)extraInfo;
- (void).cxx_destruct;
@end
