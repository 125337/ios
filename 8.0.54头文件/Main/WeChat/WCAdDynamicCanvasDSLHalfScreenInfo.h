@interface WCAdDynamicCanvasDSLHalfScreenInfo : NSObject
{
    BOOL _isHalfScreen; // +0x8
    double _height; // +0x10
    double _heightPercent; // +0x18
}
- (double)halfScreenHeight;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
@end

