@interface WAEJNonRetainingProxy : NSObject
{
    id target; // +0x8
}
+ (id)proxyWithTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
@end
