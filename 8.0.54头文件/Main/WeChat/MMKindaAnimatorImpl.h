@interface MMKindaAnimatorImpl : NSObject <CAAnimationDelegate, MMKindaAnimator>
{
    MMVoidCallback * _shakeCompletion; // +0x8
}
- (void)startAnimationImpl:(float)arg1 animation:(id)arg2;
- (void)startAnimationImpl:(float)arg1 animation:(id)arg2 completion:(id)arg3;
- (void)startShakeRotateImpl:(id)arg1 completion:(id)arg2;
- (id)shakeCompletion;
- (void)setShakeCompletion:(id)arg1;
- (void).cxx_destruct;
@end

