@interface EmoticonCustomCreateEditorLayoutView : WCEditVideoLayoutView
{
    BOOL _isClickToCropTime; // +0x8
    BOOL _hasTextEdited; // +0x9
}
- (id)initWithFrame:(CGRect)arg1;
- (double)getVideoScaleForCrop;
- (void)layoutScrollView:(double)arg1;
- (void)initCropToolAttrBar;
- (void)getNewCropToolAttrBar;
- (void)onClickCropEdit:(id)arg1;
- (void)initTopBar;
- (void)initSendBtn;
- (void)onClickCancel;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)trackingWithTouch:(BOOL)arg1;
- (BOOL)isClickToCropTime;
- (void)setIsClickToCropTime:(BOOL)arg1;
- (BOOL)hasTextEdited;
- (void)setHasTextEdited:(BOOL)arg1;
@end
