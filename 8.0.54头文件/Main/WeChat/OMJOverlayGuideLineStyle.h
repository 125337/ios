@interface OMJOverlayGuideLineStyle : NSObject
{
    int _lineWeight; // +0x8
    float _shadowOpacity; // +0xc
    UIColor * _backgroundColor; // +0x10
    double _shadowRadius; // +0x18
    UIColor * _shadowColor; // +0x20
    CGSize _shadowOffset; // +0x28
}
- (id)init;
- (id)initWithLineWeight:(int)arg1 backgroundColor:(id)arg2;
- (id)initWithLineWeight:(int)arg1 backgroundColor:(id)arg2 shadowOpacity:(float)arg3 shadowOffset:(CGSize)arg4 shadowRadius:(double)arg5 shadowColor:(id)arg6;
- (int)lineWeight;
- (void)setLineWeight:(int)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (float)shadowOpacity;
- (void)setShadowOpacity:(float)arg1;
- (CGSize)shadowOffset;
- (void)setShadowOffset:(CGSize)arg1;
- (double)shadowRadius;
- (void)setShadowRadius:(double)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (void).cxx_destruct;
@end

