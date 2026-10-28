@interface MMFinderLiveShopShelfGroupedProductsCellAdapter : MMFinderLiveShopShelfCellAdapter
{
    MMFinderLiveGroupedProductsViewModel * _viewModel; // +0x8
    MMFinderLiveShopShelfGroupedProductsAdapter * _groupsAdapter; // +0x10
}
+ (void)registerClassInTableView:(id)arg1;
- (id)initWithViewModel:(id)arg1 groupsAdapter:(id)arg2;
- (id)identifier;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)groupsAdapter;
- (void)setGroupsAdapter:(id)arg1;
- (void).cxx_destruct;
@end
