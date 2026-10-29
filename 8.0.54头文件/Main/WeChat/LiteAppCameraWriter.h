@interface LiteAppCameraWriter : GPUImageMovieWriter <GPUImageMovieWriterDelegate, AudioRecorderDelegate>
{
    NSObject<OS_dispatch_queue> * m_movieWritingQueue; // +0x70
    GPUImageFramebuffer * inputFramebufferForDisplay; // +0x78
    BOOL _forceMPEG4; // +0x80
    BOOL _m_compressAudio; // +0x81
    BOOL _muteAudio; // +0x82
    BOOL _m_isRecording; // +0x83
    BOOL _m_isLowPerformance; // +0x84
    BOOL _m_disableWritingToFile; // +0x85
    float _maxMovieDuration; // +0x88
    long long _videoOrientation; // +0x90
    NSURL * _outputURL; // +0x98
    id <LiteAppCameraWriterDelegate> _writerDelegate; // +0xa0
    NSString * _m_videoPath; // +0xa8
    NSString * _m_audioPath; // +0xb0
    NSString * _m_moviePath; // +0xb8
    AVAssetWriterInput * _m_videoInput; // +0xc0
    unsigned long long _m_videoTimeStamp; // +0xc8
    unsigned long long _m_videoFrame; // +0xd0
    AVAssetWriterInputPixelBufferAdaptor * _m_PixelBufferInput; // +0xd8
    double _m_audioBitrate; // +0xe0
    long long _m_videoOrientation; // +0xe8
    unsigned long long _m_audioTimeStamp; // +0xf0
    unsigned long long _m_recordTimeStamp; // +0xf8
    AQAudioRecorder * _recorder; // +0x100
    CGSize _m_videoSize; // +0x108
    struct _correctVideoDuration; // +0x118
    struct _m_startTime; // +0x130
    struct _m_initializeTime; // +0x148
    struct _m_previousVideoTime; // +0x160
    CGAffineTransform _m_preferredTransform; // +0x178
}
- (id)initWithMovieURL:(id)arg1 size:(CGSize)arg2;
- (id)initWithMovieURL:(id)arg1 size:(CGSize)arg2 fileType:(id)arg3 outputSettings:(id)arg4;
- (void)setupWriterWithPath:(id)arg1;
- (void)movieRecordingFirstFrameTime:(id)arg1;
- (void)setOutput:(id)arg1;
- (id)getOutput;
- (int)outputType;
- (BOOL)isWriting;
- (id)makeNewPath:(id)arg1 withSubfix:(id)arg2;
- (void)compressMovieWithExport:(id)arg1;
- (void)notifyOutput:(id)arg1;
- (void)tryMergeOutputVideo;
- (id)recorder;
- (void)startAmr;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)stopAmr;
- (void)cancelAmr;
- (void)startRecording;
- (void)startRecordingInOrientation:(CGAffineTransform)arg1;
- (void)finishRecording;
- (void)cancelRecording;
- (void)finishRecordingWithCompletionHandler:(id /* block */)arg1;
- (id)writtingQueue;
- (void)setWrittingQueue:(id)arg1;
- (float)maxMovieDuration;
- (void)setMaxMovieDuration:(float)arg1;
- (struct)correctVideoDuration;
- (void)setCorrectVideoDuration:(struct)arg1;
- (long long)videoOrientation;
- (void)setVideoOrientation:(long long)arg1;
- (BOOL)forceMPEG4;
- (void)setForceMPEG4:(BOOL)arg1;
- (id)outputURL;
- (void)setOutputURL:(id)arg1;
- (id)writerDelegate;
- (void)setWriterDelegate:(id)arg1;
- (BOOL)m_compressAudio;
- (void)setM_compressAudio:(BOOL)arg1;
- (BOOL)muteAudio;
- (void)setMuteAudio:(BOOL)arg1;
- (id)m_videoPath;
- (void)setM_videoPath:(id)arg1;
- (id)m_audioPath;
- (void)setM_audioPath:(id)arg1;
- (id)m_moviePath;
- (void)setM_moviePath:(id)arg1;
- (BOOL)m_isRecording;
- (void)setM_isRecording:(BOOL)arg1;
- (struct)m_startTime;
- (void)setM_startTime:(struct)arg1;
- (struct)m_initializeTime;
- (void)setM_initializeTime:(struct)arg1;
- (BOOL)m_isLowPerformance;
- (void)setM_isLowPerformance:(BOOL)arg1;
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
- (unsigned long long)m_recordTimeStamp;
- (void)setM_recordTimeStamp:(unsigned long long)arg1;
- (void)setRecorder:(id)arg1;
- (void).cxx_destruct;
@end

