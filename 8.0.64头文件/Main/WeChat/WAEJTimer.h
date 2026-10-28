@interface WAEJTimer : NSObject
{
    double interval; // +0x8
    OpaqueJSValue * callback; // +0x10
    BOOL active; // +0x18
    BOOL repeat; // +0x19
    WAEJJavaScriptView * scriptView; // +0x20
    BOOL subContext; // +0x28
    double _target; // +0x30
}
- (id)initWithScriptView:(id)arg1 callback:(OpaqueJSValue *)arg2 interval:(double)arg3 repeat:(BOOL)arg4;
- (void)dealloc;
- (void)check;
- (BOOL)active;
- (BOOL)subContext;
- (void)setSubContext:(BOOL)arg1;
- (double)target;
- (void)setTarget:(double)arg1;
@end
