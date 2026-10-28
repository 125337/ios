@interface GKResizeableCropOverlayView : GKImageCropOverlayView
{
    CGSize _initialContentSize; // +0x8
    BOOL _resizingEnabled; // +0x18
    CGPoint _theAnchor; // +0x20
    CGPoint _startPoint; // +0x30
    struct _resizeMultiplyer; // +0x40
    UIView * _contentView; // +0x50
    GKCropBorderView * _cropBorderView; // +0x58
}
- (void)setFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 andInitialContentSize:(CGSize)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_addContentViews;
- (CGPoint)_calcuateWhichBorderHandleIsTheAnchorPointFromHere:(CGPoint)arg1;
- (id)_getAllCurrentHandlePositions;
- (void)_resizeWithTouchPoint:(CGPoint)arg1;
- (CGRect)_preventBorderFrameFromGettingTooSmallOrTooBig:(CGRect)arg1;
- (void)_resetFramesToThisOne:(CGRect)arg1;
- (void)_fillMultiplyer;
- (void)drawRect:(CGRect)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)cropBorderView;
- (void).cxx_destruct;
@end
