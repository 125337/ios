@interface TXYAVAssetWriteManager : NSObject
{
    BOOL _canWrite; // +0x8
    opaqueCMFormatDescription * _outputVideoFormatDescription; // +0x10
    opaqueCMFormatDescription * _outputAudioFormatDescription; // +0x18
    long long _writeState; // +0x20
    long long _bitsPerPixel; // +0x28
    long long _frameRate; // +0x30
    long long _bitRate; // +0x38
    NSObject<OS_dispatch_queue> * _writeQueue; // +0x40
    NSURL * _videoUrl; // +0x48
    AVAssetWriter * _assetWriter; // +0x50
    AVAssetWriterInput * _assetWriterVideoInput; // +0x58
    AVAssetWriterInput * _assetWriterAudioInput; // +0x60
    NSDictionary * _videoCompressionSettings; // +0x68
    NSDictionary * _audioCompressionSettings; // +0x70
    CGSize _recordSize; // +0x78
    CGSize _outputSize; // +0x88
}
- (id)writeQueue;
- (id)initWithURL:(id)arg1 withPreviewFrameSize:(CGSize)arg2;
- (void)appendSampleBuffer:(opaqueCMSampleBuffer *)arg1 ofMediaType:(id)arg2;
- (BOOL)startWrite;
- (void)stopWrite:(id /* block */)arg1;
- (BOOL)setUpWriter;
- (void)destroyWrite;
- (void)dealloc;
- (opaqueCMFormatDescription *)outputVideoFormatDescription;
- (void)setOutputVideoFormatDescription:(opaqueCMFormatDescription *)arg1;
- (opaqueCMFormatDescription *)outputAudioFormatDescription;
- (void)setOutputAudioFormatDescription:(opaqueCMFormatDescription *)arg1;
- (long long)writeState;
- (void)setWriteState:(long long)arg1;
- (long long)bitsPerPixel;
- (void)setBitsPerPixel:(long long)arg1;
- (long long)frameRate;
- (void)setFrameRate:(long long)arg1;
- (long long)bitRate;
- (void)setBitRate:(long long)arg1;
- (CGSize)recordSize;
- (void)setRecordSize:(CGSize)arg1;
- (void)setWriteQueue:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)assetWriter;
- (void)setAssetWriter:(id)arg1;
- (id)assetWriterVideoInput;
- (void)setAssetWriterVideoInput:(id)arg1;
- (id)assetWriterAudioInput;
- (void)setAssetWriterAudioInput:(id)arg1;
- (id)videoCompressionSettings;
- (void)setVideoCompressionSettings:(id)arg1;
- (id)audioCompressionSettings;
- (void)setAudioCompressionSettings:(id)arg1;
- (BOOL)canWrite;
- (void)setCanWrite:(BOOL)arg1;
- (CGSize)outputSize;
- (void)setOutputSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
