@interface TPDiskReadWrite : NSObject
{
    NSRecursiveLock * _lock; // +0x8
    TPLocalCache * _localCache; // +0x10
}
- (id)initWithName:(id)arg1;
- (void)writeToFile:(id)arg1 value:(id)arg2;
- (id)readAll;
- (id)readAllAndRemove;
- (void)remove:(id)arg1;
- (void)removeAll;
- (id)readReportKey;
- (id)readAllKeys;
- (id)read:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)localCache;
- (void)setLocalCache:(id)arg1;
- (void).cxx_destruct;
@end

