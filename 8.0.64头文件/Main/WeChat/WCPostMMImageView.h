@interface WCPostMMImageView : UIImageView <IMMAssetICloudExt, MMImageProcessTaskExt>
{
    MMImage * _mmImage; // +0x8
    WCMomentsPageContext * _pageContext; // +0x10
    UIView * _statusContainerView; // +0x18
    UIImageView * _livePhotoIconView; // +0x20
    WCAssetStateView * _stateView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setMmImage:(id)arg1;
- (void)updateImageView;
- (void)loadStatusContainerView;
- (void)loadLivePhotoIconViewIfNeeded;
- (void)updateLivePhotoIcon;
- (void)loadStateView;
- (void)updateStateView;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (void)updateCloudTipsViews:(id)arg1;
- (void)imageProcessTask:(id)arg1 didFinishProcessingMMImage:(id)arg2;
- (void)imageProcessTask:(id)arg1 didFailToProcessMMImage:(id)arg2;
- (id)mmImage;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)statusContainerView;
- (void)setStatusContainerView:(id)arg1;
- (id)livePhotoIconView;
- (void)setLivePhotoIconView:(id)arg1;
- (id)stateView;
- (void)setStateView:(id)arg1;
- (void).cxx_destruct;
@end
