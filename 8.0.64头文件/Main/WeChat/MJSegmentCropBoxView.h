@interface MJSegmentCropBoxView : UIView
{
    double _croppedViewInitializedScale; // +0x8
    UIView * _croppedView; // +0x10
    CGSize _croppedViewInitializedSize; // +0x18
}
- (id)init;
- (void)commonInit;
- (void)handlePanGesture:(id)arg1 inView:(id)arg2;
- (void)handlePinchGesture:(id)arg1 inView:(id)arg2;
- (void)restrictCroppedViewScaleTransformAnimated:(BOOL)arg1;
- (void)restrictCroppedViewScaleTransform;
- (void)restrictCroppedViewCenterAnimated:(BOOL)arg1;
- (void)restrictCroppedViewCenter;
- (CGRect)restrictCroppedRect:(CGRect)arg1;
- (CGRect)calcCroppedRect;
- (void)resetToOriginalRect;
- (CGSize)croppedViewInitializedSize;
- (void)setCroppedViewInitializedSize:(CGSize)arg1;
- (double)croppedViewInitializedScale;
- (void)setCroppedViewInitializedScale:(double)arg1;
- (id)croppedView;
- (void)setCroppedView:(id)arg1;
- (void).cxx_destruct;
@end
