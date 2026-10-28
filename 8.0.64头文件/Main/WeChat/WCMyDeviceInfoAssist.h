@interface WCMyDeviceInfoAssist : MMObject <WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, MMTipsViewControllerDelegate>
{
    id <WCMyDeviceInfoAssistDelegate> m_delegate; // +0x8
    MMTableView * m_tableView; // +0x10
    UIView * m_headerView; // +0x18
    UIView * m_footerView; // +0x20
    MMLoadingView * m_loadingView; // +0x28
    UIButton * m_bindBtn; // +0x30
    UIButton * m_unbindBtn; // +0x38
    UIButton * m_urlBtn; // +0x40
    NSMutableArray * m_arrSectionType; // +0x48
    BOOL m_isMyDevice; // +0x50
    WCDevice * _deviceInfo; // +0x58
}
- (void)reloadData;
- (void)updateRelationState;
- (id)initWithMyDeviceInfo:(id)arg1 delegate:(id)arg2;
- (void)initTableView;
- (void)initLoadingView;
- (void)initFooterView;
- (void)updateData;
- (void)updateFooterView;
- (void)updateNavigationBarRightButton;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 row:(unsigned long long)arg2 section:(unsigned int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)calDeviceDescCell;
- (double)calManagerCell;
- (void)makeDeviceInfoCell:(id)arg1;
- (void)makeDeviceDescCell:(id)arg1;
- (void)makeLanDeviceOwnerCell:(id)arg1;
- (void)makeRemarkCell:(id)arg1;
- (void)makeDeviceManageCell:(id)arg1 rowData:(id)arg2;
- (void)onShowDeviceSession;
- (void)onBindDevice;
- (void)onRemark;
- (void)onUnbindDevice;
- (id)getLoadingText;
- (void)startLoading;
- (void)stopLoading;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onUpdateMyDeviceNickNameWithDeviceId:(id)arg1 nickName:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onClickNavRightButton;
- (id)GetTableView;
- (id)GetLoadingView;
- (double)deviceDescLabelWidth;
- (void)onRemarkNameEdit:(id)arg1;
- (void)onManageCellClicked:(long long)arg1;
- (id)deviceInfo;
- (void)setDeviceInfo:(id)arg1;
- (void).cxx_destruct;
@end
