@interface ShakeSettingViewController : MMUIViewController <MMTableViewInfoDelegate>
{
    id <ShakeSettingViewControllerDelegate><ShakeListDelegate> m_delegate; // +0x70
    MMTableViewInfo * _tableViewInfo; // +0x78
}
- (void)setM_Delegate:(id)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)reloadTableData;
- (void)OnOpenShakeHistoryList;
- (void)onSouncStatusSwitchChanged:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end
