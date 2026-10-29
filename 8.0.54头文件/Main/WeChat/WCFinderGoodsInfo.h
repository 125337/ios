@interface WCFinderGoodsInfo : NSObject
{
    NSString * _goodsTitle; // +0x8
    NSString * _goodsProductID; // +0x10
    NSString * _goodsMiniAppId; // +0x18
    NSString * _goodsMiniAppPath; // +0x20
}
+ (id)goodsInfoWithMiniAppCompleteParams:(id)arg1;
- (id)goodsTitle;
- (void)setGoodsTitle:(id)arg1;
- (id)goodsProductID;
- (void)setGoodsProductID:(id)arg1;
- (id)goodsMiniAppId;
- (void)setGoodsMiniAppId:(id)arg1;
- (id)goodsMiniAppPath;
- (void)setGoodsMiniAppPath:(id)arg1;
- (void).cxx_destruct;
@end

