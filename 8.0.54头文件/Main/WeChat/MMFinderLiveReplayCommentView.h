@interface MMFinderLiveReplayCommentView : MMFinderLiveCommentView
{
    MMFinderLiveReplayOperationCommentSnapShot * _currentSnapShot; // +0x8
}
- (void)layoutCommentButton;
- (void)updateCurrentSnapShot:(id)arg1 resetComments:(BOOL)arg2;
- (double)commentTableBackViewBottom;
- (double)initialCommentTableBackViewBottom;
- (id)currentSnapShot;
- (void)setCurrentSnapShot:(id)arg1;
- (void).cxx_destruct;
@end

