@interface MMAuthorizeGameInfoHalfScreenView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMAuthorizeGameInfoHalfScreenViewDelegate> _delegate; // +0x8
    MMAuthorizeGameInfoHalfScreenViewModel * _halfScreenViewModel; // +0x10
    MMTableView * _tableView; // +0x18
    UIView * _tableFooterView; // +0x20
    UIView * _footerViewSeperator; // +0x28
}
- (id)initWithViewModel:(id)arg1;
- (void)setupTableView;
- (void)changeHeight;
- (void)layoutSubviews;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)pageSheetContentWidth;
- (double)calDetailViewHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)halfScreenViewModel;
- (void)setHalfScreenViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)footerViewSeperator;
- (void)setFooterViewSeperator:(id)arg1;
- (void).cxx_destruct;
@end

