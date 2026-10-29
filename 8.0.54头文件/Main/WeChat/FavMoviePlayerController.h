@interface FavMoviePlayerController : MMMoviePlayerController <MMWebViewDelegate, FavForwardLogicDelegate, FavTagViewDelegate>
{
    FavoritesItem * m_favItem; // +0xf8
    FavDataItemWrap * m_favDataWrap; // +0x100
    FavoritesItemDataField * m_favData; // +0x108
    BOOL m_isActionSheetShowing; // +0x110
}
- (id)initWithFavItem:(id)arg1;
- (id)initWithFavDataWrap:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)onOperate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFavTagEdit;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onFavTagEditOK;
- (void)onFavTagEditCancel;
- (void)onFavDelete;
- (void)handleLongPressEx:(id)arg1;
- (id)getFavForawrdViewController;
- (id)m_favItem;
- (void)setM_favItem:(id)arg1;
- (id)m_favDataWrap;
- (void)setM_favDataWrap:(id)arg1;
- (id)m_favData;
- (void)setM_favData:(id)arg1;
- (void).cxx_destruct;
@end

