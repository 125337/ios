@interface WCMallOldTelephoneView : MMUIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView * m_oTelFilterTableView; // +0x8
    id <WCMallOldTelephoneViewDelegate> m_delegate; // +0x10
    unsigned int _historyCount; // +0x18
    MMUIView * _backgroundView; // +0x20
}
- (void)dealloc;
- (id)initOldTelphoneViewWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)initView;
- (void)initTableView;
- (void)resetWCMallTelListTableViewHeight;
- (void)reloadTelFilterTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tapGesture;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (unsigned int)historyCount;
- (void)setHistoryCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

