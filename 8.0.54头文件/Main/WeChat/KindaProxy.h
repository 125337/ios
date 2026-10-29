@interface KindaProxy : NSProxy
{
    id _object; // +0x8
}
+ (id)proxyWithObject:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (void).cxx_destruct;
@end

