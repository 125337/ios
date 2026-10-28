@interface FavSightDetailViewController : FavBaseDetailViewController <FavActionSheetDelegate, WCActionSheetDelegate, FavForwardLogicDelegate, FavSightViewDelegate>
{
    FavSightView * m_sightView; // +0x80
    BOOL m_hasIllegalData; // +0x88
}
- (id)initWithFavItem:(id)arg1;
- (void)viewDidLoad;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)initSightView;
- (id)getFavForawrdViewController;
- (void)onAction:(id)arg1;
- (id)getCurrentViewController;
- (void)onFavActionSheetSelectedForwardToUser:(id)arg1;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)jumpToDetail:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)saveSight;
- (void)OnUpdateItems:(id)arg1;
- (void).cxx_destruct;
@end
