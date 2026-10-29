@interface FavoritesStarMgr : MMUserService <MMServiceProtocol>
+ (unsigned int)targetStarTypeForOp:(int)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)starFavItem:(id)arg1 completion:(id /* block */)arg2;
- (void)unstarFavItem:(id)arg1 completion:(id /* block */)arg2;
- (void)unstarFavItem:(id)arg1 skipDualWrite:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)cancelMigrateStarForFavItem:(id)arg1 completion:(id /* block */)arg2;
- (void)enableFavStarWithCompletion:(id /* block */)arg1;
- (void)sendStarCgi:(id)arg1 opType:(int)arg2 skipDualWrite:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)callCompletion:(id /* block */)arg1 success:(BOOL)arg2 errCode:(int)arg3;
@end
