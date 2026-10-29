@interface MMFinderLivePublicCommentContentView : MMFinderLiveCommentContentView
{
    UIView * _notifyCommentContentView; // +0x8
    MMFinderLiveNotifyCommentLogic * _notifyCommentLogic; // +0x10
    UIView * _notifyCommentContentContainerView; // +0x18
    double _currentNotifyCommentContentViewHeight; // +0x20
}
- (void)layoutUI;
- (void)layoutNotifyCommentContentView;
- (void)layoutNotifyCommentContentContainerView:(double)arg1;
- (void)reportExpose:(id)arg1;
- (void)checkCommentContentTopIsChanged;
- (void)innerCheckCommentContentTopIsChanged;
- (double)getNotifyAreaHeight;
- (double)commentContentViewTop;
- (void)layoutNotifyContentView;
- (void)changeNotifyContentViewSuperview:(id)arg1;
- (void)updateNotifyContentViewDisplay;
- (void)hideNotifyContentView;
- (id)notifyCommentContentView;
- (void)setNotifyCommentContentView:(id)arg1;
- (id)notifyCommentLogic;
- (void)setNotifyCommentLogic:(id)arg1;
- (id)notifyCommentContentContainerView;
- (void)setNotifyCommentContentContainerView:(id)arg1;
- (double)currentNotifyCommentContentViewHeight;
- (void)setCurrentNotifyCommentContentViewHeight:(double)arg1;
- (void).cxx_destruct;
@end

