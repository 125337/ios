@interface WCCollectViewReorder : NSObject
{
    UILongPressGestureRecognizer * _moveGesture; // +0x8
    id /* block */ _moveGestureStateChangeBlocks; // +0x10
}
- (id)init;
- (void)bindToCollectionView:(id)arg1;
- (void)moveGestureAction:(id)arg1;
- (void).cxx_destruct;
@end
