@interface JSApiScopeAuthListView : WAAuthPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * _tableView; // +0x8
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)scrollToAvatarById:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)isDefaultAvatarId:(unsigned int)arg1;
- (id)authInfo;
- (id)pageSheet;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end

