@interface WCFinderTransitionAnimatorList : NSObject
{
    BOOL _keepPlay; // +0x8
    NSString * _passPlayerTid; // +0x10
    long long _animateType; // +0x18
    WCFinderTransitionUserInfo * _userInfo; // +0x20
    NSMutableArray * _animators; // +0x28
}
+ (id)newWithCount:(long long)arg1 animators:(id)arg2;
- (void)onAnimationPrepare;
- (BOOL)closeAsCard;
- (BOOL)dragDownClose;
- (BOOL)pinBackView;
- (BOOL)_checkKeepPlay;
- (id)_checkPassPlayerTid;
- (BOOL)hasAnimator;
- (void)onAnimationCleanUp:(BOOL)arg1;
- (id)fetchPerformAnimator:(id)arg1;
- (id)_fetchPerformAnimator:(id)arg1 context:(id)arg2;
- (BOOL)keepPlay;
- (void)setKeepPlay:(BOOL)arg1;
- (id)passPlayerTid;
- (void)setPassPlayerTid:(id)arg1;
- (long long)animateType;
- (void)setAnimateType:(long long)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)animators;
- (void)setAnimators:(id)arg1;
- (void).cxx_destruct;
@end
