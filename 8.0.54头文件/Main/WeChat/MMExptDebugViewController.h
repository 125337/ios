@interface MMExptDebugViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMPickerViewDelegate, IExptServiceExt>
{
    MMTableView * _tableView; // +0x68
    MMPickerView * m_pickerView; // +0x70
    NSString * _selectedExptId; // +0x78
    WCBaseTextFieldItem * m_inputExptId; // +0x80
    WCBaseTextFieldItem * m_inputExptKey; // +0x88
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)onExptItemListChange;
- (void)initView;
- (void)onTapEmpty;
- (id)genTableHeaderView;
- (void)onClickReqAppExpt:(id)arg1;
- (void)onClickReqReport:(id)arg1;
- (void)onClickConfirmExptKey:(id)arg1;
- (void)onClickConfirmExptId:(id)arg1;
- (void)onClickSelectExpt:(id)arg1;
- (void)onClickReqExpt:(id)arg1;
- (void)onClickDelExpt:(id)arg1;
- (id)sortedAllExpt;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genShowView:(id)arg1;
- (void).cxx_destruct;
@end

