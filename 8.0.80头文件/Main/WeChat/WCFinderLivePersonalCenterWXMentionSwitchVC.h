@interface WCFinderLivePersonalCenterWXMentionSwitchVC : MMUIViewController
{
    WCTableViewManager * _tableViewManager; // +0x70
    WCTableViewSectionManager * _msgSwitchSection; // +0x78
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (id)makeSectionSeparator;
- (void)reloadTableView;
- (void)showMentionSwitchChanged:(id)arg1;
- (void)reportSwitchWithActionType:(unsigned long long)arg1 switchOn:(unsigned long long)arg2;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)msgSwitchSection;
- (void)setMsgSwitchSection:(id)arg1;
- (void).cxx_destruct;
@end
