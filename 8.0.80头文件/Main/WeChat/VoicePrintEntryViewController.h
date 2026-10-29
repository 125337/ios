@interface VoicePrintEntryViewController : MMUIViewController <ILinkEventExt>
{
    BOOL _voicePrintExists; // +0x70
    BOOL _voicePrintSwitch; // +0x71
    WCSheetView * _sheetView; // +0x78
    VoicePrintHeaderView * _headerView; // +0x80
    MMUILabel * _createLabel; // +0x88
    UIButton * _createButton; // +0x90
    UIView * _itemsView; // +0x98
    RichTextView * _policyLinkView; // +0xa0
    WCAgreementCheckBox * _agreementCheckBox; // +0xa8
    VoicePrintCreateLogic * _createLogic; // +0xb0
    VoicePrintVerifyLogic * _verifyLogic; // +0xb8
}
- (BOOL)shouldShowPolicyLink;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)startCreateLogicWithCompletion:(id /* block */)arg1;
- (void)startCreateLogicWithCompletion:(id /* block */)arg1 isResetProcess:(BOOL)arg2;
- (void)startVerifyLogicWithCompletion:(id /* block */)arg1;
- (void)onCreateWithResult:(unsigned int)arg1 needSwitchOn:(BOOL)arg2;
- (void)initView;
- (void)reloadItemsView;
- (void)reloadView;
- (id)createLabel;
- (id)createButton;
- (id)policyLinkView;
- (id)agreementCheckBox;
- (void)changeForCreate;
- (void)changeForManage;
- (void)switchVoicePrint:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateVoicePrintFromStates:(unsigned int)arg1;
- (void)onVoicePrintSwitchChanged:(id)arg1;
- (void)onVoicePrintReset;
- (void)onVoicePrintVerify;
- (void)onVoicePrintCreate;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
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
- (void)setPolicyLinkView:(id)arg1;
- (void)setAgreementCheckBox:(id)arg1;
- (id)createLogic;
- (void)setCreateLogic:(id)arg1;
- (id)verifyLogic;
- (void)setVerifyLogic:(id)arg1;
- (void).cxx_destruct;
@end
