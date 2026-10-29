@interface WCAdLiveLikeAnimationView : MMUIView
{
    BOOL _pauseFlag; // +0x8
    MMLiveLikeAnimationUtil * _liveLikeAnimationUtil; // +0x10
    MMTimer * _animationTimer; // +0x18
    double _animationInterval; // +0x20
    NSArray * _cheerIconList; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 animationInterval:(double)arg2 cheerIconList:(id)arg3;
- (void)initView;
- (void)dealloc;
- (void)startAnimation;
- (void)stopAnimation;
- (void)displayLiveLikeAnimation;
- (id)animationTimer;
- (id)liveLikeAnimationUtil;
- (void)setLiveLikeAnimationUtil:(id)arg1;
- (void)setAnimationTimer:(id)arg1;
- (BOOL)pauseFlag;
- (void)setPauseFlag:(BOOL)arg1;
- (double)animationInterval;
- (void)setAnimationInterval:(double)arg1;
- (id)cheerIconList;
- (void)setCheerIconList:(id)arg1;
- (void).cxx_destruct;
@end

