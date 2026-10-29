@interface PasskeyEntryViewController : MMUIViewController <PasskeyCreateDelegate>
{
    BOOL _isUnsupportedIOSVersion; // +0x68
    WCSheetView * _sheetView; // +0x70
    PasskeyEntryHeaderView * _headerView; // +0x78
    MMUILabel * _createLabel; // +0x80
    UIButton * _createButton; // +0x88
    UIView * _itemsView; // +0x90
    PasskeyCreateLogic * _createLogic; // +0x98
    WCButtonListView * _bottomButtonList; // +0xa0
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
- (void)useDefaultHeaderView;
- (void)reloadItemsView;
- (void)reloadButtonBottomList;
- (id)createLabel;
- (id)createButton;
- (void)onPasskeyCreateOrReset;
- (void)onPasskeySwitchChanged:(id)arg1;
- (void)onPasskeyDelete;
- (void)onDelete;
- (void)showAgreementWebviewWithUrl:(id)arg1;
- (void)onPasskeySettingsChanged;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void)setCreateLabel:(id)arg1;
- (void)setCreateButton:(id)arg1;
- (id)itemsView;
- (void)setItemsView:(id)arg1;
- (void)setCreateLogic:(id)arg1;
- (id)bottomButtonList;
- (void)setBottomButtonList:(id)arg1;
- (BOOL)isUnsupportedIOSVersion;
- (void)setIsUnsupportedIOSVersion:(BOOL)arg1;
- (void).cxx_destruct;
@end

