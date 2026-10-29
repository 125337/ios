@interface WCPaySelectArriveTimeViewController : WCPayBaseViewController
{
    id <WCPaySelectArriveTimeViewControllerDelegate> _delegate; // +0x90
    EnterTimeItem * _m_arriveTimeItem; // +0x98
    WCPayTransBankItem * _m_bankItem; // +0xa0
}
- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)OnReturn;
- (void)reloadData;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_arriveTimeItem;
- (void)setM_arriveTimeItem:(id)arg1;
- (id)m_bankItem;
- (void)setM_bankItem:(id)arg1;
- (void).cxx_destruct;
@end

