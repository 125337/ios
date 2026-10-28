@interface WCPayImageMaskView : MMImageView
{
    unsigned long long _tilesX; // +0x10
    unsigned long long _tilesY; // +0x18
    int _tilesFilled; // +0x20
    CGColorSpace * _colorSpace; // +0x28
    CGContext * _imageContext; // +0x30
    unsigned long long _radius; // +0x38
    UIPanGestureRecognizer * _panGesture; // +0x40
    UITapGestureRecognizer * _tapGesture; // +0x48
    CGPoint _nowPoint; // +0x50
    BOOL _testHits; // +0x60
    BOOL _isCanScratch; // +0x61
    id <WCPayImageMaskViewFilledDelegate> _imageMaskFilledDelegate; // +0x68
    WCPayMaskViewMatrix * _maskedMatrix; // +0x70
    NSMutableArray * _touchPoints; // +0x78
}
- (void)updatePercent:(double)arg1;
- (void)setImage:(id)arg1 radius:(unsigned long long)arg2;
- (void)dealloc;
- (void)initialize;
- (id)initWithFrame:(CGRect)arg1;
- (void)setIsCanScratch:(BOOL)arg1;
- (void)handleTapGesture:(id)arg1;
- (double)percentsOfImageMasked;
- (CGPoint)normalizeVector:(CGPoint)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)fillTileWithPoint:(CGPoint)arg1;
- (void)fillTileWithTwoPoints:(CGPoint)arg1 end:(CGPoint)arg2;
- (id)imageMaskFilledDelegate;
- (void)setImageMaskFilledDelegate:(id)arg1;
- (BOOL)isCanScratch;
- (id)maskedMatrix;
- (void)setMaskedMatrix:(id)arg1;
- (id)touchPoints;
- (void)setTouchPoints:(id)arg1;
- (void).cxx_destruct;
@end
