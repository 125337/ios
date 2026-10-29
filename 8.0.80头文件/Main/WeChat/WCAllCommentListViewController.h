@interface WCAllCommentListViewController : WCCommentListViewController
{
    WCMomentsBlankView * _emptyView; // +0xe8
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupEmptyView;
- (void)layoutEmptyView;
- (void)updateEmptyViewVisibility;
- (void)onMoreClicked:(id)arg1;
- (void)showInteractiveMessageManagementView;
- (id)commentListVCTitle;
- (id)rightBarButtonItem;
- (long long)tableViewStyle;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (void).cxx_destruct;
@end
