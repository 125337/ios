@interface MMServiceWrapper : NSProxy
{
    MMBaseService * m_service; // +0x8
    os_unfair_lock_s m_setLock; // +0x10
    unordered_map<SEL *, NSMethodSignature *, std::hash<SEL *>, std::equal_to<SEL *>, std::allocator<std::pair<SEL *const, NSMethodSignature *>>> m_hookSet; // +0x18
}
- (id)weakContextObject;
- (id)weakContextObjectWithContext:(id)arg1;
- (id)strongContextObject;
- (id)strongContextObjectWithContext:(id)arg1;
- (id)initWithServiceObj:(id)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (Class)superclass;
- (Class)class;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isProxy;
- (id)description;
- (id)debugDescription;
- (id)unsafeUnwrap;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
