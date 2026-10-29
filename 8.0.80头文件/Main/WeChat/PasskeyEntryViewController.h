@interface PasskeyEntryViewController : MMUIViewController <PasskeyCreateDelegate>
{
    BOOL _isUnsupportedIOSVersion; // +0x70
    WCSheetView * _sheetView; // +0x78
    PasskeyEntryHeaderView * _headerView; // +0x80
    MMUILabel * _createLabel; // +0x88
    UIButton * _createButton; // +0x90
    UIButton * _closeButton; // +0x98
    UIButton * _openButton; // +0xa0
    UIView * _itemsView; // +0xa8
    PasskeyCreateLogic * _createLogic; // +0xb0
    WCButtonListView * _bottomButtonList; // +0xb8
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (id)createLogic;
- (BOOL)passkeyExists;
- (BOOL)passkeySwitch;
- (id)navigationBarBackgroundColor;
- (void)initView;
- (void)updateSheetViewFrame;
- (void)reloadView;
- (void)reloadViewForCreate;
- (void)reloadViewForUnsupported;
- (void)reloadViewForManage;
- (void)useCreateHeaderView;
- (void)useDefaultHeaderView:(BOOL)arg1;
- (void)reloadItemsView;
- (void)reloadButtonBottomList;
- (id)createLabel;
- (id)createButton;
- (id)closeButton;
- (id)openButton;
- (void)onPasskeySettingResetOrDelete;
- (void)onPasskeyCreateOrReset;
- (void)onPasskeySwitchChanged:(id)arg1;
- (void)onPasskeyOpen:(id)arg1;
- (void)onPasskeyClose:(id)arg1;
- (void)onPasskeySwitchChange:(BOOL)arg1;
- (void)onPasskeyDelete;
- (void)onDelete;
- (void)showAgreementWebviewWithUrl:(id)arg1;
- (void)onPasskeySettingsChanged;
- (BOOL)isLoginOptEnable;
- (void)registerYReportSdk;
- (void)reportSwitchStatus:(BOOL)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void)setCreateLabel:(id)arg1;
- (void)setCreateButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setOpenButton:(id)arg1;
- (id)itemsView;
- (void)setItemsView:(id)arg1;
- (void)setCreateLogic:(id)arg1;
- (id)bottomButtonList;
- (void)setBottomButtonList:(id)arg1;
- (BOOL)isUnsupportedIOSVersion;
- (void)setIsUnsupportedIOSVersion:(BOOL)arg1;
- (void).cxx_destruct;
@end
