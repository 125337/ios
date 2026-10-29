@interface SettingMyAccountExtInfoViewController : SettingBaseViewController <settingModifySignDelegate, MMPickerViewDelegate, MMRegionPickerViewControllerDelegate, settingMyAccountExtInfoLogicDelegate>
{
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapAccountCellToCellType; // +0x78
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapSessionType; // +0x90
    id <settingMyAccountExtInfoDelegate> m_delegate; // +0xa8
    unsigned int m_curPickerMode; // +0xb0
    MMPickerView * m_pickerView; // +0xb8
    SettingMyAccountExtInfoLogic * m_infoLogic; // +0xc0
}
- (void)initSessionType;
- (void)initCellType;
- (void)returnBack;
- (void)Save;
- (void)SaveAndExit;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)makeSignCell:(id)arg1;
- (id)makeMustFillLabel;
- (void)makeCellInfoInternal:(id)arg1 col:(id)arg2 value:(id)arg3 mustFill:(BOOL)arg4;
- (void)makeSexCell:(id)arg1;
- (void)makeAddressCell:(id)arg1;
- (void)makeAccountCell:(id)arg1 row:(unsigned long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)saveNewSign:(id)arg1;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)MMPickerViewDidChooseRowTitle:(id)arg1 atSessionTitle:(id)arg2;
- (void)showModifySexView:(id)arg1;
- (void)showModifyAddressView;
- (void)showModifySignView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)onInfoChange;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

