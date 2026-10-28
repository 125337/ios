@interface XEffectVideoRecorder : NSObject
{
    BOOL _isRecording; // +0x8
    NSString * _filePath; // +0x10
    AVAssetWriter * _assetWriter; // +0x18
    AVAssetWriterInput * _assetWriterInput; // +0x20
    AVAssetWriterInputPixelBufferAdaptor * _pixelBufferAdaptor; // +0x28
    NSObject<OS_dispatch_queue> * _assetWriterQueue; // +0x30
    CGSize _videoSize; // +0x38
    struct _currentTime; // +0x48
    struct _startTime; // +0x60
}
- (id)initWithFilePath:(id)arg1 videoSize:(CGSize)arg2;
- (void)initAssetWriter;
- (void)startRecordWithCompletion:(id /* block */)arg1;
- (void)finishRecord:(id /* block */)arg1;
- (void)cancelRecord;
- (BOOL)appendRawSample:(opaqueCMSampleBuffer *)arg1 trimRect:(CGRect)arg2;
- (BOOL)appendRawPixel:(__CVBuffer *)arg1 time:(struct)arg2 trimRect:(CGRect)arg3;
- (BOOL)appendSnapshot:(id)arg1 frameTime:(struct)arg2;
- (BOOL)startRecord;
- (BOOL)realAppendSnapshot:(id)arg1 frameTime:(struct)arg2;
- (BOOL)isWriting;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (id)assetWriter;
- (void)setAssetWriter:(id)arg1;
- (id)assetWriterInput;
- (void)setAssetWriterInput:(id)arg1;
- (id)pixelBufferAdaptor;
- (void)setPixelBufferAdaptor:(id)arg1;
- (id)assetWriterQueue;
- (void)setAssetWriterQueue:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (struct)currentTime;
- (void)setCurrentTime:(struct)arg1;
- (struct)startTime;
- (void)setStartTime:(struct)arg1;
- (void).cxx_destruct;
@end
