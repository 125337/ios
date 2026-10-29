@interface MMFinderLiveShopShelfExtraHeaderInfos : NSObject
{
    BOOL _isFirstGoodsPromoting; // +0x8
    unsigned long long _goodsCount; // +0x10
}
- (unsigned long long)goodsCount;
- (void)setGoodsCount:(unsigned long long)arg1;
- (BOOL)isFirstGoodsPromoting;
- (void)setIsFirstGoodsPromoting:(BOOL)arg1;
@end

