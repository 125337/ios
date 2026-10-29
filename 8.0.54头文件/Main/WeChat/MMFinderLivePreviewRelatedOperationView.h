@interface MMFinderLivePreviewRelatedOperationView : MMLiveOperationView <MMLivePivotCollecitonViewZoomAnimatorExt, WCFinderLiveExt, MMFinderLiveConnectMicAllUserInfoViewLayoutInfoDelegate>
{
    MMFinderLiveConnectMicAllUserInfoView * _connectMicAllUserInfoView; // +0x8
    MMFinderLivePreviewRelatedHeaderView * _previewRelatedHeaderView; // +0x10
    MMFinderLiveMinifyRoomControlBanner * _minifyRoomBanner; // +0x18
    MMUIButton * _backgroundButton; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(BOOL)arg2;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onEnterLive;
- (void)layoutUI;
- (void)updateSelfDisplayProperties;
- (void)layoutPreviewRelatedHeaderView;
- (void)layoutPreviewRelatedHeaderViewForce:(BOOL)arg1;
- (void)layoutMinifyRoomBanner;
- (void)layoutMinifyRoomBannerForce:(BOOL)arg1;
- (void)checkInitMinifyRoomBanner;
- (id)genMinifyRoomBanner;
- (id)getFinderLiveTask;
- (void)layoutConnectMicVideoOperationView;
- (void)resetConnectMicVideoOperationViewFrame;
- (void)resetConnectMicVideoOperationViewFrameWithState:(unsigned long long)arg1;
- (double)getMinifyRoomBannerTop;
- (void)layoutBackgroundButton;
- (void)tapPreviewView;
- (void)updateContentsHiddenStatus;
- (void)extraOperationInfoUpdated;
- (void)visibilityChanged:(BOOL)arg1;
- (void)visibilityChanged:(BOOL)arg1 invokeType:(unsigned long long)arg2;
- (BOOL)existBannerView;
- (BOOL)existSameBannerWithInfo:(id)arg1;
- (void)removeCurrentBanner;
- (void)showBannerView:(id)arg1;
- (void)onGetPollingFetchEventWithTaskId:(id)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3 ret:(unsigned int)arg4;
- (double)getZoomOffset;
- (void)doZoomInAnimator;
- (void)updateBeforeZoomIn;
- (void)updateAfterZoomIn;
- (void)doZoomOutAnimator;
- (void)updateBeforeZoomOut;
- (void)updateAfterZoomOut;
- (CGRect)onMMFinderLiveConnectMicAllUserInfoViewNormalizedFrameAspectRatioConversionRequested:(CGRect)arg1;
- (id)connectMicAllUserInfoView;
- (void)setConnectMicAllUserInfoView:(id)arg1;
- (id)previewRelatedHeaderView;
- (void)setPreviewRelatedHeaderView:(id)arg1;
- (id)minifyRoomBanner;
- (void)setMinifyRoomBanner:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (void).cxx_destruct;
@end

