@interface EmoticonVideoConverter : NSObject
{
    BOOL _active; // +0x8
    NSObject<OS_dispatch_queue> * _processQueue; // +0x10
    EmoticonVideoConvertConfig * _config; // +0x18
    id /* block */ _completeBlock; // +0x20
    EmoticonVideoInput * _videoInput; // +0x28
}
- (id)initWithQueue:(id)arg1;
- (id)init;
- (BOOL)isActive;
- (BOOL)convertWithConfig:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)startConvert;
- (void)frameProcess;
- (void)compressWithImages:(id)arg1;
- (id)imageFromSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (CGSize)getScaledSizeFor:(CGSize)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)processQueue;
- (void)setProcessQueue:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (void).cxx_destruct;
@end
