@interface WCPayOrderDetailHistoryViewController : WCPayBaseViewController <WCPayHistoryOrderDetailViewDelegate>
{
    id <WCPayOrderDetailHistoryViewControllerDelegate> m_delegate; // +0x90
    BOOL m_bShowCompleteBtn; // +0x98
    BOOL m_bShowSuccessTip; // +0x99
    BOOL m_bSelectedSuscribeServiceApp; // +0x9a
    BOOL m_bShowAppFrom; // +0x9b
    BOOL m_bHandlePoped; // +0x9c
    NSString * m_nsCompleteBtnTitle; // +0xa0
    NSString * m_nsCommondTip; // +0xa8
    int m_enWCPayHistoryOrderDetailViewScene; // +0xb0
}
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)BackHistoryOrderDetail;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)OnHistoryOrderDetailBack;
- (void)OnNextStepBack;
- (void)initNavigationBar;
- (void)selectSubscribeApp:(id)arg1;
- (void)OnSubscribeApp;
- (void)reloadTableView;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)setCompleteBtnTitle:(id)arg1;
- (void)showCompleteBtn:(BOOL)arg1;
- (void)showSuccessPayTip:(BOOL)arg1;
- (void)showOrderFromApp:(BOOL)arg1;
- (void)showBizSafeTitle:(BOOL)arg1;
- (void)setWCPayOrderDetailHistoryViewScene:(int)arg1;
- (void)OnClickedBrandProfile:(id)arg1 NickName:(id)arg2;
- (void)OnClickedRetrySendMessage:(id)arg1 UserName:(id)arg2;
- (void)OnClickedReceiverProfile:(id)arg1;
- (void).cxx_destruct;
@end

