@interface MMFinderLiveOnlineStateCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    MMLiveTaskId * _taskId; // +0x8
    MMFinderLiveOnlineStateCollectionViewCell * _myUserStateCell; // +0x10
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)myUserStateCell;
- (void)setMyUserStateCell:(id)arg1;
- (void).cxx_destruct;
@end
