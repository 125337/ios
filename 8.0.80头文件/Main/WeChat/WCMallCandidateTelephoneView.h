@interface WCMallCandidateTelephoneView : MMUIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView * m_oTelFilterTableView; // +0x8
    UIImageView * bgImageView; // +0x10
    id <WCMallCandidateTelephoneViewDelegate> m_delegate; // +0x18
}
- (void)initTableView;
- (void)initView;
- (id)initWithFrame:(CGRect)arg1;
- (void)resetWCMallTelListTableViewHeight:(double)arg1;
- (void)dealloc;
- (void)reloadCandidateTelephoneView;
- (void)reloadTelFilterTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
