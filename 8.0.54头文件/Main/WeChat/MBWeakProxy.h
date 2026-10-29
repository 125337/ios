@interface MBWeakProxy : NSObject
{
    id _target; // +0x8
}
+ (id)proxyWithTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end

