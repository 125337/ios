@interface WCFinderGoodsInfo : NSObject
{
    BOOL _jumpIsFullPage; // +0x8
    int _jumpBusinessType; // +0xc
    NSString * _goodsProductID; // +0x10
    NSString * _goodsActivityId; // +0x18
    NSString * _goodsTitle; // +0x20
    NSString * _goodsMiniAppId; // +0x28
    NSString * _goodsMiniAppPath; // +0x30
    NSString * _jumpIconUrl; // +0x38
    NSString * _jumpExtInfo; // +0x40
    unsigned long long _activityType; // +0x48
    NSString * _previewIconDarkUrl; // +0x50
    NSString * _previewIconLightUrl; // +0x58
}
+ (id)goodsInfoFromDict:(id)arg1 productId:(id)arg2 activityId:(id)arg3;
+ (id)goodsInfoWithMiniAppCompleteParams:(id)arg1;
- (id)goodsMiniFetchInfoId;
- (id)goodsProductID;
- (void)setGoodsProductID:(id)arg1;
- (id)goodsActivityId;
- (void)setGoodsActivityId:(id)arg1;
- (id)goodsTitle;
- (void)setGoodsTitle:(id)arg1;
- (id)goodsMiniAppId;
- (void)setGoodsMiniAppId:(id)arg1;
- (id)goodsMiniAppPath;
- (void)setGoodsMiniAppPath:(id)arg1;
- (BOOL)jumpIsFullPage;
- (void)setJumpIsFullPage:(BOOL)arg1;
- (id)jumpIconUrl;
- (void)setJumpIconUrl:(id)arg1;
- (int)jumpBusinessType;
- (void)setJumpBusinessType:(int)arg1;
- (id)jumpExtInfo;
- (void)setJumpExtInfo:(id)arg1;
- (unsigned long long)activityType;
- (void)setActivityType:(unsigned long long)arg1;
- (id)previewIconDarkUrl;
- (void)setPreviewIconDarkUrl:(id)arg1;
- (id)previewIconLightUrl;
- (void)setPreviewIconLightUrl:(id)arg1;
- (void).cxx_destruct;
@end
