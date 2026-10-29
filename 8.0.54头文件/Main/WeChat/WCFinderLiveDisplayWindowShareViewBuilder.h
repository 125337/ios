@interface WCFinderLiveDisplayWindowShareViewBuilder : NSObject
{
    BOOL _isRecordDetail; // +0x8
    WCFinderLiveDisplayWindowShareViewBuildConfig * _config; // +0x10
    WCFinderLiveShopWindowShareItem * _localItem; // +0x18
    WCFinderLiveShopWindowShareItem * _remoteItem; // +0x20
    MMWebImageView * _appLogoView; // +0x28
}
- (id)item;
- (BOOL)isWxShop;
- (BOOL)hasWxShopBackgroundImage;
- (id)productImageURLList;
- (unsigned long long)validProductCount;
- (void)updateAppLogo;
- (double)buildInCanvasForWxShop:(id)arg1;
- (double)buildInCanvas:(id)arg1;
- (double)estimateHeightForWidth:(double)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)localItem;
- (void)setLocalItem:(id)arg1;
- (id)remoteItem;
- (void)setRemoteItem:(id)arg1;
- (BOOL)isRecordDetail;
- (void)setIsRecordDetail:(BOOL)arg1;
- (id)appLogoView;
- (void)setAppLogoView:(id)arg1;
- (void).cxx_destruct;
@end

