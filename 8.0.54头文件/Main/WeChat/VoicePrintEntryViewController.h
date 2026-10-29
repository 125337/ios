@interface VoicePrintEntryViewController : MMUIViewController
{
    BOOL _voicePrintExists; // +0x68
    BOOL _voicePrintSwitch; // +0x69
    WCSheetView * _sheetView; // +0x70
    VoicePrintHeaderView * _headerView; // +0x78
    MMUILabel * _createLabel; // +0x80
    UIButton * _createButton; // +0x88
    UIView * _itemsView; // +0x90
    VoicePrintCreateLogic * _createLogic; // +0x98
    VoicePrintVerifyLogic * _verifyLogic; // +0xa0
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)startCreateLogicWithCompletion:(id /* block */)arg1;
- (void)startVerifyLogicWithCompletion:(id /* block */)arg1;
- (void)onCreateWithResult:(unsigned int)arg1 needSwitchOn:(BOOL)arg2;
- (void)initView;
- (void)reloadItemsView;
- (void)reloadView;
- (id)createLabel;
- (id)createButton;
- (void)changeForCreate;
- (void)changeForManage;
- (void)switchVoicePrint:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateVoicePrintFromStates:(unsigned int)arg1;
- (void)onVoicePrintSwitchChanged:(id)arg1;
- (void)onVoicePrintReset;
- (void)onVoicePrintVerify;
- (void)onVoicePrintCreate;
- (BOOL)voicePrintExists;
- (void)setVoicePrintExists:(BOOL)arg1;
- (BOOL)isVoicePrintSwitchOn;
- (void)setVoicePrintSwitch:(BOOL)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void)setCreateLabel:(id)arg1;
- (void)setCreateButton:(id)arg1;
- (id)itemsView;
- (void)setItemsView:(id)arg1;
- (id)createLogic;
- (void)setCreateLogic:(id)arg1;
- (id)verifyLogic;
- (void)setVerifyLogic:(id)arg1;
- (void).cxx_destruct;
@end

