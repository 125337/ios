@interface CommonReddotSyncManagerCpp : UnitRCObjcBaseProxyClass <CommonReddotSyncManager>
+ (id)sharedInstance;
- (void)initService:(id)arg1;
- (void)removeService:(unsigned int)arg1;
- (void)onNotifyReceived:(unsigned long long)arg1 recvData:(id)arg2;
- (void)onActionNotify:(unsigned long long)arg1 bizType:(unsigned long long)arg2 recvData:(id)arg3;
- (void)onAppForeground;
- (void)onReddotChanged:(id)arg1;
- (void)onReddotReplaced:(unsigned int)arg1;
- (void)onEnterBiz:(unsigned int)arg1;
- (void)doSync:(unsigned int)arg1 syncScene:(int)arg2;
- (void)sync:(unsigned int)arg1 request:(id)arg2;
- (void)addReddotPathListener:(id)arg1 listener:(id)arg2;
- (void)removeReddotPathListener:(id)arg1 listener:(id)arg2;
- (void)addReddotListener:(id)arg1;
- (void)removeReddotListener:(id)arg1;
@end

