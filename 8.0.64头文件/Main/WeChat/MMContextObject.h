@interface MMContextObject : NSProxy
{
    BOOL m_store; // +0x8
    MMContext * m_context; // +0x10
    id m_obj; // +0x18
    os_unfair_lock_s m_setLock; // +0x20
    unordered_map<SEL *, NSMethodSignature *, std::hash<SEL *>, std::equal_to<SEL *>, std::allocator<std::pair<SEL *const, NSMethodSignature *>>> m_hookSet; // +0x28
}
+ (id)contextObjectWithContext:(id)arg1 obj:(id)arg2 store:(BOOL)arg3;
- (id)initWithContext:(id)arg1 obj:(id)arg2 store:(BOOL)arg3;
- (void)dealloc;
- (id)returnNil;
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
- (id)weakContextObject;
- (id)weakContextObjectWithContext:(id)arg1;
- (id)weakContextObjectIfExist;
- (id)strongContextObject;
- (id)strongContextObjectWithContext:(id)arg1;
- (id)strongContextObjectIfExist;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
