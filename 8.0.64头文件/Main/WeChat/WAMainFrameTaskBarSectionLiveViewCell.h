@interface WAMainFrameTaskBarSectionLiveViewCell : WAMainFrameTaskBarSectionOtherViewCell <WCFinderLiveExt, WCFinderFeedContentVMExt>
{
    WCFinderFeedImageCDNView * _finderCoverView; // +0x8
    UIView * _liveNowView; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    WCFinderLiveNowView * _liveEndView; // +0x20
    UIImageView * _liveImageView; // +0x28
    UILabel * _liveLabel; // +0x30
}
- (void)initView;
- (void)layoutSubviews;
- (BOOL)supportAddToMinimize;
- (id)defaultImage;
- (void)updateWithListInfo:(id)arg1;
- (void)changeToLiveClosed;
- (void)updateCoverSpamEffect;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void).cxx_destruct;
@end
