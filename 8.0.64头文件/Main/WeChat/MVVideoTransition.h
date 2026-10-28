@interface MVVideoTransition : NSObject
{
    long long _beginPts; // +0x8
    long long _duration; // +0x10
    MAVPagTransitionEffect * _transitionEffect; // +0x18
    NSString * _transtionPath; // +0x20
    long long _videoIdBeforeTransition; // +0x28
    long long _videoIdAfterTransition; // +0x30
}
- (BOOL)containsPts:(long long)arg1;
- (long long)beginPts;
- (void)setBeginPts:(long long)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (id)transitionEffect;
- (void)setTransitionEffect:(id)arg1;
- (id)transtionPath;
- (void)setTranstionPath:(id)arg1;
- (long long)videoIdBeforeTransition;
- (void)setVideoIdBeforeTransition:(long long)arg1;
- (long long)videoIdAfterTransition;
- (void)setVideoIdAfterTransition:(long long)arg1;
- (void).cxx_destruct;
@end
