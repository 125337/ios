@interface TingObjcBypassMessageServiceCpp : UnitRCObjcBaseProxyClass <TingObjcBypassMessageService>
+ (id)sharedInstance;
+ (void)onReceiveMessage:(id)arg1;
+ (void)onReceiveStatusNotify:(id)arg1;
- (long long)sendText:(id)arg1;
- (long long)sendAppMsg:(id)arg1;
- (id)getMessages:(id)arg1;
- (id)getAllMessages:(long long)arg1 limit:(int)arg2;
- (int)getUnreadCount:(id)arg1;
- (int)getTotalUnreadCount;
- (void)clearUnread:(id)arg1;
- (void)clearUnreadLocal:(id)arg1;
- (void)clearAllUnread;
- (void)deleteSession:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
@end
