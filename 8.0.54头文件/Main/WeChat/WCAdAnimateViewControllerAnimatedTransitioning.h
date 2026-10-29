@interface WCAdAnimateViewControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, PAGViewListener>
{
    BOOL _isPresented; // +0x8
    long long _gestureType; // +0x10
    WCDataItem * _dataItem; // +0x18
    UIView * _originView; // +0x20
    PAGView * _pagAnimationView; // +0x28
    long long _adTransitionType; // +0x30
}
- (id)initWithGestureType:(long long)arg1 dataItem:(id)arg2 originView:(id)arg3;
- (void)updateTransitionTypeWithGestureType:(long long)arg1 dataItem:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animationForPresentedView:(id)arg1;
- (void)animationForDismissedView:(id)arg1;
- (void)eggRandomSpriteAnimateTransition:(id)arg1 fromView:(id)arg2 toView:(id)arg3 randomSprite:(id)arg4;
- (void)eggPagThemeAnimateTransition:(id)arg1 fromView:(id)arg2 toView:(id)arg3 pagThemeInfo:(id)arg4;
- (id)fetchTransitionAnimationFilePathFromPagThemeInfo:(id)arg1;
- (void)tryToPlayAnimationInView:(id)arg1 pagThemeInfo:(id)arg2;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)cleanUpPagTransitionAnimation;
- (BOOL)isPresented;
- (void)setIsPresented:(BOOL)arg1;
- (long long)gestureType;
- (void)setGestureType:(long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (id)pagAnimationView;
- (void)setPagAnimationView:(id)arg1;
- (long long)adTransitionType;
- (void)setAdTransitionType:(long long)arg1;
- (void).cxx_destruct;
@end

