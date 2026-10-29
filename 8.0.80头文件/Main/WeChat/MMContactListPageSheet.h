@interface MMContactListPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    double m_pageSheetHeight; // +0x8
    NSArray * m_arrContact; // +0x10
    MMTableView * m_tableView; // +0x18
    MMUIView * _containerView; // +0x20
}
- (id)initWithArrContact:(id)arg1 pageSheetHeight:(double)arg2;
- (void)initConfig;
- (void)initView;
- (void)initTableView;
- (double)getPageSheetHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)arrContact;
- (void)setArrContact:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
