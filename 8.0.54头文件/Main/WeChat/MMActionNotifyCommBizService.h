@interface MMActionNotifyCommBizService : MMUserService <MMServiceProtocol>
{
    MMLRUCache * _notifyUUIDCache; // +0x8
}
- (BOOL)commonCheckExistWithUUID:(id)arg1;
- (void)syncWithCommonBitsNotify:(id)arg1;
- (void)handleBizId1:(int)arg1 data:(id)arg2;
- (id)notifyUUIDCache;
- (void)setNotifyUUIDCache:(id)arg1;
- (void).cxx_destruct;
@end

