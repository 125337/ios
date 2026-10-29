@interface EditImageCropOverlayView : MMUIView
{
    BOOL _usesAdaptiveRectOverlay; // +0x8
    unsigned long long _overlayLevel; // +0x10
    long long _cropOverlayViewStyle; // +0x18
    CALayer * _blackLayer; // +0x20
    CAShapeLayer * _shapeLayer; // +0x28
    NSArray * _adaptiveEdges; // +0x30
    CGRect _brightFrame; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initLayer;
- (void)set_brightFrame:(CGRect)arg1;
- (void)set_overlayLevel:(unsigned long long)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setUsesAdaptiveRectOverlay:(BOOL)arg1;
- (void)updateAdaptiveEdges;
- (CGRect)_brightFrame;
- (unsigned long long)_overlayLevel;
- (BOOL)usesAdaptiveRectOverlay;
- (long long)cropOverlayViewStyle;
- (void)setCropOverlayViewStyle:(long long)arg1;
- (id)blackLayer;
- (void)setBlackLayer:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)adaptiveEdges;
- (void)setAdaptiveEdges:(id)arg1;
- (void).cxx_destruct;
@end
