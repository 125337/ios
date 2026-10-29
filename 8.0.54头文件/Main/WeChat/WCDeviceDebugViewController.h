@interface WCDeviceDebugViewController : MMUIViewController <WCDeviceDebugMgrExt, UITextFieldDelegate, MMPickerViewDelegate, UITableViewDataSource, UITableViewDelegate, WCActionSheetDelegate>
{
    NSMutableArray * m_data; // +0x68
    MMTableView * m_tableView; // +0x70
    NSString * m_userName; // +0x78
    int m_lastIndex; // +0x80
}
- (id)initWithUserName:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initView;
- (void)onOperate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFAQClick;
- (void)onCleanClick;
- (void)onLogAdded;
- (void)onLogClean;
- (void)loadMoreLogs;
- (void)makeCellTextAndCaculateHeight:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 forTips:(id)arg2;
- (void)makeCell:(id)arg1 forInfo:(id)arg2;
- (void)makeCell:(id)arg1 forLog:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
@end

