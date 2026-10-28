@interface WCFinderCarouselCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    id /* block */ _tapCallback; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)tapAction:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (id /* block */)tapCallback;
- (void)setTapCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
