@interface MMTListSectionController : NSObject
{
    BOOL _isFirstSection; // +0x8
    BOOL _isLastSection; // +0x9
    MMUIViewController * _viewController; // +0x10
    id <MMTListTableViewContext> _tableViewContext; // +0x18
    long long _section; // +0x20
}
- (id)init;
- (long long)numberOfItems;
- (double)heightForRowAtIndex:(long long)arg1;
- (double)heightForHeader;
- (double)heightForFooter;
- (id)viewForHeader;
- (id)viewForFooter;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (void)willDisplayCell:(id)arg1 forRowAtIndex:(long long)arg2;
- (void)didDisplayCell:(id)arg1 forRowAtIndex:(long long)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)objectForIndexPath:(id)arg1;
- (void)onExposeItem:(id)arg1 indexPath:(id)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)tableViewContext;
- (void)setTableViewContext:(id)arg1;
- (long long)section;
- (void)setSection:(long long)arg1;
- (BOOL)isFirstSection;
- (void)setIsFirstSection:(BOOL)arg1;
- (BOOL)isLastSection;
- (void)setIsLastSection:(BOOL)arg1;
- (void).cxx_destruct;
@end

