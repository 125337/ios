@interface WCAdBiddingSliderCardView : WCAdSliderCardView <WCAdSliderCardCellViewDelegate>
{
    BOOL _hasPassedLandingThreshold; // +0x8
    BOOL _userHasInteracted; // +0x9
    WCAdBiddingSliderCardFlowLayout * _carouselLayout; // +0x10
    WCAdBiddingSliderCardStyleConfig * _config; // +0x18
    long long _templateType; // +0x20
    double _distanceBeginDragging; // +0x28
    long long _indexBeforeDragging; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 templateType:(long long)arg2 cardList:(id)arg3 slideJumpInfo:(id)arg4 dataItem:(id)arg5 isDetail:(BOOL)arg6;
- (void)initCollectionView;
- (void)configureWithConfig:(id)arg1;
- (void)updateVisibleCellData:(id)arg1 dataItem:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)shockDeviceIfNeed:(double)arg1;
- (void)setTitleForFooterView:(id)arg1 withReleaseStyle:(BOOL)arg2;
- (void)onCellClickToSlide:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)checkCellExposure;
- (BOOL)nextPage;
- (id)carouselLayout;
- (void)setCarouselLayout:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (long long)templateType;
- (void)setTemplateType:(long long)arg1;
- (BOOL)hasPassedLandingThreshold;
- (void)setHasPassedLandingThreshold:(BOOL)arg1;
- (double)distanceBeginDragging;
- (void)setDistanceBeginDragging:(double)arg1;
- (BOOL)userHasInteracted;
- (void)setUserHasInteracted:(BOOL)arg1;
- (long long)indexBeforeDragging;
- (void)setIndexBeforeDragging:(long long)arg1;
- (void).cxx_destruct;
@end
