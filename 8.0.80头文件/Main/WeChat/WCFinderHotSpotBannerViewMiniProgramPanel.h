@interface WCFinderHotSpotBannerViewMiniProgramPanel : UIView <WCFinderHotSpotBannerViewDelegate>
{
    BOOL _isLoading; // +0x8
    id /* block */ _requestWillDisplayOrNotBlock; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    WCFinderLiveProductShareItem * _productShareItem; // +0x20
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0x28
    WCFinderLiveAudienceComodityLogReporter * _reporter; // +0x30
    WCFinderHotSpotBannerView * _bannerView; // +0x38
}
- (id)initWithWidget:(id)arg1 anchor:(id)arg2 ecSource:(id)arg3;
- (id)initWithWidget:(id)arg1 params:(id)arg2;
- (id)initWithWidget:(id)arg1;
- (void)onClickEnterLiving:(id)arg1;
- (void)handleEnterLiving:(id)arg1;
- (id)reporter;
- (void)resetLoadingFlag;
- (id /* block */)requestWillDisplayOrNotBlock;
- (void)setRequestWillDisplayOrNotBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)productShareItem;
- (void)setProductShareItem:(id)arg1;
- (id)entranceMessageInfo;
- (void)setEntranceMessageInfo:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void)setReporter:(id)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (void).cxx_destruct;
@end
