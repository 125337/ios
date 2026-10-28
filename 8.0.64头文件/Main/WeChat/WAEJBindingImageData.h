@interface WAEJBindingImageData : WAEJBindingBase <EJDrawable>
{
    WAEJImageData * imageData; // +0x20
    OpaqueJSValue * dataArray; // +0x28
}
+ (void *)_ptr_to_get_data;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_get_height;
- (id)initWithImageData:(id)arg1;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)dealloc;
- (id)imageData;
- (id)texture;
- (OpaqueJSValue *)_get_data:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_instance:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_width:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_height:(OpaqueJSContext *)arg1;
@end
