@interface EditImageCropOverlayView : MMUIView
{
    unsigned long long _overlayLevel; // +0x8
    long long _cropOverlayViewStyle; // +0x10
    CALayer * _blackLayer; // +0x18
    CAShapeLayer * _shapeLayer; // +0x20
    CGRect _brightFrame; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initLayer;
- (void)set_brightFrame:(CGRect)arg1;
- (void)set_overlayLevel:(unsigned long long)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGRect)_brightFrame;
- (unsigned long long)_overlayLevel;
- (long long)cropOverlayViewStyle;
- (void)setCropOverlayViewStyle:(long long)arg1;
- (id)blackLayer;
- (void)setBlackLayer:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void).cxx_destruct;
@end

