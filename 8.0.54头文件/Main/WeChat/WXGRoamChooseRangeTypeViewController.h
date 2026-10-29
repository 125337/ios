@interface WXGRoamChooseRangeTypeViewController : MMWindowViewController <UITableViewDelegate, UITableViewDataSource, WCMomentsContactTagListViewControllerDelegate, IRoamBackupPackageServiceExt>
{
    long long _enterScene; // +0x78
    id <WXGRoamChooseRangeTypeViewControllerDelegate> _delegate; // +0x80
    UITableView * _sheetView; // +0x88
    UINavigationItem * _customNavigationItem; // +0x90
    MMUINavigationBar * _customNavigationBar; // +0x98
    NSMutableSet * _selectedSet; // +0xa0
    NSArray * _selectedTags; // +0xa8
    NSMutableArray * _selectedUserIncludes; // +0xb0
}
- (void)viewDidLoad;
- (void)setupNavBar;
- (void)updateView;
- (void)onSelectContactTag;
- (void)onSelectIncludeUsers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onCancel;
- (void)onCreate;
- (void)onRoamBackupPackageServiceChooseRangeIncludeUserComplete:(BOOL)arg1;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (id)selectedSet;
- (void)setSelectedSet:(id)arg1;
- (id)selectedTags;
- (void)setSelectedTags:(id)arg1;
- (id)selectedUserIncludes;
- (void)setSelectedUserIncludes:(id)arg1;
- (void).cxx_destruct;
@end

