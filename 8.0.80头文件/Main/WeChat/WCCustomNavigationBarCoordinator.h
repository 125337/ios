@interface WCCustomNavigationBarCoordinator : NSObject <UINavigationControllerDelegate>
{
    BOOL _safeAreaUpdatePending; // +0x8
    id <UINavigationControllerDelegate> _businessDelegate; // +0x10
    UINavigationController * _navigationController; // +0x18
    WCCustomNavigationBar * _bar; // +0x20
    NSMapTable * _safeAreaDeltas; // +0x28
    NSMapTable * _backItems; // +0x30
    UIImage * _defaultBackIndicator; // +0x38
    UINavigationItem * _observedPreviousItem; // +0x40
    UIBarButtonItem * _observedPreviousBackButton; // +0x48
    id <UIViewControllerTransitionCoordinator> _deferredSafeAreaTransitionCoordinator; // +0x50
    unsigned long long _safeAreaTransitionGeneration; // +0x58
}
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
- (id)initWithNavigationController:(id)arg1 bar:(id)arg2;
- (BOOL)isActive;
- (BOOL)logicalHidden;
- (id)activeAppearanceTransitionCoordinator;
- (BOOL)registerSafeAreaUpdateWithTransitionCoordinator:(id)arg1 generation:(unsigned long long)arg2;
- (BOOL)deferSafeAreaUpdateToTransitionCoordinator:(id)arg1;
- (void)deferSafeAreaUpdateUntilPresentationTransitionBegins;
- (void)cancelDeferredSafeAreaUpdate;
- (BOOL)installWithInitialLogicalHidden:(BOOL)arg1;
- (void)setNavigationDelegate:(id)arg1;
- (void)updateCustomNavigationBar;
- (void)viewControllerSafeAreaInsetsDidChange:(id)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 controllerKeyNeedsNotification:(BOOL)arg3;
- (id)safeAreaReferenceViewControllerFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)didShowViewController:(id)arg1;
- (void)applyUserInterfaceStyleForViewController:(id)arg1;
- (void)finishFromViewController:(id)arg1 toViewController:(id)arg2 cancelled:(BOOL)arg3 finalHidden:(BOOL)arg4;
- (void)applySafeAreaToViewController:(id)arg1;
- (void)applySafeAreaToViewController:(id)arg1 referenceViewController:(id)arg2;
- (void)restoreSafeAreaForViewController:(id)arg1;
- (void)restoreSafeAreaForRemovedViewControllers;
- (void)updateBackObservationsForViewController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)backButtonForNavigationItem:(id)arg1;
- (void)popFromBackButton:(id)arg1;
- (id)businessDelegate;
- (void)setBusinessDelegate:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)bar;
- (void)setBar:(id)arg1;
- (id)safeAreaDeltas;
- (void)setSafeAreaDeltas:(id)arg1;
- (id)backItems;
- (void)setBackItems:(id)arg1;
- (id)defaultBackIndicator;
- (void)setDefaultBackIndicator:(id)arg1;
- (id)observedPreviousItem;
- (void)setObservedPreviousItem:(id)arg1;
- (id)observedPreviousBackButton;
- (void)setObservedPreviousBackButton:(id)arg1;
- (id)deferredSafeAreaTransitionCoordinator;
- (void)setDeferredSafeAreaTransitionCoordinator:(id)arg1;
- (unsigned long long)safeAreaTransitionGeneration;
- (void)setSafeAreaTransitionGeneration:(unsigned long long)arg1;
- (BOOL)safeAreaUpdatePending;
- (void)setSafeAreaUpdatePending:(BOOL)arg1;
- (void).cxx_destruct;
@end
