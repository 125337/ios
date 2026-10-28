@interface TAVSourceSoftEncExportSession : TAVSourceExportSession
{
    char * mCameraBuf; // +0x8
    vector<long long, std::allocator<long long>> pts; // +0x10
    vector<long long, std::allocator<long long>> dts; // +0x28
    BOOL _suspended; // +0x40
    BOOL _isReaderReady; // +0x41
    BOOL _canceled; // +0x42
    BOOL _pause; // +0x43
    BOOL _videoCompleted; // +0x44
    BOOL _videoSoftEncodeError; // +0x45
    BOOL _audioCompleted; // +0x46
    float _progress; // +0x48
    float _encPts; // +0x4c
    float _frameTimeInterval; // +0x50
    NSError * _error; // +0x58
    TAVSourceExportReader * _reader; // +0x60
    AVAssetReaderVideoCompositionOutput * _videoOutput; // +0x68
    AVAssetReaderAudioMixOutput * _audioOutput; // +0x70
    AVAssetWriter * _writer; // +0x78
    AVAssetWriterInput * _videoInput; // +0x80
    AVAssetWriterInputPixelBufferAdaptor * _videoPixelBufferAdaptor; // +0x88
    AVAssetWriterInput * _audioInput; // +0x90
    NSObject<OS_dispatch_queue> * _inputQueue; // +0x98
    double _duration; // +0xa0
    NSCondition * _pauseCondition; // +0xa8
    NSURL * _outputAudioTempURL; // +0xb0
    NSURL * _outputVideoTempURL; // +0xb8
    TAVSourceSoftEncoder * _mH265Encoder; // +0xc0
    __CVBuffer * _resamplingBuffer; // +0xc8
    TAVExportReportData * _exportReportData; // +0xd0
    double _exportStartTime; // +0xd8
    long long _backgroundCount; // +0xe0
    TAVImageProcessor * _processor; // +0xe8
    struct _lastVideoTime; // +0xf0
    struct _lastAudioTime; // +0x108
}
- (id)init;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)videoSettings;
- (id)audioSettings;
- (void)startExport;
- (void)pauseExporting;
- (void)continueExporting;
- (void)cancelExport;
- (void)startReadingAndWriting;
- (void)reStartVideoWriting;
- (BOOL)encodeReadySamplesFromOutput:(id)arg1 toInput:(id)arg2;
- (vImage_Buffer)PixelBuffer_GetImageBufferOfPlane:(__CVBuffer *)arg1 planeIndex:(unsigned long long)arg2;
- (__CVBuffer *)Scale_PixelBufferNV12:(__CVBuffer *)arg1 scaleWidth:(int)arg2 scaleHeight:(int)arg3;
- (BOOL)processSampleBufferToYUV420:(opaqueCMSampleBuffer *)arg1;
- (BOOL)softVideoEncodeControl;
- (void)softEncodeReadyOneSamplesFromOutput:(id /* block */)arg1;
- (BOOL)softEncodeReadySamplesFromOutput;
- (void)updateProgressForFrameTime:(struct)arg1;
- (void)finishWithError:(id)arg1;
- (void)finishWithCancelled;
- (void)finishWithSuccess;
- (void)finish;
- (void)reset;
- (BOOL)setupReaderWriterWithError:(id *)arg1;
- (BOOL)imageProcessorSetup;
- (BOOL)softHEVCEncodingSetup;
- (id)currentVideoComposition;
- (id)buildDefaultVideoComposition;
- (BOOL)setupAudioInputWithError:(id *)arg1;
- (void)setupNotification;
- (void)removeNotification;
- (void)applicationWillResignActiveNotification;
- (void)applicationDidBecomeActiveNotification;
- (struct)getReaderRestartTime:(BOOL)arg1;
- (unsigned long long)audioWriteStatusWithSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (opaqueCMSampleBuffer *)reconstructHalfWrittenAudioSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)handleErrorReportWithError:(id)arg1;
- (void)handleSuccessReport;
- (id)getExportFailStatusInfo;
- (id)error;
- (void)setError:(id)arg1;
- (float)progress;
- (void)setProgress:(float)arg1;
- (id)reader;
- (void)setReader:(id)arg1;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg1;
- (id)audioOutput;
- (void)setAudioOutput:(id)arg1;
- (id)writer;
- (void)setWriter:(id)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (id)videoPixelBufferAdaptor;
- (void)setVideoPixelBufferAdaptor:(id)arg1;
- (id)audioInput;
- (void)setAudioInput:(id)arg1;
- (id)inputQueue;
- (void)setInputQueue:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (float)encPts;
- (void)setEncPts:(float)arg1;
- (float)frameTimeInterval;
- (void)setFrameTimeInterval:(float)arg1;
- (struct)lastVideoTime;
- (void)setLastVideoTime:(struct)arg1;
- (struct)lastAudioTime;
- (void)setLastAudioTime:(struct)arg1;
- (BOOL)suspended;
- (void)setSuspended:(BOOL)arg1;
- (BOOL)isReaderReady;
- (void)setIsReaderReady:(BOOL)arg1;
- (BOOL)isCanceled;
- (void)setCanceled:(BOOL)arg1;
- (BOOL)isPause;
- (void)setPause:(BOOL)arg1;
- (id)pauseCondition;
- (void)setPauseCondition:(id)arg1;
- (BOOL)videoCompleted;
- (void)setVideoCompleted:(BOOL)arg1;
- (BOOL)videoSoftEncodeError;
- (void)setVideoSoftEncodeError:(BOOL)arg1;
- (BOOL)audioCompleted;
- (void)setAudioCompleted:(BOOL)arg1;
- (id)outputAudioTempURL;
- (void)setOutputAudioTempURL:(id)arg1;
- (id)outputVideoTempURL;
- (void)setOutputVideoTempURL:(id)arg1;
- (TAVSourceSoftEncoder *)mH265Encoder;
- (void)setMH265Encoder:(TAVSourceSoftEncoder *)arg1;
- (__CVBuffer *)resamplingBuffer;
- (void)setResamplingBuffer:(__CVBuffer *)arg1;
- (id)exportReportData;
- (void)setExportReportData:(id)arg1;
- (double)exportStartTime;
- (void)setExportStartTime:(double)arg1;
- (long long)backgroundCount;
- (void)setBackgroundCount:(long long)arg1;
- (id)processor;
- (void)setProcessor:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
