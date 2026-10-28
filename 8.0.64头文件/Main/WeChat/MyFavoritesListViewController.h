@interface MyFavoritesListViewController : FavBaseListViewController <FavForwardLogicDelegate>
{
    id <MyFavoritesListViewControllerDelegate> _delegate; // +0xe8
}
- (id)init;
- (void)initNavigationBar;
- (void)OnCancelModalView:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldInteractiveDismiss;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)forwardData:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
