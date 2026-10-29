@interface WCFinderRedDotThreadSafeDictionary : NSObject
{
    NSMutableDictionary * _dicContainer; // +0x8
    NSRecursiveLock * _lock; // +0x10
}
- (id)initWithQueueName:(id)arg1;
- (id)currentDic;
- (void)containerReset;
- (void)containerSetObject:(id)arg1 forKey:(id)arg2;
- (void)containerRemoveObjectForKey:(id)arg1;
- (void)containerRemoveObjectsForKeys:(id)arg1;
- (void)containerRemoveAllObjects;
- (id)containerObjectForKey:(id)arg1;
- (id)containerMutableCopy;
- (unsigned long long)containerCount;
- (void)containerEnumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)containerAllValues;
- (id)dicContainer;
- (void)setDicContainer:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
