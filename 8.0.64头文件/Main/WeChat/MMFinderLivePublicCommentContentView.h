@interface MMFinderLivePublicCommentContentView : MMFinderLiveCommentContentView
{
    UIView * _notifyCommentContentView; // +0x8
    MMFinderLiveNotifyCommentLogic * _notifyCommentLogic; // +0x10
    id /* block */ _notifyCommentLogicCreateBlock; // +0x18
    UIView * _notifyCommentContentContainerView; // +0x20
    double _currentNotifyCommentContentViewHeight; // +0x28
    MMFinderLiveKeepDisplayCommentTableViewModel * _keepDisplayCommentTableViewModel; // +0x30
    MMTableView * _keepDisplayCommentTableView; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)layoutUI;
- (void)layoutNotifyCommentContentView;
- (void)layoutNotifyCommentContentContainerView:(double)arg1;
- (void)layoutKeepDisplayCommentTableView;
- (void)updateKeepDisplayCommentTableViewOrigin;
- (void)createKeepDisplayCommentTableViewIfNeeded;
- (void)createKeepDisplayCommentTableViewModelIfNeeded;
- (void)reportExpose:(id)arg1;
- (void)checkCommentContentTopIsChanged;
- (void)innerCheckCommentContentTopIsChanged;
- (double)getNotifyAreaHeight;
- (void)updateKeepDisplayCommentViewOnCommentDisabled:(BOOL)arg1;
- (void)checkSelfHasConsumeTouch:(CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadKeepDisplayDataIfNeed;
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
- (id)keepDisplayCommentTableViewModel;
- (void)setKeepDisplayCommentTableViewModel:(id)arg1;
- (id)keepDisplayCommentTableView;
- (void)setKeepDisplayCommentTableView:(id)arg1;
- (void).cxx_destruct;
@end
