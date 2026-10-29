@interface MBMediaServiceWrapper : NSObject
{
    IMediaSdkWrapper * sdk_wrapper; // +0x8
}
- (id)init;
- (void)dealloc;
- (IMediaSdkWrapper *)GetSdkWrapper;
- (int)getEventType:(id)arg1;
- (void)addEventNotifier:(id)arg1 callback:(id /* block */)arg2;
- (void)delEventNotifier:(id)arg1;
- (void)addContainerNotifier:(unsigned int)arg1 callback:(id /* block */)arg2;
- (void)delContainerNotifier:(unsigned int)arg1;
- (void)addNotifyCallbacker:(unsigned int)arg1 callback:(id /* block */)arg2;
- (void)delNotifyCallbacker:(unsigned int)arg1;
- (void)writerCreate:(id)arg1 callback:(id /* block */)arg2;
- (void)writerStart:(id)arg1 callback:(id /* block */)arg2;
- (void)writerVideo:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 format:(int)arg4 width:(unsigned int)arg5 height:(unsigned int)arg6 horizonalFlip:(BOOL)arg7 verticalFlip:(BOOL)arg8 cts:(unsigned long long)arg9;
- (void)writerAudio:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 format:(int)arg4 channel:(int)arg5 samplerate:(int)arg6 cts:(unsigned long long)arg7;
- (void)writerUpdate:(id)arg1 callback:(id /* block */)arg2;
- (void)writerStop:(id)arg1 callback:(id /* block */)arg2;
- (void)writerRemove:(id)arg1 callback:(id /* block */)arg2;
@end

