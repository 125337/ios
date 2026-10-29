@interface WAEJBindingDownload : WAEJBindingEventedBase
{
    NSString * taskId; // +0x30
    unsigned int workerId; // +0x38
}
+ (void *)_ptr_to_func_start;
+ (void *)_ptr_to_func_abort;
+ (void *)_ptr_to_get_onheader;
+ (void *)_ptr_to_set_onheader;
+ (void *)_ptr_to_get_onprogress;
+ (void *)_ptr_to_set_onprogress;
+ (void *)_ptr_to_get_onsuccess;
+ (void *)_ptr_to_set_onsuccess;
+ (void *)_ptr_to_get_onfail;
+ (void *)_ptr_to_set_onfail;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_func_start:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_abort:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (void)onProgress:(float)arg1 written:(long long)arg2 total:(long long)arg3;
- (void)onHeaderReceived:(id)arg1;
- (void)onDownloadComplete:(id)arg1 filePath:(id)arg2 status:(unsigned long long)arg3 dataLength:(long long)arg4 profile:(id)arg5;
- (void)onDownloadError:(id)arg1 errNo:(id)arg2;
@end

