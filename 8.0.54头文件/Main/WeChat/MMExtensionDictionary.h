@interface MMExtensionDictionary : NSObject
{
    os_unfair_lock_s m_lock; // +0x8
    void * m_dict; // +0x10
    void * m_observerToKeys; // +0x18
    BOOL m_needCleanUp; // +0x20
    BOOL m_needDeepClean; // +0x21
}
- (id)initWithKeyExtension:(BOOL)arg1;
- (void)dealloc;
- (BOOL)registerExtension:(id)arg1 forKey:(unsigned long long)arg2;
- (BOOL)unregisterExtension:(id)arg1 forKey:(unsigned long long)arg2;
- (BOOL)unregisterAllKeyExtension:(id)arg1;
- (void *)getKeyExtensionList:(unsigned long long)arg1;
- (void)testNeedsCleanUp;
- (void)cleanUp;
- (id)existExtensionObject;
@end

