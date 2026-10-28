@interface JSC2ValueWrapper : NSObject
{
    OpaqueJSContext * _ctx; // +0x8
    OpaqueJSValue * _value; // +0x10
}
+ (id)valueWithRef:(OpaqueJSValue *)arg1 ctx:(OpaqueJSContext *)arg2;
- (id)initWithValueRef:(OpaqueJSValue *)arg1 ctx:(OpaqueJSContext *)arg2;
- (void)dealloc;
- (OpaqueJSValue *)value;
- (void)setValue:(OpaqueJSValue *)arg1;
@end
