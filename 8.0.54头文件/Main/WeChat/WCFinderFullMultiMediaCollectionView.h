@interface WCFinderFullMultiMediaCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UIViewController<WCFinderFullMultiMediaCollectionGestureConflictHandler> * _currentHandler; // +0x8
}
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)selfDidScroll;
- (id)currentHandler;
- (void)setCurrentHandler:(id)arg1;
- (void).cxx_destruct;
@end

