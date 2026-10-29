@interface MailContactFilterView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x8
    NSMutableArray * m_filterArray; // +0x10
    id <MailContactFilterViewDelegate> m_delegate; // +0x18
}
- (void)reloadTableView;
- (void)resetOffset;
- (void)initData;
- (void)initView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)m_filterArray;
- (void)setM_filterArray:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
