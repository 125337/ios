@interface TingSafeWeakProxy : NSProxy
{
    id _object; // +0x8
    id _innerWeakContextObject; // +0x10
}
- (id)initWithObject:(id)arg1;
- (BOOL)isValidStatus;
- (id)obj;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)returnNil;
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
- (id)object;
- (void)setObject:(id)arg1;
- (id)innerWeakContextObject;
- (void)setInnerWeakContextObject:(id)arg1;
- (void).cxx_destruct;
@end
