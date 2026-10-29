@interface CBTAsstChatPickerPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _hasConfirmed; // +0x8
    id /* block */ _cancelHandler; // +0x10
    NSDictionary * _reportCommonParams; // +0x18
    MMTableView * _tableView; // +0x20
    NSMutableArray * _contacts; // +0x28
    NSMutableSet * _selectedUsernames; // +0x30
    id /* block */ _selectHandler; // +0x38
    unsigned long long _maxCount; // +0x40
    UIButton * _confirmBtn; // +0x48
    long long _enterTimeMs; // +0x50
    long long _exitType; // +0x58
}
- (id)initWithSelectHandler:(id /* block */)arg1;
- (id)initWithMaxCount:(unsigned long long)arg1 preSelectedUsernames:(id)arg2 selectHandler:(id /* block */)arg3;
- (void)configurePageSheet;
- (void)loadSessionData;
- (void)setupTableView;
- (id)pageSheetContentView;
- (double)pageSheetContentHeight;
- (void)onCancel;
- (void)onConfirm;
- (void)updateConfirmButtonState;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showMaxSelectionAlert;
- (void)setupCellLayout:(id)arg1;
- (void)configureCell:(id)arg1 withContact:(id)arg2;
- (void)onRightIconTapped:(id)arg1;
- (id)buildReportParams;
- (void)reportConfirmBtnClick:(id)arg1;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (id)reportCommonParams;
- (void)setReportCommonParams:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)selectedUsernames;
- (void)setSelectedUsernames:(id)arg1;
- (id /* block */)selectHandler;
- (void)setSelectHandler:(id /* block */)arg1;
- (BOOL)hasConfirmed;
- (void)setHasConfirmed:(BOOL)arg1;
- (unsigned long long)maxCount;
- (void)setMaxCount:(unsigned long long)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (long long)enterTimeMs;
- (void)setEnterTimeMs:(long long)arg1;
- (long long)exitType;
- (void)setExitType:(long long)arg1;
- (void).cxx_destruct;
@end
