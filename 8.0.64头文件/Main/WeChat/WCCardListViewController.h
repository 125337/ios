@interface WCCardListViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x70
    id <WCCardListViewControllerDelegate> m_delegate; // +0x78
    NSMutableArray * _cardDataList; // +0x80
}
- (void)initData;
- (void)changeDataSource:(id)arg1;
- (void)initTableView;
- (void)initView;
- (void)onCancel;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)dealloc;
- (void)OnDataChange;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadCellSubView:(id)arg1 cardIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)cardDataList;
- (void)setCardDataList:(id)arg1;
- (void).cxx_destruct;
@end
