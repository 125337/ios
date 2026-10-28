@interface ShareTo3rdAppSettingViewController : MMUIViewController <ShareTo3rdAppManageCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x70
    NSMutableArray * _arrSortedAppinfo; // +0x78
    BOOL _bHasEdit; // +0x80
    CMessageWrap * m_oMessageWrap; // +0x88
}
- (id)init;
- (void)OnCancelModalView:(id)arg1;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)onSwitchChange:(BOOL)arg1 withAppInfo:(id)arg2;
- (id)m_oMessageWrap;
- (void)setM_oMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end
