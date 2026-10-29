@interface _TtC6WeChat24NirvanaUDRVersionUIDebug : MMUIViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
     tableView; // +0x8
     resources; // +0x10
     filteredResources; // +0x18
     expandedIndex; // +0x20
     searchBar; // +0x28
     emptyLabel; // +0x30
}
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onMoreTapped;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end
