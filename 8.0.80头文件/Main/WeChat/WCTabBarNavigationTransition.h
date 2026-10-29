@interface WCTabBarNavigationTransition : NSObject
{
    BOOL _sourceHidden; // +0x8
    BOOL _targetHidden; // +0x9
    BOOL _originalInteractionEnabled; // +0xa
    UINavigationController * _navigationController; // +0x10
    UIViewController * _destinationViewController; // +0x18
    id <UIViewControllerTransitionCoordinator> _coordinator; // +0x20
    UIView * _snapshot; // +0x28
    WCTabBarView * _transitionTabBarView; // +0x30
    unsigned long long _phase; // +0x38
}
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)destinationViewController;
- (void)setDestinationViewController:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (BOOL)sourceHidden;
- (void)setSourceHidden:(BOOL)arg1;
- (BOOL)targetHidden;
- (void)setTargetHidden:(BOOL)arg1;
- (BOOL)originalInteractionEnabled;
- (void)setOriginalInteractionEnabled:(BOOL)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (id)transitionTabBarView;
- (void)setTransitionTabBarView:(id)arg1;
- (unsigned long long)phase;
- (void)setPhase:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
