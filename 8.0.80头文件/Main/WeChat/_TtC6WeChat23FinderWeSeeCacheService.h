@interface _TtC6WeChat23FinderWeSeeCacheService : MMUserService <MMServiceProtocol>
{
     state; // +0x8
     unread; // +0x10
     leaveTime; // +0x18
     timer; // +0x28
     active; // +0x30
     inBackground; // +0x31
     now; // +0x38
     cacheDuration; // +0x48
}
- (id)cachedState;
- (id)unreadCache;
- (id)enterWithConfiguration:(id)arg1;
- (void)leave;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)expireIfNeeded;
- (id)init;
- (void).cxx_destruct;
@end
