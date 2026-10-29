@interface WCFinderHighEntropyTransitionSourceView : UIView <WCFinderZoomAnimatorBehavior>
{
    UIView * _targetView; // +0x8
    BOOL _targetViewOriginHidden; // +0x10
    BOOL _targetViewHiddenByAnimator; // +0x11
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithTargetView:(id)arg1;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (void)restoreTargetViewIfNeeded;
- (void)dealloc;
- (void).cxx_destruct;
@end
