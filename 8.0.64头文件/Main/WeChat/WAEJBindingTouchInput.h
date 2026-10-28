@interface WAEJBindingTouchInput : WAEJBindingEventedBase <EJTouchDelegate>
{
    OpaqueJSString * jsLengthName; // +0x30
    OpaqueJSString * jsTargetName; // +0x38
    OpaqueJSString * jsIdentifierName; // +0x40
    OpaqueJSString * jsTouchForce; // +0x48
    OpaqueJSString * jsTouchMaxForce; // +0x50
    OpaqueJSString * jsPageXName; // +0x58
    OpaqueJSString * jsPageYName; // +0x60
    OpaqueJSString * jsClientXName; // +0x68
    OpaqueJSString * jsClientYName; // +0x70
    OpaqueJSString * jsOffsetXName; // +0x78
    OpaqueJSString * jsOffsetYName; // +0x80
    OpaqueJSValue *[16] jsTouchesPool; // +0x88
    OpaqueJSValue * jsTouchTarget; // +0x108
    unsigned long long touchesInPool; // +0x110
    unsigned int screenCanvasId; // +0x118
    NSArray * sortDescriptors; // +0x120
    NSMutableSet * touchIdSet; // +0x128
}
+ (void *)_ptr_to_get_ontouchstart;
+ (void *)_ptr_to_set_ontouchstart;
+ (void *)_ptr_to_get_ontouchend;
+ (void *)_ptr_to_set_ontouchend;
+ (void *)_ptr_to_get_ontouchmove;
+ (void *)_ptr_to_set_ontouchmove;
+ (void *)_ptr_to_get_ontouchcancel;
+ (void *)_ptr_to_set_ontouchcancel;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (BOOL)isScreenCanvasMode;
- (void)createWithJSObject:(OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (void)dealloc;
- (void)triggerEvent:(id)arg1 timestamp:(double)arg2 all:(id)arg3 changed:(id)arg4 remaining:(id)arg5;
- (void)postEvent:(id)arg1;
- (unsigned long long)pointInside:(CGPoint)arg1;
@end
