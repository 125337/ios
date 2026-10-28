@interface WCFinderFullScreenEditImageLayoutView : WCFinderEditImageBasicLayoutView <WCFinderFullScreenEditFrameBlurViewDelegate>
{
    BOOL _hiddenCropBtn; // +0x8
    BOOL _needAdjustThumbItemSize; // +0x9
    id <WCFinderFullScreenEditImageLayoutViewDelegate> _finderDelegate; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 hiddenCropBtn:(BOOL)arg2;
- (void)onPenEditImage:(id)arg1;
- (void)onMosaicEditImage:(id)arg1;
- (CGRect)currentCropRectInImage;
- (CGRect)currentCropRectInScreen;
- (CGRect)fullScreenCropRect;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1;
- (BOOL)isTouchOnEditWidget:(CGPoint)arg1;
- (void)finderEditFrameBlurView:(id)arg1 endEditing:(BOOL)arg2;
- (void)updateCropLinesWithPoint:(CGPoint)arg1;
- (unsigned long long)setBGMViewButtonOption;
- (CGSize)getEditSelectedCollectionViewItemSize;
- (void)onClickmusicBGMViewAction;
- (void)reportClickDoneAction;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (BOOL)hiddenCropBtn;
- (void)setHiddenCropBtn:(BOOL)arg1;
- (BOOL)needAdjustThumbItemSize;
- (void)setNeedAdjustThumbItemSize:(BOOL)arg1;
- (void).cxx_destruct;
@end
