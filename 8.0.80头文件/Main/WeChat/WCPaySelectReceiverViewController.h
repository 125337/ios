@interface WCPaySelectReceiverViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    MMTableView * m_tableView; // +0x98
    id <WCPaySelectReceiverViewControllerDelegate> _delegate; // +0xa0
    NSMutableArray * _m_otherHistoryArray; // +0xa8
    NSMutableArray * _m_myHistoryArray; // +0xb0
    WCUIAlertView * _m_alertView; // +0xb8
    WCPayTransToBankCardReceiver * _m_receiver; // +0xc0
    UILabel * _m_emptyTipsLabel; // +0xc8
}
- (void)setupWithData:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)updateView;
- (void)updateEmptyTipsLabel;
- (BOOL)isDataEmpty;
- (void)updateNavigationBar;
- (void)updateTableView;
- (void)OnCancel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutCell:(id)arg1 candidate:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmComment;
- (void)confirmSetRemark:(id)arg1 remark:(id)arg2;
- (void)confirmDeleteRecord:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_otherHistoryArray;
- (void)setM_otherHistoryArray:(id)arg1;
- (id)m_myHistoryArray;
- (void)setM_myHistoryArray:(id)arg1;
- (id)m_alertView;
- (void)setM_alertView:(id)arg1;
- (id)m_receiver;
- (void)setM_receiver:(id)arg1;
- (id)m_emptyTipsLabel;
- (void)setM_emptyTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
