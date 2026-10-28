@interface WCFinderHalfScreenEditImageLayoutView : WCFinderEditImageBasicLayoutView <WCFinderHalfScreenEditFrameBlurViewDelegate>
{
    BOOL _hiddenCropBtn; // +0x8
    BOOL _needAdjustThumbItemSize; // +0x9
    UIView * _headBlurView; // +0x10
    UIView * _bottomBlurView; // +0x18
    WCFinderAlbumScrollViewParamModel * _scrollViewParamModel; // +0x20
    WCFinderHalfScreenEditFrameBlurView * _frameCropView; // +0x28
}
- (void)updateCropLinesWithPoint:(CGPoint)arg1;
- (void)triggerScrollViewDidEndZooming;
- (void)updateScrollViewFrame;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onFinderEditFrameBlurViewUpdateBlurButtonFrame:(CGRect)arg1;
- (void)updateScrollViewLayoutViews;
- (void)onDoubleClickScrollViewAction;
- (void)resetPreviewImageAndSetScrollViewFrameWithAnim:(BOOL)arg1;
- (void)resetPreviewImageAndSetScrollViewFrame;
- (unsigned long long)setBGMViewButtonOption;
- (CGSize)getEditSelectedCollectionViewItemSize;
- (void)updateCurScrollViewZoomRate;
- (CGRect)currentCropRectInImage;
- (id)initWithFrame:(CGRect)arg1 hiddenCropBtn:(BOOL)arg2 scrollViewParamModel:(id)arg3;
- (void)addBlurView;
- (void)onPenEditImage:(id)arg1;
- (void)onMosaicEditImage:(id)arg1;
- (CGRect)currentCropRectInScreen;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1;
- (BOOL)isTouchOnEditWidget:(CGPoint)arg1;
- (void)finderEditFrameBlurView:(id)arg1 endEditing:(BOOL)arg2;
- (BOOL)hiddenCropBtn;
- (void)setHiddenCropBtn:(BOOL)arg1;
- (id)headBlurView;
- (void)setHeadBlurView:(id)arg1;
- (id)bottomBlurView;
- (void)setBottomBlurView:(id)arg1;
- (id)scrollViewParamModel;
- (void)setScrollViewParamModel:(id)arg1;
- (id)frameCropView;
- (void)setFrameCropView:(id)arg1;
- (BOOL)needAdjustThumbItemSize;
- (void)setNeedAdjustThumbItemSize:(BOOL)arg1;
- (void).cxx_destruct;
@end
