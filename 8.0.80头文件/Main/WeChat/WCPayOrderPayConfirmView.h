@interface WCPayOrderPayConfirmView : MMUIView <WCPayVoidCallbackDelegate, CAAnimationDelegate, WCBaseInfoItemDelegate>
{
    UIView * m_backgroundView; // +0x8
    UIView * m_titleView; // +0x10
    UIButton * m_payButton; // +0x18
    NSString * m_nsContent; // +0x20
    NSString * m_nsConfirmButtonName; // +0x28
    WCPayTenpayPasswordCtrlItem * m_textFieldItemPwd; // +0x30
    id <WCPayOrderPayConfirmViewDelegate> m_delegate; // +0x38
    WCPayControlData * _data; // +0x40
    BOOL _isTouchID; // +0x48
    ABTestItem * _payABTestItem; // +0x50
}
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3 scene:(int)arg4 touchID:(BOOL)arg5;
- (id)updateDescFromUpperLogic;
- (double)backgroundViewY;
- (BOOL)simpleCashierForBiz;
- (id)getFavViewWithFeeType:(id)arg1;
- (void)onSwitchToPwdAuth;
- (void)onDoTouchIDAuth;
- (id)changeCardViewV2WithWidth:(double)arg1;
- (id)originFeeString;
- (id)originFeeViewData;
- (unsigned long long)colorFromString:(id)arg1;
- (BOOL)shouldShowFav;
- (BOOL)shouldShowMoreFav;
- (id)favTitle;
- (id)favViewData;
- (id)markFeeViewData;
- (id)serverViewData;
- (id)selectedCardName;
- (id)selectedCardIcon;
- (id)changeCardRedDot;
- (id)changeCardViewData;
- (BOOL)useChangeCardViewV2;
- (BOOL)showNoBankFav;
- (id)bankFavGuideDataView:(double)arg1;
- (void)onBankFaveGuideButtonClick;
- (id)changeCardViewWithWidth:(double)arg1 height:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3 scene:(int)arg4;
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)didMoveToWindow;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)showAnimation;
- (void)endAnimation;
- (void)setContent:(id)arg1;
- (void)setConfirmButtonName:(id)arg1;
- (void)closeView;
- (void)onPayBtnClick;
- (void)onCancelBtnClick;
- (BOOL)accessibilityPerformEscape;
- (void)OnSelectOtherCard;
- (void)OnSelectTradeFavInfo;
- (void)onJumpToModal:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (BOOL)isThouchIDAuthEnabelForCurrentOrder:(id)arg1;
- (id)getHighlightImg:(CGRect)arg1;
- (id)getTransactionId;
- (float)getBottomMarginContent;
- (float)getBottomMarginLine;
- (float)getBottomMarginDesc;
- (float)getBottomMarginMoney;
- (float)getBottomMarginFav;
- (float)getBottomMarginCardInfo;
- (float)getBottomMarginBtn;
- (float)passwordMarginBottom;
- (void)onCellClick:(id)arg1;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (BOOL)is_open_field_area;
- (id)field_area_info;
- (BOOL)useFetchData;
- (id)fetchMoney;
- (id)price_total_fee;
- (id)price_fee_type;
- (id)price_fee_symbol;
- (id)settlement_fee;
- (id)settlement_type;
- (id)settlement_symbol;
- (id)payABTestItem;
- (void)setPayABTestItem:(id)arg1;
- (void).cxx_destruct;
@end
