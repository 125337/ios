@interface WCPayCardDetailViewController : WCPayBaseViewController <WCActionSheetDelegate, MMPatternLockLogicDelegate>
{
    UIButton * m_footerButton; // +0x90
    WCActionSheet * m_actionSheet; // +0x98
    id <WCPayCardDetailViewControllerDelegate> m_delegate; // +0xa0
    UIView * m_overseasCardView; // +0xa8
    UIView * tenpayTelView; // +0xb0
    unsigned int _patternLockLogicTag; // +0xb8
}
- (id)init;
- (void)refreshViewWithData:(id)arg1;
- (void)onBankPhone;
- (void)OnLeftBarButtonDone;
- (void)initNavigationBar;
- (void)initTenpayTelView;
- (void)viewDidLoad;
- (void)initOverseasCardDetailView;
- (void)onOperate;
- (void)CardDetailExpireUnbindCard;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showRepayCell;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (void)onAlertViewPatternLockSetup;
- (void)onAlertViewUnbindBtn;
- (void)onAlertViewStartUnbind;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (void)startUnbind;
- (void).cxx_destruct;
@end

