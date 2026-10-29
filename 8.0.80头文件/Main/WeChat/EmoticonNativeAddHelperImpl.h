@interface EmoticonNativeAddHelperImpl : NSObject <EmoticonNativeAddHelperBase>
{
    EmoticonNativeAddHelperCallback * _callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)addCustomEmoticonAsync:(unsigned long long)arg1 imgData:(id)arg2 addWrap:(id)arg3 isSilently:(BOOL)arg4;
- (id)buildObjCWrapFromPb:(id)arg1 imgData:(id)arg2;
- (void)notifyResultToTaskId:(unsigned long long)arg1 callback:(id)arg2 isSuccess:(BOOL)arg3 md5:(id)arg4 errMsg:(id)arg5;
- (void).cxx_destruct;
@end
