@interface QQAccountMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
- (void)dealloc;
- (void)clearWBSX;
- (void)clearQQFriend;
- (void)clearQQInvite;
- (void)clearWBReader;
- (void)clearQQData;
- (void)uninstallQQPluginWithoutCGI;
- (void)clearQQFlags;
- (BOOL)bindQQ:(id)arg1;
- (BOOL)unBindQQ:(id)arg1;
- (void)unBindQQclearQQ;
- (void)handleUnBindQQ:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBindQQ:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end

