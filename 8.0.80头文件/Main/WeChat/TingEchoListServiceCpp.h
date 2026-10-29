@interface TingEchoListServiceCpp : UnitRCObjcBaseProxyClass <TingEchoListService>
+ (id)sharedInstance;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)load:(id /* block */)arg1;
- (void)loadMore:(id /* block */)arg1;
- (void)insertItem:(id)arg1;
- (id)getItems;
- (int)getEchoCount;
- (void)addStatusListener:(id)arg1;
- (void)removeStatusListener:(id)arg1;
- (void)replayMessages;
- (void)deleteSession:(id)arg1;
- (BOOL)getEchoUnreadBadgeStatus:(int)arg1;
- (BOOL)dismissEchoUnreadBadge:(int)arg1;
- (int)getEchoTotalUnreadCount;
- (void)addEchoUnreadBadgeStatusListener:(id)arg1;
- (void)removeEchoUnreadBadgeStatusListener:(id)arg1;
@end
