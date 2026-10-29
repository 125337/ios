@interface WCPayOrderDetailViewController : WCPayBaseViewController <WCPayBindedCardPikerItemDelegate, WCPayOrderDetailViewDelegate, ILinkEventExt>
{
    UIButton * m_footerButton; // +0x90
    WCBaseKeyboardToolBar * m_keyboardBar; // +0x98
    WCPayTenpayPasswordCtrlItem * m_textFieldItemPwd; // +0xa0
    WCPayBindedCardPikerItem * m_cardTypeItem; // +0xa8
    id <WCPayOrderDetailViewControllerDelegate> m_delegate; // +0xb0
    NSString * m_nsError; // +0xb8
    NSIndexPath * m_selectItemIndex; // +0xc0
    BOOL bSelectedBalance; // +0xc8
    BOOL bUserSelected; // +0xc9
    MMUILabel * detailEnsureLabel; // +0xd0
}
- (id)init;
- (void)reloadBindTableView;
- (void)reloadPayTableView;
- (void)OnComfireEnsureAlert;
- (void)OnCancel;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)isNeedAutoNext;
- (BOOL)isNoCardOrBalanceDisable;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeBalanceInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeNewCardInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)OnAddPayCard;
- (void)OnAddCardToSharedFavInfo;
- (void)onNext;
- (void)OnChooseNewCard:(id)arg1;
- (void)OnChooseCard:(id)arg1;
- (void)OnSelectedBalance;
- (void)OnSelectedNewCard;
- (void)setDelegate:(id)arg1;
- (void)OnWCPayOrderDetailViewHeightChange:(id)arg1;
- (void)OnWCPayOrderDetailViewClickedCoupous;
- (void)clearPwdInput;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (double)calBalanceCellHeightWithForbidWord;
- (void)callDelegatePay;
- (void).cxx_destruct;
@end

