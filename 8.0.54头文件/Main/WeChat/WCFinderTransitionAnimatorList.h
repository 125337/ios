@interface WCFinderTransitionAnimatorList : NSObject
{
    long long _animateType; // +0x8
    WCFinderTransitionUserInfo * _userInfo; // +0x10
    NSMutableArray * _animators; // +0x18
}
+ (id)newWithCount:(long long)arg1 animators:(id)arg2;
- (void)onAnimationPrepare;
- (BOOL)closeAsCard;
- (BOOL)dragDownClose;
- (BOOL)pinBackView;
- (BOOL)hasAnimator;
- (void)onAnimationCleanUp:(BOOL)arg1;
- (id)fetchPerformAnimator;
- (id)_fetchPerformAnimator:(id)arg1;
- (long long)animateType;
- (void)setAnimateType:(long long)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)animators;
- (void)setAnimators:(id)arg1;
- (void).cxx_destruct;
@end

