@interface WCPayResetBindedCardInfoViewController : WCPayBaseViewController <ILinkEventExt>
{
    BOOL m_bCVV; // +0x98
    BOOL m_bValidDate; // +0x99
    UIButton * m_footerButton; // +0xa0
    WCPayCVVItem * m_textFieldCVVItem; // +0xa8
    WCPayValidDateItem * m_pikerValidDateItem; // +0xb0
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xb8
    id <WCPayResetBindedCardInfoViewControllerDelegate> m_delegate; // +0xc0
}
- (void)onNext;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)setItemWithCVV:(BOOL)arg1 ValidDate:(BOOL)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (void)showDetailTip;
- (void)onPhoneClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void).cxx_destruct;
@end
