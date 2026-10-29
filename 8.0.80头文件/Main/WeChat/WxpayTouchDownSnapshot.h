@interface WxpayTouchDownSnapshot : NSObject
{
    unsigned int _windowMoves; // +0x8
    double _timestamp; // +0x10
    NSArray * _recognizers; // +0x18
    UIWindow * _keyWindow; // +0x20
    UIViewController * _topViewController; // +0x28
    unsigned long long _visibleWindows; // +0x30
}
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)recognizers;
- (void)setRecognizers:(id)arg1;
- (id)keyWindow;
- (void)setKeyWindow:(id)arg1;
- (id)topViewController;
- (void)setTopViewController:(id)arg1;
- (unsigned long long)visibleWindows;
- (void)setVisibleWindows:(unsigned long long)arg1;
- (unsigned int)windowMoves;
- (void)setWindowMoves:(unsigned int)arg1;
- (void).cxx_destruct;
@end
