@interface SightMovieWriter : NSObject <MMovieCompressorDelegate>
{
    NSObject<OS_dispatch_queue> * m_movieWritingQueue; // +0x8
    BOOL _forceMPEG4; // +0x10
    BOOL _m_isRecording; // +0x11
    BOOL _videoEncodingIsFinished; // +0x12
    BOOL _m_disableWritingToFile; // +0x13
    BOOL _m_compressAudio; // +0x14
    BOOL _needAudio; // +0x15
    float _maxMovieDuration; // +0x18
    id <SightMovieWriterDelegate> _delegate; // +0x20
    long long _videoOrientation; // +0x28
    NSString * _m_videoPath; // +0x30
    NSString * _m_audioPath; // +0x38
    NSString * _m_moviePath; // +0x40
    AVAssetWriter * _m_writer; // +0x48
    AVAssetWriterInput * _m_videoInput; // +0x50
    unsigned long long _m_videoTimeStamp; // +0x58
    unsigned long long _m_videoFrame; // +0x60
    AVAssetWriterInputPixelBufferAdaptor * _m_PixelBufferInput; // +0x68
    MMovieCompressor * _m_audioCompressor; // +0x70
    double _m_audioBitrate; // +0x78
    long long _m_videoOrientation; // +0x80
    unsigned long long _m_audioTimeStamp; // +0x88
    AQAudioRecorder * _recorder; // +0x90
    CGSize _m_videoSize; // +0x98
    struct _correctVideoDuration; // +0xa8
    struct _m_startTime; // +0xc0
    struct _m_initializeTime; // +0xd8
    struct _m_previousVideoTime; // +0xf0
    CGAffineTransform _m_preferredTransform; // +0x108
}
+ (unsigned long long)millisecondsFromCMTime:(struct)arg1;
- (id)initWithFilePath:(id)arg1 videoOrientation:(long long)arg2 videoSize:(CGSize)arg3 compressAudio:(BOOL)arg4 audioBitrate:(double)arg5;
- (id)initWithFilePath:(id)arg1 videoOrientation:(long long)arg2 videoSize:(CGSize)arg3 compressAudio:(BOOL)arg4 audioBitrate:(double)arg5 codecSettings:(id)arg6;
- (id)initWithFilePath:(id)arg1 videoOrientation:(long long)arg2 videoSize:(CGSize)arg3 compressAudio:(BOOL)arg4 audioBitrate:(double)arg5 codecSettings:(id)arg6 needAudio:(BOOL)arg7;
- (void)initWriterOutputWithCodecSettings:(id)arg1;
- (void)setOutput:(id)arg1;
- (id)getOutput;
- (int)outputType;
- (BOOL)isWriting;
- (void)prepareWriting;
- (void)realWriting;
- (void)startWriting;
- (void)finishWriting;
- (void)cancelWriting;
- (void)appendAudioSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)appendVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)appendVideoPixelBuffer:(id)arg1 frameTime:(struct)arg2;
- (id)recorder;
- (void)startAmr;
- (void)stopAmr;
- (void)cancelAmr;
- (id)makeNewPath:(id)arg1 withSubfix:(id)arg2;
- (void)compressAudio;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned int)arg2;
- (void)tryMergeOutputVideo;
- (void)compressionImplementationDefault:(id)arg1;
- (void)compressionImplementationExportOnce:(id)arg1;
- (void)exportSessionError:(id)arg1;
- (unsigned long long)writerCompressionImplementation;
- (void)compressMovieWithExport:(id)arg1 startTime:(timeval)arg2;
- (void)notifyOutput:(id)arg1;
- (id)writtingQueue;
- (void)setWrittingQueue:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (float)maxMovieDuration;
- (void)setMaxMovieDuration:(float)arg1;
- (struct)correctVideoDuration;
- (void)setCorrectVideoDuration:(struct)arg1;
- (long long)videoOrientation;
- (void)setVideoOrientation:(long long)arg1;
- (BOOL)forceMPEG4;
- (void)setForceMPEG4:(BOOL)arg1;
- (id)m_videoPath;
- (void)setM_videoPath:(id)arg1;
- (id)m_audioPath;
- (void)setM_audioPath:(id)arg1;
- (id)m_moviePath;
- (void)setM_moviePath:(id)arg1;
- (id)m_writer;
- (void)setM_writer:(id)arg1;
- (BOOL)m_isRecording;
- (void)setM_isRecording:(BOOL)arg1;
- (struct)m_startTime;
- (void)setM_startTime:(struct)arg1;
- (struct)m_initializeTime;
- (void)setM_initializeTime:(struct)arg1;
- (BOOL)videoEncodingIsFinished;
- (void)setVideoEncodingIsFinished:(BOOL)arg1;
- (id)m_videoInput;
- (void)setM_videoInput:(id)arg1;
- (struct)m_previousVideoTime;
- (void)setM_previousVideoTime:(struct)arg1;
- (unsigned long long)m_videoTimeStamp;
- (void)setM_videoTimeStamp:(unsigned long long)arg1;
- (unsigned long long)m_videoFrame;
- (void)setM_videoFrame:(unsigned long long)arg1;
- (id)m_PixelBufferInput;
- (void)setM_PixelBufferInput:(id)arg1;
- (id)m_audioCompressor;
- (void)setM_audioCompressor:(id)arg1;
- (double)m_audioBitrate;
- (void)setM_audioBitrate:(double)arg1;
- (CGSize)m_videoSize;
- (void)setM_videoSize:(CGSize)arg1;
- (long long)m_videoOrientation;
- (void)setM_videoOrientation:(long long)arg1;
- (CGAffineTransform)m_preferredTransform;
- (void)setM_preferredTransform:(CGAffineTransform)arg1;
- (unsigned long long)m_audioTimeStamp;
- (void)setM_audioTimeStamp:(unsigned long long)arg1;
- (BOOL)m_disableWritingToFile;
- (void)setM_disableWritingToFile:(BOOL)arg1;
- (BOOL)m_compressAudio;
- (void)setM_compressAudio:(BOOL)arg1;
- (BOOL)needAudio;
- (void)setNeedAudio:(BOOL)arg1;
- (void)setRecorder:(id)arg1;
- (void).cxx_destruct;
@end
