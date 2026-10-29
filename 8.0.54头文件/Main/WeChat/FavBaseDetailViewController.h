@interface FavBaseDetailViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, IFavoritesExt, FavTagViewDelegate>
{
    MMTableView * m_tableView; // +0x68
    FavoritesItem * m_favItem; // +0x70
}
- (id)initWithFavItem:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)initNavigationBar;
- (void)initTableView;
- (void)viewDidTransitionToNewSize;
- (void)onAction:(id)arg1;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)genHeadCell:(id)arg1 indexPath:(id)arg2;
- (void)genFooterContent:(id)arg1 indexPath:(id)arg2;
- (BOOL)canShowConvertToNoteActionSheet;
- (void)convertToNoteViewController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onFavTagEditBegin:(int)arg1;
- (void)onFavTagEditOK;
- (void).cxx_destruct;
@end

