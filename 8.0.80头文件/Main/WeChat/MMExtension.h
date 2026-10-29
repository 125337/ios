@interface MMExtension : NSObject
{
    unsigned int m_methodCount; // +0x8
    objc_method_description * m_methods; // +0x10
    MMExtensionDictionary * m_dictObserver; // +0x18
    MMExtensionDictionary * m_dictKeyObserver; // +0x20
    Protocol * m_extKey; // +0x28
}
- (id)initWithExtension:(id)arg1;
- (void)dealloc;
- (BOOL)registerExtension:(id)arg1;
- (BOOL)registerExtension:(id)arg1 forKey:(id)arg2;
- (void)unregisterExtension:(id)arg1;
- (void)unregisterExtension:(id)arg1 forKey:(id)arg2;
- (void)unregisterAllKeyExtension:(id)arg1;
- (void *)getExtensionListForSelector:(SEL)arg1;
- (void *)getKeyExtensionList:(id)arg1;
- (id)description;
- (id)existExtensionObject;
@end
