@interface MMFinderLivePublicCommentContentView : MMFinderLiveCommentContentView
{
    UIView * _notifyCommentContentView; // +0x8
    MMFinderLiveNotifyCommentLogic * _notifyCommentLogic; // +0x10
    id /* block */ _notifyCommentLogicCreateBlock; // +0x18
    UIView * _notifyCommentContentContainerView; // +0x20
    double _currentNotifyCommentContentViewHeight; // +0x28
}
- (void)layoutUI;
- (void)layoutNotifyCommentContentView;
- (void)layoutNotifyCommentContentContainerView:(double)arg1;
- (void)reportExpose:(id)arg1;
- (void)checkCommentContentTopIsChanged;
- (void)innerCheckCommentContentTopIsChanged;
- (double)getNotifyAreaHeight;
- (void)checkSelfHasConsumeTouch:(CGPoint)arg1 withEvent:(id)arg2;
- (double)commentContentViewTop;
- (double)commentTableWidth;
- (void)layoutNotifyContentView;
- (void)changeNotifyContentViewSuperview:(id)arg1;
- (void)updateNotifyContentViewDisplay;
- (void)hideNotifyContentView;
- (id)notifyCommentContentView;
- (void)setNotifyCommentContentView:(id)arg1;
- (id)notifyCommentLogic;
- (void)setNotifyCommentLogic:(id)arg1;
- (id /* block */)notifyCommentLogicCreateBlock;
- (void)setNotifyCommentLogicCreateBlock:(id /* block */)arg1;
- (id)notifyCommentContentContainerView;
- (void)setNotifyCommentContentContainerView:(id)arg1;
- (double)currentNotifyCommentContentViewHeight;
- (void)setCurrentNotifyCommentContentViewHeight:(double)arg1;
- (void).cxx_destruct;
@end
