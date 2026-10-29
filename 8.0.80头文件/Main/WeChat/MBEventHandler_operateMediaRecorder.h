@interface MBEventHandler_operateMediaRecorder : MBEventHandlerBaseAsync
- (id)apiName;
- (void)invoke:(id)arg1;
- (void)start:(id)arg1 opId:(id)arg2;
- (void)stop:(id)arg1 opId:(id)arg2;
- (void)abort:(id)arg1 opId:(id)arg2;
- (void)pause:(id)arg1 opId:(id)arg2;
- (void)resume:(id)arg1 opId:(id)arg2;
- (void)callbackErrMsg:(id)arg1;
- (void)removeCtxForOpId:(id)arg1;
- (void)onScreenCapture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelBuffer:(__CVBuffer *)arg4;
- (void)onScreenCapture:(unsigned int)arg1 data:(void *)arg2 size:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 format:(int)arg8;
- (BOOL)invokeInMainThread;
@end
