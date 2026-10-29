@interface WAJSConvert : NSObject
+ (OpaqueJSValue *)jsObjectMakeArrayBufferWithData:(id)arg1 context:(OpaqueJSContext *)arg2 shared:(BOOL)arg3;
+ (id)getDataWithArrayBuffer:(OpaqueJSValue *)arg1 context:(OpaqueJSContext *)arg2;
+ (void *)getDataWithArrayBuffer:(OpaqueJSValue *)arg1 length:(unsigned long long *)arg2 context:(OpaqueJSContext *)arg3;
+ (OpaqueJSValue *)compatible_jsObjectMakeArrayBufferWithData:(id)arg1 context:(OpaqueJSContext *)arg2;
+ (id)compatible_getDataWithArrayBuffer:(OpaqueJSValue *)arg1 context:(OpaqueJSContext *)arg2;
+ (void)jsObjectSetArrayBuffer:(OpaqueJSValue *)arg1 withData:(id)arg2 context:(OpaqueJSContext *)arg3;
@end

