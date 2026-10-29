@interface GameLitePkgUpdateMgr : MMUserService <MMServiceProtocol>
- (BOOL)getGameLitePkgWithPkgId:(id)arg1 liteAppId:(id)arg2 pagePath:(id)arg3 complectionBlock:(id /* block */)arg4;
- (id)doubleCheckGetLiteAppInfoItemWithPkgId:(id)arg1 liteAppId:(id)arg2;
- (void)callComplectionWithPkgId:(id)arg1 liteAppId:(id)arg2 complectionBlock:(id /* block */)arg3 liteItem:(id)arg4;
@end

