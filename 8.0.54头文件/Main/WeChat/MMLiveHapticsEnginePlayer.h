@interface MMLiveHapticsEnginePlayer : MMLiveHapticsPlayer
{
    CHHapticEngine * _hapticsEngine; // +0x8
}
- (void)anticipatePlayingWithinTimeInterval:(double)arg1;
- (void)playPattern:(id)arg1;
- (void)playPatternInFile:(id)arg1;
- (void)createEngine;
- (void)startEngineWithCompletionBlock:(id /* block */)arg1;
- (void)stopEngine;
- (void)playPatternWithinData:(id)arg1;
- (id)hapticsEngine;
- (void)setHapticsEngine:(id)arg1;
- (void).cxx_destruct;
@end

