@interface BrandCustomSharePanelViewController : UIViewController <WCBrandOverFullscreenAnimatable, UICollectionViewDelegate, UICollectionViewDataSource, UIViewControllerTransitioningDelegate>
{
    BOOL _isInteractiveTransition; // +0x8
    BOOL _closeByCancelled; // +0x9
    id <BrandCustomSharePanelViewControllerDelegate> _panelDelegate; // +0x10
    UIView * _containerView; // +0x18
    UIView * _panelDragger; // +0x20
    UIView * _panelDraggerHandle; // +0x28
    UIControl * _maskView; // +0x30
    WXMASConstraint * _topConstraint; // +0x38
    WXMASConstraint * _bottomConstraint; // +0x40
    WCBrandOverFullscreenAnimator * _customAnimator; // +0x48
    UIPercentDrivenInteractiveTransition * _interactiveTransition; // +0x50
    UICollectionView * _contentView; // +0x58
    BrandCustomSharePanelLayout * _layout; // +0x60
    NSArray * _actionGroups; // +0x68
}
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateActionGroups:(id)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(BOOL)arg1;
- (void)setupUI;
- (void)setupDragger;
- (void)onDraggerPanGesture:(id)arg1;
- (void)setupContentView;
- (void)setupAction;
- (void)didClickMask;
- (void)closePanelWithCompletion:(id /* block */)arg1;
- (void)closePanelByCancelled;
- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)playOverFullscreenDismissAnimation;
- (void)playOverFullscreenPresentAnimation;
- (void)onDismissAnimiationCancelled;
- (void)updateLayoutForOverFullscreenPresentAnimationWithContainerView:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)panelDelegate;
- (void)setPanelDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)panelDragger;
- (void)setPanelDragger:(id)arg1;
- (id)panelDraggerHandle;
- (void)setPanelDraggerHandle:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)topConstraint;
- (void)setTopConstraint:(id)arg1;
- (id)bottomConstraint;
- (void)setBottomConstraint:(id)arg1;
- (id)customAnimator;
- (void)setCustomAnimator:(id)arg1;
- (id)interactiveTransition;
- (void)setInteractiveTransition:(id)arg1;
- (BOOL)isInteractiveTransition;
- (void)setIsInteractiveTransition:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)actionGroups;
- (void)setActionGroups:(id)arg1;
- (BOOL)closeByCancelled;
- (void)setCloseByCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
