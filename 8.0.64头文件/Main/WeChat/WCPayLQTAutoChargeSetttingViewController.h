@interface WCPayLQTAutoChargeSetttingViewController : WCPayBaseViewController <WCPayLQTPickerPanelViewDelegate>
{
    id <WCPayLQTAutoChargeSetttingViewControllerDelegate> _delegate; // +0x98
    WCPayLQTPickerPanelView * _pickerPanelView; // +0xa0
}
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)leftBtnClick;
- (void)setupContentView;
- (void)showOpenSuccToastIfNeed;
- (void)reloadTableView;
- (id)setupHeaderView;
- (void)makeSwicthCell:(id)arg1;
- (void)makeChargeTimeCell:(id)arg1;
- (void)onSwitchChange:(id)arg1;
- (void)cancelClose;
- (void)confirmClose;
- (void)chargeTimeCellClick;
- (void)onPickerPanelViewDismiss;
- (void)onPickerPanelViewConfirmWithTimeSpan:(id)arg1;
- (id)timeStringFromTimeSpan:(unsigned int)arg1;
- (id)delegate;
- (id)pickerPanelView;
- (void)setPickerPanelView:(id)arg1;
- (void).cxx_destruct;
@end
