@interface WCAdRandomSelectCardMultiCardsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate, WCAdvertiseAnimationDisplayLinkDelegate, WCAdRandomSelectCardCollectionViewDelegate>
{
    id <WCAdRandomSelectCardMultiCardsViewDelegate> _delegate; // +0x8
    WCAdRandomSelectCardCollectionView * _collectionView; // +0x10
    ColorGradientView * _leftGradientView; // +0x18
    ColorGradientView * _rightGradientView; // +0x20
    WCAdvertiseAnimationDisplayLink * _autoScrollDisplayLink; // +0x28
    long long _autoScrollStatus; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)generateSubviews;
- (void)addNotifications;
- (void)onWillResignActive;
- (void)onDidBecomeActive;
- (void)layoutSubviews;
- (id)randomSelectCardInfo;
- (void)pause;
- (void)stop;
- (void)suspend;
- (void)prepareContentsForAnimation;
- (void)prepareForIntroduceAnimation;
- (void)onIntroduceAnimationDone;
- (void)prepareForSelecting;
- (void)onSelectingAnimationDone;
- (void)prepareForAllSelected;
- (void)setAnimation:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)onAnimationDone;
- (void)asyncResetCollectionView;
- (void)resetCollectionView;
- (double)getOriginContentOffsetX:(id)arg1;
- (void)prepareCollectionViewForInfinityLoop;
- (double)trimCurrentContentOffsetX:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)collectionLayout;
- (id)collectionView;
- (void)handlePanGesture:(id)arg1;
- (double)collectionCellViewWidth;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onScrollViewDidEndScrolling;
- (id)leftGradientView;
- (id)rightGradientView;
- (id)generateGradientView;
- (void)showGradientViews;
- (void)hideGradientViews;
- (id)autoScrollDisplayLink;
- (id)autoScrollAnimationWithView:(id)arg1 delay:(double)arg2;
- (void)startAutoScrollAnimation;
- (void)pauseAutoScrollAnimation;
- (void)resumeAutoScrollAnimation;
- (void)stopAutoScrollAnimation;
- (void)setAutoScrollAnimationWithDelay:(double)arg1;
- (void)keepScrollingAnimation;
- (void)asyncResumeAutoScrollAnimation;
- (void)onAnimationDisplayLinkAnimationDone:(id)arg1;
- (void)onCardCollectionViewTouchesBegan;
- (void)onCardCollectionViewTouchesEnded;
- (void)onCardCollectionViewDidMoveToSuperview;
- (void)onCardCollectionViewDidMoveToWindow;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setLeftGradientView:(id)arg1;
- (void)setRightGradientView:(id)arg1;
- (void)setAutoScrollDisplayLink:(id)arg1;
- (long long)autoScrollStatus;
- (void)setAutoScrollStatus:(long long)arg1;
- (void).cxx_destruct;
@end
