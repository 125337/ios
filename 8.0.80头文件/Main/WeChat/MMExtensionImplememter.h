@interface MMExtensionImplememter : NSObject
{
    void * m_observerToExtensionObject; // +0x8
    void * m_extensionObjectList; // +0x10
}
- (id)init;
- (void)dealloc;
- (BOOL)registerExtension:(id)arg1;
- (BOOL)unregisterExtension:(id)arg1;
- (BOOL)needsCleanUp;
- (void)cleanUp;
- (void *)extensionObjectList;
@end
