@interface MMLiveMorphTransitionManager : MMUserService <MMServiceProtocol>
{
    unsigned long long _status; // +0x8
    unsigned long long _mode; // +0x10
    NSMutableDictionary * _transitionContext; // +0x18
}
+ (id)findDismissTargetVCWithTopVC:(id)arg1;
- (void)prepareTransitionInMode:(unsigned long long)arg1;
- (void)setTransitionContextItem:(id)arg1 withKey:(id)arg2;
- (id)transitionContextItemWithKey:(id)arg1;
- (void)notifyTransitionStartedWithDuration:(double)arg1;
- (void)notifyTransitionEnding;
- (void)endTransition;
- (void)cancelTransition;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resetState;
- (void)onPreparationTimeout;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (void).cxx_destruct;
@end
