@interface JSVirtualMachine2 : NSObject
{
    OpaqueJSContextGroup * m_group; // +0x8
    Lock m_externalDataMutex; // +0x10
    RetainPtr<NSMapTable> m_contextCache; // +0x18
    RetainPtr<NSMapTable> m_externalObjectGraph; // +0x20
    RetainPtr<NSMapTable> m_externalRememberedSet; // +0x28
}
+ (id)virtualMachineWithContextGroupRef:(OpaqueJSContextGroup *)arg1;
+ (unsigned long long)setNumberOfDFGCompilerThreads:(unsigned long long)arg1;
+ (unsigned long long)setNumberOfFTLCompilerThreads:(unsigned long long)arg1;
+ (void)setCrashOnVMCreation:(BOOL)arg1;
- (id)contextForGlobalContextRef:(OpaqueJSContext *)arg1;
- (void)addContext:(id)arg1 forGlobalContextRef:(OpaqueJSContext *)arg2;
- (void *)externalDataMutex;
- (id)externalObjectGraph;
- (id)externalRememberedSet;
- (void)shrinkFootprintWhenIdle;
- (OpaqueJSContextGroup *)JSContextGroupRef;
- (BOOL)isWebThreadAware;
- (id)init;
- (id)initWithContextGroupRef:(OpaqueJSContextGroup *)arg1;
- (void)dealloc;
- (BOOL)isOldExternalObject:(id)arg1;
- (void)addExternalRememberedObject:(id)arg1;
- (void)addManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)removeManagedReference:(id)arg1 withOwner:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
