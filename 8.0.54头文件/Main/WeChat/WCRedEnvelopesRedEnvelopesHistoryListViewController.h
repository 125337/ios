@interface WCRedEnvelopesRedEnvelopesHistoryListViewController : WCRedEnvelopesBaseViewController <UITableViewDelegate, UITableViewDataSource, WCPayPickerViewDelegate, WCActionSheetDelegate>
{
    id <WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate> m_delegate; // +0x88
    BOOL m_loadingMoreOrderList; // +0x90
    MMTableView * m_tableView; // +0x98
    int m_enWCRedEnvelopesRedEnvelopesHistoryListViewControllerScene; // +0xa0
    BOOL m_bDidBack; // +0xa4
    WCPayPickerView * m_pickerView; // +0xa8
}
- (id)init;
- (id)initWithScene:(int)arg1;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)OnLeftBarButtonDone;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)loadMoreOrderList;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)getBottomView;
- (void)initTableView;
- (id)GetHeaderView:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)commentRedEnvelopes;
- (void)setDelegate:(id)arg1;
- (void)setScene:(int)arg1;
- (void)changeHistoryType;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getRecordNickNameAttributedStringWithSuffix:(id)arg1 suffix:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)OnSelectYears;
- (void)WCPayPickerViewDidCancel;
- (void)WCPayPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnClickedHeaderImageView;
- (void)userDidTakeScreenshot:(id)arg1;
- (void).cxx_destruct;
@end

