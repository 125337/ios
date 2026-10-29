@interface MMUICollectionView : UICollectionView
{
    id <MMUICollectionViewGestureRecognizerDelegate> _gestureDelegate; // +0x8
}
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureDelegate;
- (void)setGestureDelegate:(id)arg1;
- (void).cxx_destruct;
@end

