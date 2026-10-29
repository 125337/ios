@interface LazyExtensionAgent : MMRootService <MMServiceProtocol>
{
    NSMutableDictionary * m_dicExtensions; // +0x8
    NSMutableDictionary * m_dicKeyExtensions; // +0x10
}
- (id)init;
- (BOOL)returnAsRawService;
- (void)addListener:(Class)arg1 toDic:(id)arg2 forMethods:(objc_method_description *)arg3 methodCount:(unsigned int)arg4;
- (void)registerLazyListener:(Class)arg1 onExtension:(id)arg2;
- (void)ensureLazyListenerInitedForExtension:(id)arg1 withSelector:(SEL)arg2 inContext:(id)arg3;
- (void)registerLazyListener:(Class)arg1 onExtension:(id)arg2 forKey:(id)arg3;
- (void)ensureLazyListenerInitedForExtension:(id)arg1 withSelector:(SEL)arg2 forKey:(id)arg3 inContext:(id)arg4;
- (void).cxx_destruct;
@end
