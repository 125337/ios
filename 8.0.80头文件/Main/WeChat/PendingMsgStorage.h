@interface PendingMsgStorage : NSObject
{
    MMLRUCache * _cache; // +0x8
    NSRecursiveLock * _lock; // +0x10
}
+ (id)md5StringFromUserName:(id)arg1;
- (id)init;
- (id)getAllInfos:(id)arg1;
- (void)addInfo:(id)arg1 chatName:(id)arg2;
- (void)deleteInfo:(id)arg1 msgLocalId:(unsigned int)arg2;
- (void)deleteAllInfos:(id)arg1;
- (id)_getAllInfos:(id)arg1;
- (id)getPBPath:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
