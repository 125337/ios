@interface WAMainFrameTaskBarCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    BOOL _canHookPanGesture; // +0x8
    UIPanGestureRecognizer * _mainFrameCollectionViewPanGesture; // +0x10
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)doInit;
- (void)initPanGesture;
- (void)handlePan:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)recheckCanHookPanGesture;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (BOOL)canHookPanGesture;
- (void)setCanHookPanGesture:(BOOL)arg1;
- (id)mainFrameCollectionViewPanGesture;
- (void)setMainFrameCollectionViewPanGesture:(id)arg1;
- (void).cxx_destruct;
@end
