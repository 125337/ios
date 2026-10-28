@interface WCStoryFriendCommentsListView : MMUIView <UITableViewDataSource, UITableViewDelegate, WCStoryFriendCommmentHeadCellDelegate>
{
    id <WCStoryFriendCommentsListViewDelegate> _delegate; // +0x8
    id <WCStoryFriendCommentsListViewDataSource> _dataSource; // +0x10
    UITableView * _tableView; // +0x18
    UILabel * _tipsLabel; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)scrollToBottom:(BOOL)arg1;
- (void)reloadData;
- (void)setup;
- (void)setupSubViews;
- (void)updateUI;
- (void)setupGesture;
- (void)handlePanGesture:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)StoryFriendCommmentHeadCellD:(id)arg1 didClickBodyViewWithComment:(id)arg2;
- (void)StoryFriendCommmentHeadCellD:(id)arg1 didClickHeadViewWithComment:(id)arg2;
- (id)tableView;
- (id)tipsLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
