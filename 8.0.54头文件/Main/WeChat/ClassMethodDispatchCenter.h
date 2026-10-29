@interface ClassMethodDispatchCenter : MMRootService <MMServiceProtocol>
{
    NSMutableDictionary * m_dictClsMethodObservers; // +0x8
    NSMutableDictionary * m_dictClsMethodKeyObservers; // +0x10
}
- (id)init;
- (void)addObserver:(Class)arg1 toDict:(id)arg2 methods:(objc_method_description *)arg3 methodCnt:(unsigned int)arg4;
- (void)registerClsMethodObserver:(Class)arg1 onProtocol:(id)arg2;
- (void)registerClsMethodKeyObserver:(Class)arg1 onProtocol:(id)arg2 withKey:(id)arg3;
- (void)unregisterClsMethodObserver:(Class)arg1 onProtocol:(id)arg2;
- (void)unregisterClsMethodKeyObserver:(Class)arg1 onProtocol:(id)arg2 withKey:(id)arg3;
- (id)getClsMethodObservers:(id)arg1 selector:(SEL)arg2;
- (Class)getClsMethodKeyObserver:(id)arg1 withKey:(id)arg2;
- (void).cxx_destruct;
@end

