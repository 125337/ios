@interface BETempNotiMgr : MMUserService <IMsgExt, MMServiceProtocol>
- (void)onServiceInit;
- (id)dataListFrom:(long long)arg1 limit:(unsigned int)arg2 hasMore:(BOOL *)arg3;
- (id)laterDataListFrom:(long long)arg1 limit:(unsigned int)arg2 hasMore:(BOOL *)arg3;
- (id)getMsgByLocalId:(long long)arg1;
- (BOOL)deleteMsgByLocalId:(long long)arg1;
- (void)onBatchReadFromLocalId:(long long)arg1;
- (unsigned long long)getTotalUnreadCount;
- (id)GetFirstUnReadMessage;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
@end
