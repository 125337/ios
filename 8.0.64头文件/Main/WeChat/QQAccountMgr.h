@interface QQAccountMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
- (void)dealloc;
- (void)clearWBSX;
- (void)clearQQFriend;
- (void)clearQQInvite;
- (void)clearWBReader;
- (void)clearQQData;
- (void)uninstallQQPluginWithoutCGI;
- (void)clearQQFlags;
- (BOOL)bindQQ:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)unBindQQ:(id)arg1 completion:(id /* block */)arg2;
- (void)unBindQQclearQQ;
- (void)handleUnBindQQ;
- (void)handleBindQQ:(id)arg1 request:(id)arg2;
@end
