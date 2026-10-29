@interface WAEJBindingCanvasStyle : WAEJBindingBase
{
    WAEJBindingCanvas * binding; // +0x20
}
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_set_width;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_set_height;
+ (void *)_ptr_to_get_left;
+ (void *)_ptr_to_set_left;
+ (void *)_ptr_to_get_top;
+ (void *)_ptr_to_set_top;
+ (void *)_ptr_to_get_imageRendering;
+ (void *)_ptr_to_set_imageRendering;
- (OpaqueJSValue *)jsObject;
- (OpaqueJSValue *)_get_width:(OpaqueJSContext *)arg1;
- (void)_set_width:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_height:(OpaqueJSContext *)arg1;
- (void)_set_height:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_left:(OpaqueJSContext *)arg1;
- (void)_set_left:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_top:(OpaqueJSContext *)arg1;
- (void)_set_top:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_imageRendering:(OpaqueJSContext *)arg1;
- (void)_set_imageRendering:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (id)binding;
- (void)setBinding:(id)arg1;
@end

