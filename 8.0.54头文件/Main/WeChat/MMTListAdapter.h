@interface MMTListAdapter : NSObject <UITableViewDataSource, UITableViewDelegate, MMTListTableViewContext>
{
    BOOL _isInObjectUpdateTransaction; // +0x8
    id <MMTListAdapterDataSource> _dataSource; // +0x10
    id <MMTListAdapterDelegate> _delegate; // +0x18
    UITableView * _tableView; // +0x20
    MMListReportManager * _reportHandler; // +0x28
    id <UITableViewDelegate> _tableViewDelegate; // +0x30
    id <UIScrollViewDelegate> _scrollViewDelegate; // +0x38
    MMUIViewController * _viewController; // +0x40
    MMTListSectionMap * _sectionMap; // +0x48
    NSMutableSet * _registeredCellIdentifiers; // +0x50
    NSMutableSet * _registeredSupplementaryViewIdentifiers; // +0x58
}
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)reloadData;
- (void)_updateObjects;
- (void)_updateWithData:(id)arg1;
- (id)_generateTransitionDataWithObjects:(id)arg1 dataSource:(id)arg2;
- (void)_updateObjects:(id)arg1 dataSource:(id)arg2;
- (id)sectionControllerForSection:(long long)arg1;
- (id)indexPathForSectionController:(id)arg1 index:(long long)arg2;
- (id)dequeueReusableCellOfClass:(Class)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableCellOfClass:(Class)arg1 withReuseIdentifier:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4;
- (void)deselectRowAtIndex:(long long)arg1 sectionController:(id)arg2 animated:(BOOL)arg3;
- (id)cellForItemAtIndex:(long long)arg1 sectionController:(id)arg2;
- (id)objectForSectionController:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (id)reportHandler;
- (void)setReportHandler:(id)arg1;
- (id)tableViewDelegate;
- (void)setTableViewDelegate:(id)arg1;
- (id)scrollViewDelegate;
- (void)setScrollViewDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)sectionMap;
- (id)registeredCellIdentifiers;
- (void)setRegisteredCellIdentifiers:(id)arg1;
- (id)registeredSupplementaryViewIdentifiers;
- (void)setRegisteredSupplementaryViewIdentifiers:(id)arg1;
- (BOOL)isInObjectUpdateTransaction;
- (void)setIsInObjectUpdateTransaction:(BOOL)arg1;
- (void).cxx_destruct;
@end

