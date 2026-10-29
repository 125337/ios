@interface WCPayTransferToBankCardFillInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate, WCPaySelectBankItemDelegate, WCPaySelectArriveTimeItemDelegate, WCPayTransferToBankCardCandidateViewDelegate, WCActionSheetDelegate, WCPayNoticeBannerDelegate, WCPayTransferDelayOptionViewDelegate, WCPayTransferDelayOptionViewDelegate, WCPayT2BCCandidateSugBarDelegate>
{
    WCBaseKeyboardToolBar * m_keyboardBar; // +0x90
    id <WCPayTransferToBankCardFillInfoViewControllerDelegate> m_delegate; // +0x98
    WCBizInfoGroup * m_infoGroup; // +0xa0
    BOOL _m_bHasSelectReceiver; // +0xa8
    BOOL _m_bBankCardNumChange; // +0xa9
    BOOL _m_bBankCardAutoFilling; // +0xaa
    BOOL _noAutoShowKeyBoard; // +0xab
    UIButton * m_footerButton; // +0xb0
    WCPayT2BCCandidateSugBar * _m_receiverCandidateView; // +0xb8
    WCPaySelectNameItem * _m_selectNameItem; // +0xc0
    WCPayBankCardNumberItem * _m_cardNumberItem; // +0xc8
    WCPaySelectBankItem * _m_selectBankItem; // +0xd0
    WCPaySelectArriveTimeItem * _m_selectArriveTimeItem; // +0xd8
    double _m_minItemLeft; // +0xe0
    MMUIButton * _m_selectNameButton; // +0xe8
    WCPayNoticeItemView * _m_noticeBanner; // +0xf0
    NSDictionary * _m_dictBanners; // +0xf8
    NSString * _m_enterBankCardNumber; // +0x100
    WCPayNavigationView * _navigationView; // +0x108
    WCPayTransferDelayOptionView * _delayOption; // +0x110
    double _cellTitleMaxWidth; // +0x118
}
- (void)setHasSelectReceiver:(BOOL)arg1;
- (void)setEnterBankCardNumber:(id)arg1;
- (void)dealloc;
- (void)clearBankElem;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)selectNameItemBecomFirstResponder;
- (id)getBannerView;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)onBack;
- (void)onRightBarButtonClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)refreshViewWithData:(id)arg1;
- (void)initHeaderView;
- (void)updateTableView;
- (void)initCandidateView;
- (id)getHeaderView;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)reloadTableView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (double)getMaxTitleLabelWidth:(id)arg1;
- (void)selectTransToBankReceiver;
- (void)autoFillBankItem;
- (void)setAutoFillBankDone;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)showReceiverCandidateView:(id)arg1;
- (void)onNext;
- (void)OnClickWCPayTransferToBankCardCandidate:(id)arg1;
- (void)OnWCPaySelectBankItemDidChoseBank:(id)arg1;
- (void)OnWCPaySelectArriveTimeItemDidSelectArriveTime:(unsigned long long)arg1;
- (void)scrollViewDidScroll;
- (void)resignAllResponder;
- (void)OnWCPaySelectArriveTimeItemShouldShowDelayView:(id)arg1;
- (id)convertDelayOptionsFromEnterTimeItem:(id)arg1;
- (void)onSpaceTap;
- (void)viewDidTransitionToNewSize;
- (void)onWCPayTransferDelayOptionViewCancel;
- (void)onWCPayTransferDelayOptionViewConfirm:(unsigned int)arg1;
- (double)onWCPayTransferDelayOptionViewSafeBottom;
- (void)OnClickWCPayT2BCCandidate:(id)arg1;
- (id)m_footerButton;
- (void)setM_footerButton:(id)arg1;
- (id)m_receiverCandidateView;
- (void)setM_receiverCandidateView:(id)arg1;
- (id)m_selectNameItem;
- (void)setM_selectNameItem:(id)arg1;
- (id)m_cardNumberItem;
- (void)setM_cardNumberItem:(id)arg1;
- (id)m_selectBankItem;
- (void)setM_selectBankItem:(id)arg1;
- (id)m_selectArriveTimeItem;
- (void)setM_selectArriveTimeItem:(id)arg1;
- (double)m_minItemLeft;
- (void)setM_minItemLeft:(double)arg1;
- (id)m_selectNameButton;
- (void)setM_selectNameButton:(id)arg1;
- (BOOL)m_bHasSelectReceiver;
- (void)setM_bHasSelectReceiver:(BOOL)arg1;
- (BOOL)m_bBankCardNumChange;
- (void)setM_bBankCardNumChange:(BOOL)arg1;
- (BOOL)m_bBankCardAutoFilling;
- (void)setM_bBankCardAutoFilling:(BOOL)arg1;
- (id)m_noticeBanner;
- (void)setM_noticeBanner:(id)arg1;
- (id)m_dictBanners;
- (void)setM_dictBanners:(id)arg1;
- (id)m_enterBankCardNumber;
- (void)setM_enterBankCardNumber:(id)arg1;
- (BOOL)noAutoShowKeyBoard;
- (void)setNoAutoShowKeyBoard:(BOOL)arg1;
- (id)navigationView;
- (void)setNavigationView:(id)arg1;
- (id)delayOption;
- (void)setDelayOption:(id)arg1;
- (double)cellTitleMaxWidth;
- (void)setCellTitleMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end

