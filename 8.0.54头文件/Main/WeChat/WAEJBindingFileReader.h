@interface WAEJBindingFileReader : WAEJBindingEventedBase
{
    NSString * encoding; // +0x30
    unsigned int workerId; // +0x38
}
+ (void *)_ptr_to_func_read;
+ (OpaqueJSValue *)makeReadFileResult:(OpaqueJSContext *)arg1 data:(id)arg2 encoding:(id)arg3;
+ (id)hexStringFromData:(id)arg1;
+ (id)stringFromByte:(unsigned char)arg1;
+ (void *)_ptr_to_get_onread;
+ (void *)_ptr_to_set_onread;
+ (void *)_ptr_to_get_onerror;
+ (void *)_ptr_to_set_onerror;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_func_read:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (void)readFileComplete:(id)arg1 error:(id)arg2;
@end

