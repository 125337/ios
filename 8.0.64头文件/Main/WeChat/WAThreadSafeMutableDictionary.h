@interface WAThreadSafeMutableDictionary : NSObject
{
    NSMutableDictionary * _dic; // +0x8
    NSRecursiveLock * _lock; // +0x10
}
+ (id)dictionary;
- (id)init;
- (void)directlySetDictionary:(id)arg1;
- (void)threadSafeRemoveAllObjects;
- (void)threadSafeSetObject:(id)arg1 forKey:(id)arg2;
- (id)threadSafeObjectForKey:(id)arg1;
- (id)threadSafeRemoveObjectForKey:(id)arg1;
- (unsigned long long)count;
- (id)threaadSafeAllKeys;
- (id)threadSafeAllValues;
- (id)innerDictionary;
- (id)getLock;
- (id)dic;
- (void)setDic:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
