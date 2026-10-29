@interface WCFinderFullScreenCompositionLayoutView : WCFinderEditVideoBasicLayoutView <WCFinderEditVideoProgressInfoViewDelegate, WCFinderEditVideoCropViewDelegate, WCEditImageOperationDelegate, WCFinderFullScreenEditFrameBlurViewDelegate, WCFinderEditVideoMultiVideoCropViewDelegate>
{
    BOOL _isTimeCropDragging; // +0x8
    id <WCFinderFullScreenCompositionLayoutViewDelegate> _finderDelegate; // +0x10
    WCFinderEditVideoProgressInfoView * _progressView; // +0x18
    WCFinderEditVideoCropView * _finderEditVideoCropView; // +0x20
    WCFinderEditVideoMultiVideoCropView * _multiVideoTimeCropView; // +0x28
    WCFinderEditVideoPorgressInfoViewModel * _progressViewModel; // +0x30
    WCFinderFullScreenEditFrameBlurView * _frameCropView; // +0x38
    NSMutableArray * _videoUrls; // +0x40
    MAVVideoComposition * _composition; // +0x48
}
- (void)initCropToolAttrBar;
- (void)updateFinderProgressBarWithAttr:(id)arg1;
- (void)initView;
- (id)genComposition;
- (id)adjustCompositionTimeRange:(id)arg1 withAttr:(id)arg2;
- (void)onEditVideo;
- (void)genThumbImage;
- (void)setVideoUrls:(id)arg1;
- (void)cropVideoOutOfLimit;
- (void)setupData;
- (void)setupMultiVideoTimeCropView;
- (void)setupEditFrameBlurView;
- (CGRect)adjustCropViewHeight:(CGRect)arg1;
- (void)setupCropView;
- (void)setupProgressView;
- (void)layoutSubviews;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (CGRect)currentCropRectInScreen;
- (CGPoint)cropRectCenterOffset;
- (id)editResultCompositionWithTargetWidth:(double)arg1 musicUrl:(id)arg2 needCrop:(BOOL)arg3;
- (void)setCropView:(id)arg1 hidden:(BOOL)arg2;
- (void)setEditMultiVideoTimeCropViewHidden:(BOOL)arg1;
- (void)setEditVideoCropViewHidden:(BOOL)arg1;
- (void)updateSingleCompositionWithEditVideoAttr:(id)arg1 index:(long long)arg2;
- (void)updateCompositionWithEditVideoAttr:(id)arg1 needFullVideoCrop:(BOOL)arg2;
- (CGRect)calcCenterWithDisplayRect:(CGRect)arg1 cropRect:(CGRect)arg2 track:(id)arg3;
- (void)onClickCropEdit:(id)arg1;
- (void)onClickDone;
- (void)timeCropForSingleVideoAtIndex:(unsigned long long)arg1;
- (void)timeCropForMultiVideo;
- (CGRect)getAssetPreviewFrame;
- (void)finderEditVideoProgressInfoView:(id)arg1 didTriggerSeekWithProgress:(double)arg2;
- (void)finderEditVideoProgressInfoView:(id)arg1 didClickRow:(unsigned long long)arg2;
- (void)finderEditVideo:(id)arg1 didScrollIsDecelerating:(BOOL)arg2;
- (void)finderEditVideoScrollViewDidEndDeceleratingWithProgress:(double)arg1;
- (void)finderEditVideoProgressInfoViewDidStartDragging;
- (void)finderEditVideoProgressInfoView:(id)arg1 didEndDraggingWidhProgress:(double)arg2;
- (void)finderMultiVideoTimeCropView:(id)arg1 didClickDoneButton:(id)arg2 withAttr:(id)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didClickCancelButton:(id)arg2 withAttr:(id)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didStartPanSingleVideoAtIndex:(unsigned long long)arg2 withAttr:(id)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didChangePanSingleVideoAtIndex:(unsigned long long)arg2 progress:(double)arg3 withAttr:(id)arg4;
- (void)finderMultiVideoTimeCropView:(id)arg1 didEndChangeCropTimeWithAttr:(id)arg2 pauseAtTime:(double)arg3 index:(unsigned long long)arg4;
- (void)finderMultiVideoTimeCropView:(id)arg1 didScrollWithProgress:(double)arg2 withIndex:(unsigned long long)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didClickPlayButtonWithPlayState:(BOOL)arg2;
- (void)finderMultiVideoTimeCropView:(id)arg1 didEndDeceleratingWithProgress:(double)arg2;
- (void)finderEditCropView:(id)arg1 didClickCloseBtnWithEditIndex:(long long)arg2 withOriginStartTime:(double)arg3 originEndTime:(double)arg4;
- (void)finderEditCropView:(id)arg1 didClickDoneBtnWithEditIndex:(long long)arg2;
- (void)finderEditCropViewDidChangeCropTimeRangeWithStartTime:(double)arg1 endTime:(double)arg2 editAssetIndex:(long long)arg3;
- (void)finderEditCropView:(id)arg1 valueDidChange:(double)arg2 currentEditIndex:(long long)arg3;
- (void)videoCompositionBrowserView:(id)arg1 progressDidUpdateWithCurrentTime:(struct)arg2;
- (void)videoCompositionBrowserViewPlayReachEnd:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (BOOL)currentPlayerViewLayoutIsIllegal;
- (CGRect)currentVideoVisibleRect;
- (CGSize)getCurrentAssetSize;
- (void)setPlayerViewZoomScaleFillToCropRect;
- (void)makePlayerViewLayoutLegalToCropView;
- (CGRect)currentPreviewRect;
- (void)addPatMusicInfoToBGMLogic;
- (BOOL)useVideoCompositionPreview;
- (BOOL)isTouchOnEditWidget:(CGPoint)arg1;
- (CGRect)getFullScreenCropRect;
- (void)updateFrameCropViewsLayout;
- (BOOL)shouldShowNewBGMPanel;
- (BOOL)isOnCropProcess;
- (void)EditVideoBGMViewLyricUpdate:(id)arg1 totalTime:(double)arg2;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)finderEditVideoCropView;
- (void)setFinderEditVideoCropView:(id)arg1;
- (id)multiVideoTimeCropView;
- (void)setMultiVideoTimeCropView:(id)arg1;
- (id)progressViewModel;
- (void)setProgressViewModel:(id)arg1;
- (BOOL)isTimeCropDragging;
- (void)setIsTimeCropDragging:(BOOL)arg1;
- (id)frameCropView;
- (void)setFrameCropView:(id)arg1;
- (id)videoUrls;
- (id)composition;
- (void)setComposition:(id)arg1;
- (void).cxx_destruct;
@end

