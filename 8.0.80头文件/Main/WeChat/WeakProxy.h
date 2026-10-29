@interface WeakProxy : NSProxy
{
    id _object; // +0x8
}
+ (id)weakProxy:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (void).cxx_destruct;
@end
