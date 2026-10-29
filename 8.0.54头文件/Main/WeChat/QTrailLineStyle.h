@interface QTrailLineStyle : NSObject
{
    int _lineType; // +0x8
    int _highlightDuration; // +0xc
    int _animationStartTime; // +0x10
    int _animationEndTime; // +0x14
    NSArray * _colors; // +0x18
    double _animateRatio; // +0x20
    double _width; // +0x28
}
- (id)init;
- (void)setLineType:(int)arg1;
- (void)setColors:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)setHighlightDuration:(int)arg1;
- (void)setAnimateRatio:(double)arg1;
- (void)setAnimationStartTime:(int)arg1 animationEndTime:(int)arg2;
- (int)lineType;
- (id)colors;
- (int)highlightDuration;
- (double)animateRatio;
- (double)width;
- (int)animationStartTime;
- (void)setAnimationStartTime:(int)arg1;
- (int)animationEndTime;
- (void)setAnimationEndTime:(int)arg1;
- (void).cxx_destruct;
@end

