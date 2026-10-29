@interface WCPayBaseViewController : WCBizBaseViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate>
{
    WCPayControlData * m_data; // +0x80
    id <WCPayBaseViewControllerDelegate> _payBaseDelegate; // +0x88
    id <WCPayBaseViewControllerRemoveDelegate> _removeDelegate; // +0x90
}
- (id)data;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)OnBack;
- (void)setPayBaseDelegate:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (id)removeDelegate;
- (void)setRemoveDelegate:(id)arg1;
- (void).cxx_destruct;
@end

