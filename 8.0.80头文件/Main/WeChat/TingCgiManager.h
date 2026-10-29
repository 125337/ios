@interface TingCgiManager : NSObject
+ (void)likeOp:(BOOL)arg1 scene:(int)arg2 listenId:(id)arg3 completion:(id /* block */)arg4;
+ (void)likeOp:(BOOL)arg1 scene:(int)arg2 listenId:(id)arg3 type:(int)arg4 finderFeedId:(id)arg5 completion:(id /* block */)arg6;
+ (void)likeOp:(BOOL)arg1 scene:(int)arg2 isPublic:(BOOL)arg3 listenId:(id)arg4 categoryId:(id)arg5 completion:(id /* block */)arg6;
+ (void)likeOp:(BOOL)arg1 scene:(int)arg2 isPublic:(BOOL)arg3 listenId:(id)arg4 categoryId:(id)arg5 type:(int)arg6 finderFeedId:(id)arg7 completion:(id /* block */)arg8;
+ (void)likeReportBy28683WithScene:(int)arg1 listenId:(id)arg2 like:(BOOL)arg3;
+ (void)likeOp:(BOOL)arg1 scene:(int)arg2 item:(id)arg3 categoryItem:(id)arg4 completion:(id /* block */)arg5;
+ (void)likeOp:(BOOL)arg1 scene:(int)arg2 isPublic:(BOOL)arg3 item:(id)arg4 categoryItem:(id)arg5 completion:(id /* block */)arg6;
+ (void)modifyListenLaterStatusWithItem:(id)arg1 isListenLater:(BOOL)arg2 scene:(int)arg3 completion:(id /* block */)arg4;
+ (void)fetchNewDiscoverItems:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchCategoryOrAlbumById:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchListenItems:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchListenItemWithContext:(id)arg1 completion:(id /* block */)arg2;
+ (void)dislikeWithListenId:(id)arg1 andCategoryId:(id)arg2 completion:(id /* block */)arg3;
+ (void)fetchMusicPlayItemWithListenId:(id)arg1 forceUpdate:(BOOL)arg2 needEncrypt:(BOOL)arg3 completion:(id /* block */)arg4;
@end
