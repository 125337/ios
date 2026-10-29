@interface MsgVideoPreloadMgr : MMUserService <MMServiceProtocol, IMsgExt>
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (id)init;
- (void)PausePreload;
- (void)ResumePreload;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
@end

