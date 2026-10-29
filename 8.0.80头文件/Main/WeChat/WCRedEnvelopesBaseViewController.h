@interface WCRedEnvelopesBaseViewController : WCBizBaseViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate>
{
    WCRedEnvelopesControlData * m_data; // +0x88
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)setupWithData:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void).cxx_destruct;
@end
