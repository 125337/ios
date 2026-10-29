@interface TransitionStateInfo : NSObject
{
    long long _transitionState; // +0x8
    NSDictionary * _extraInfo; // +0x10
}
- (long long)transitionState;
- (void)setTransitionState:(long long)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end

