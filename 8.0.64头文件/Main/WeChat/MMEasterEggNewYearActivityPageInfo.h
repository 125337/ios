@interface MMEasterEggNewYearActivityPageInfo : NSObject
{
    unsigned long long _canvasPageId; // +0x8
    NSString * _canvasPageXML; // +0x10
    NSString * _weAppUserName; // +0x18
    NSString * _weAppPagePath; // +0x20
    NSString * _h5URL; // +0x28
    NSString * _couponAppId; // +0x30
    NSString * _couponStockId; // +0x38
    NSString * _finderUsername; // +0x40
    NSString * _finderFeedId; // +0x48
    NSString * _finderNonceId; // +0x50
}
- (id)initWithMaterialPageInfo:(id)arg1;
- (BOOL)isValidWithPageType:(unsigned long long)arg1;
- (unsigned long long)canvasPageId;
- (void)setCanvasPageId:(unsigned long long)arg1;
- (id)canvasPageXML;
- (void)setCanvasPageXML:(id)arg1;
- (id)weAppUserName;
- (void)setWeAppUserName:(id)arg1;
- (id)weAppPagePath;
- (void)setWeAppPagePath:(id)arg1;
- (id)h5URL;
- (void)setH5URL:(id)arg1;
- (id)couponAppId;
- (void)setCouponAppId:(id)arg1;
- (id)couponStockId;
- (void)setCouponStockId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderFeedId;
- (void)setFinderFeedId:(id)arg1;
- (id)finderNonceId;
- (void)setFinderNonceId:(id)arg1;
- (void).cxx_destruct;
@end
