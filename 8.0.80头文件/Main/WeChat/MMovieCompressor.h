@interface MMovieCompressor : MMObject <MMovieDecoderDelegate>
{
    MMovieDecoder * m_decoder; // +0x8
    id <MMovieCompressorDelegate> m_delegate; // +0x10
    NSString * m_moviePath; // +0x18
    NSString * m_originalPath; // +0x20
    CGSize m_videoSize; // +0x28
    double m_bitrate; // +0x38
    unsigned int m_type; // +0x40
    AVAssetWriter * m_writer; // +0x48
    AVAssetWriterInput * m_audioInput; // +0x50
    AVAssetWriterInput * m_videoInput; // +0x58
    AVAssetWriterInputPixelBufferAdaptor * m_PixelBufferInput; // +0x60
    NSObject<OS_dispatch_queue> * m_movieWritingQueue; // +0x68
    unsigned int inputTextureForMovieRendering; // +0x70
    struct m_startTime; // +0x74
    struct m_previousFrameTime; // +0x8c
    struct m_previousAudioTime; // +0xa4
    NSObject<OS_dispatch_queue> * audioQueue; // +0xc0
    BOOL audioEncodingIsFinished; // +0xc8
    BOOL videoEncodingIsFinished; // +0xc9
    BOOL hasCaptureFirstFrame; // +0xca
    double inputWidth; // +0xd0
    double inputHeight; // +0xd8
    BOOL _audioOnly; // +0xe0
    double _zoomLevel; // +0xe8
}
- (id)initWithFilePath:(id)arg1 andSize:(CGSize)arg2;
- (id)initWithFilePath:(id)arg1 andSize:(CGSize)arg2 andBitRate:(double)arg3;
- (void)setAudioOnly:(BOOL)arg1;
- (id)makeNewPath:(id)arg1 gap:(unsigned long long)arg2;
- (void)dealloc;
- (void)initWritterOutput;
- (void)startCompress;
- (void)mMovieDecoder:(id)arg1 onNewVideoFrameReady:(opaqueCMSampleBuffer *)arg2;
- (void)mMovieDecoder:(id)arg1 onNewAudioFrameReady:(opaqueCMSampleBuffer *)arg2;
- (void)mMovieDecoderOnDecodeFinished:(id)arg1;
- (void)compressMovieWithExport;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)zoomLevel;
- (void)setZoomLevel:(double)arg1;
- (BOOL)audioOnly;
- (void).cxx_destruct;
@end
