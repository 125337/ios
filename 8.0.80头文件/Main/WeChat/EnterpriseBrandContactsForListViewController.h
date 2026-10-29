@interface EnterpriseBrandContactsForListViewController : BrandContactsViewController
{
    UILabel * _emptyLabel; // +0xb0
}
- (void)initData;
- (void)initView;
- (void)openTargetForContact:(id)arg1;
- (void)initNavbar;
- (void)initSearchBar;
- (void)initCountLabel:(id)arg1;
- (void)updateCount;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (void).cxx_destruct;
@end
