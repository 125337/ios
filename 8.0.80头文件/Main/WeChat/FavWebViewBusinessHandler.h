@interface FavWebViewBusinessHandler : NSObject <IFavoritesExt, MMWebViewBusinessDelegate>
{
    BOOL _didDelete; // +0x8
    BOOL _didClose; // +0x9
    BOOL _hasRegisteredFavoritesExt; // +0xa
    FavoritesItem * _favItem; // +0x10
    FavDataItemWrap * _dataItemWrap; // +0x18
}
- (id)initWithFavoritesItem:(id)arg1 dataItemWrap:(id)arg2;
- (void)unregisterFavoritesExtIfNeeded;
- (void)dealloc;
- (BOOL)webViewControllerShouldHandleDeleteAction:(id)arg1;
- (BOOL)webViewControllerShouldHandleEditTagAction:(id)arg1;
- (void)webViewController:(id)arg1 didSelectMenuAction:(unsigned long long)arg2 rawTitle:(id)arg3;
- (void)webViewController:(id)arg1 didCloseWithReason:(unsigned long long)arg2;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (id)dataItemWrap;
- (void)setDataItemWrap:(id)arg1;
- (BOOL)didDelete;
- (void)setDidDelete:(BOOL)arg1;
- (BOOL)didClose;
- (void)setDidClose:(BOOL)arg1;
- (BOOL)hasRegisteredFavoritesExt;
- (void)setHasRegisteredFavoritesExt:(BOOL)arg1;
- (void).cxx_destruct;
@end
