@interface FBFilesSearchViewController : WCSearchViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, WCFileBrowseCellDelegate>
{
    id <FBFilesSearchViewControllerDelegate> _delegate; // +0x70
    unsigned long long _type; // +0x78
    MMTableView * _tableView; // +0x80
    UINavigationController * _originalNav; // +0x88
}
- (id)initWithVCType:(unsigned long long)arg1;
- (id)tableView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)realStartSearchFrom:(id)arg1 forceFullScreen:(BOOL)arg2;
- (void)addLeftEdgeGestureState;
- (void)heroDidEndTransition;
- (void)loadTableView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)textDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)onFileBrowseCellTouchIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void)setTableView:(id)arg1;
- (id)originalNav;
- (void)setOriginalNav:(id)arg1;
- (void).cxx_destruct;
@end
