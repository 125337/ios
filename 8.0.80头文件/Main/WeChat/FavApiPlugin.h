@interface FavApiPlugin : NSObject <FavSelectHostApi, MMFlutterPlugin>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)selectFavItemWithCompletion:(id /* block */)arg1;
- (void)openNoteDetailFavId:(long long)arg1 completion:(id /* block */)arg2;
- (void)openFavByMsgXmlXml:(id)arg1 completion:(id /* block */)arg2;
- (void)fav_doOpenFavByMsgXml:(id)arg1 fromViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)fav_resolveViewControllerForOpenFavDetailWithCompletion:(id /* block */)arg1;
@end
