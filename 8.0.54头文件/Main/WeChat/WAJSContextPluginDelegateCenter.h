@interface WAJSContextPluginDelegateCenter : NSObject
{
    Protocol * m_protocolKey; // +0x8
    NSRecursiveLock * m_delegateLock; // +0x10
    NSMutableArray * m_delegates; // +0x18
    BOOL m_needCleanUp; // +0x20
}
- (id)initWithKey:(id)arg1;
- (BOOL)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)__delegate:(SEL)arg1 block:(id /* block */)arg2;
- (void)releaseDelegates;
- (void)__cleanUp;
- (void)cleanUp;
- (void).cxx_destruct;
@end

