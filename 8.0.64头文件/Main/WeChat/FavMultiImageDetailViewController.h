@interface FavMultiImageDetailViewController : FavBaseDetailViewController <BaseScanLogicDelegate, FavActionSheetDelegate, WCActionSheetDelegate, IFavoritesExt, FavImagePreViewDelegate, FavForwardLogicDelegate>
{
    unsigned int m_uiLongPressedIndex; // +0x80
    BOOL m_hasIllegalData; // +0x84
    int m_qrcodeActionSheetIndex; // +0x88
    WCActionSheetWithScanWXCode * m_favImgLongPressAction; // +0x90
    FavImagePreView * m_longPressView; // +0x98
    FavActionSheet * m_favActionSheet; // +0xa0
}
- (id)initWithFavItem:(id)arg1;
- (void)checkIllegalTypeWithDataList:(id)arg1;
- (void)viewDidLoad;
- (void)adjustViewAndNavBarRect;
- (void)onAction:(id)arg1;
- (id)getCurrentViewController;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (void)onFavActionSheetSelectedForwardToUser:(id)arg1;
- (void)onFavActionSheetWillDismiss;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)onForwardFavDataWrap2Msg;
- (void)onForwardFavDataWrap2MsgToUser:(id)arg1;
- (void)onForwardFavDataWrap2WC;
- (void)onSaveFavDataImg;
- (void)onClickFavPreImage:(id)arg1 ImageIndex:(unsigned int)arg2;
- (void)onLongPressedFavPreImage:(id)arg1;
- (void)onWillLongPressFavImagePreView:(id)arg1 imageView:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidTransitionToNewSize;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (id)getFavForawrdViewController;
- (void).cxx_destruct;
@end
