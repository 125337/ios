@interface WCMomentsHistoryGroupSelectViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <WCMomentsHistoryGroupSelectViewControllerDelegate> _delegate; // +0x70
    WCMomentsHistoryGroupViewModel * _historyGroupVM; // +0x78
    MMTableView * _tableView; // +0x80
    NSMutableSet * _selectedHistoryGroupContactSet; // +0x88
    UILabel * _noHistoryGroupTips; // +0x90
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initView;
- (void)initTableView;
- (void)initNoHistoryGroupTips;
- (void)updateNoHistoryGroupTipsFrame;
- (void)updateViewDisplayStateWithHistoryGroupCout:(unsigned long long)arg1;
- (void)updateRightBarButtonWithState:(BOOL)arg1;
- (void)onDismissBarButtonPress:(id)arg1;
- (void)onSaveBarButtonPress:(id)arg1;
- (id)selectedHistoryGroupContactSet;
- (BOOL)isSelected:(id)arg1;
- (void)openGroupDetailWithGroupContact:(id)arg1;
- (void)onPopRoomContactVC;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)historyGroupVM;
- (void)setHistoryGroupVM:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void)setSelectedHistoryGroupContactSet:(id)arg1;
- (id)noHistoryGroupTips;
- (void)setNoHistoryGroupTips:(id)arg1;
- (void).cxx_destruct;
@end
