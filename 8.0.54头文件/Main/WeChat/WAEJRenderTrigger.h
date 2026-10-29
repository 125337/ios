@interface WAEJRenderTrigger : NSObject
{
    OpaqueJSValue * callback; // +0x8
    BOOL active; // +0x10
    WAEJJavaScriptView * scriptView; // +0x18
    BOOL subContext; // +0x20
    NSDate * _target; // +0x28
}
- (id)initWithScriptView:(id)arg1 callback:(OpaqueJSValue *)arg2;
- (void)dealloc;
- (void)invoke;
- (BOOL)active;
- (BOOL)subContext;
- (void)setSubContext:(BOOL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
@end

