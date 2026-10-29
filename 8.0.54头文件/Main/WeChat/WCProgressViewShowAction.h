@interface WCProgressViewShowAction : WCProgressViewBaseAction
{
    long long _currentStepMode; // +0x20
}
- (id /* block */)progress;
- (id /* block */)block;
- (id /* block */)text;
- (id /* block */)stepMode;
- (long long)currentStepMode;
- (void)setCurrentStepMode:(long long)arg1;
@end

