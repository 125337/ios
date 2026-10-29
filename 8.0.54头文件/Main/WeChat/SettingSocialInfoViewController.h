@interface SettingSocialInfoViewController : MMUIViewController <settingModifySignDelegate, MMRegionPickerViewControllerDelegate>
{
    WCTableViewManager * m_tableViewMgr; // +0x68
    SettingMyAccountExtInfoLogic * m_infoLogic; // +0x70
}
- (void)viewDidLoad;
- (void)Save;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)updateTableCell;
- (id)makeSignView;
- (id)getSexString;
- (id)getAddressString;
- (void)onModifySex:(id)arg1;
- (void)saveNewSign:(id)arg1;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)showModifySexView;
- (void)showModifyAddressView;
- (void)showModifySignView;
- (void).cxx_destruct;
@end

