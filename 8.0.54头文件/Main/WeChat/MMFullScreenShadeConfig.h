@interface MMFullScreenShadeConfig : NSObject
{
    BOOL _cancleOnTouch; // +0x8
    NSString * _remindWording; // +0x10
    double _topRation; // +0x18
    double _maxTextSize; // +0x20
    double _animationDuration; // +0x28
}
- (id)remindWording;
- (void)setRemindWording:(id)arg1;
- (double)topRation;
- (void)setTopRation:(double)arg1;
- (BOOL)cancleOnTouch;
- (void)setCancleOnTouch:(BOOL)arg1;
- (double)maxTextSize;
- (void)setMaxTextSize:(double)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (void).cxx_destruct;
@end

