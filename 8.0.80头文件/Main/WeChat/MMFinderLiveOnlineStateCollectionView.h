@interface MMFinderLiveOnlineStateCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    MMFinderLiveOnlineStateCollectionViewCell * _myUserStateCell; // +0x8
    MMLiveTaskId * _taskId; // +0x10
}
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)myUserStateCell;
- (void)setMyUserStateCell:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
