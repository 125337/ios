@interface WCFinderWXMentionSwitchViewController : MMUIViewController
{
    WCTableViewManager * _tableViewManager; // +0x70
    WCTableViewSectionManager * _msgSwitchSection; // +0x78
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (id)makeSectionSeparator;
- (void)reloadTableView;
- (void)showLikeMentionSwitchChanged:(id)arg1;
- (void)showCommentMentionSwitchChanged:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)msgSwitchSection;
- (void)setMsgSwitchSection:(id)arg1;
- (void).cxx_destruct;
@end
