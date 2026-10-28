@interface TAVSourceExportSession : NSObject
{
    BOOL _keepsProcessInBackground; // +0x8
    BOOL _suspended; // +0x9
    BOOL _isReaderReady; // +0xa
    BOOL _canceled; // +0xb
    BOOL _pause; // +0xc
    BOOL _videoCompleted; // +0xd
    BOOL _audioCompleted; // +0xe
    float _progress; // +0x10
    AVAsset * _asset; // +0x18
    AVVideoComposition * _videoComposition; // +0x20
    AVAudioMix * _audioMix; // +0x28
    TAVSourceExportConfiguration * _exportConfiguration; // +0x30
    TAVSourceExportVideoConfiguration * _videoConfiguration; // +0x38
    TAVSourceExportAudioConfiguration * _audioConfiguration; // +0x40
    id <TAVSourceSoftEncoderFactory> _encoderFactory; // +0x48
    id /* block */ _progressHandler; // +0x50
    id /* block */ _completionHandler; // +0x58
    long long _status; // +0x60
    NSError * _error; // +0x68
    TAVSourceExportReader * _reader; // +0x70
    AVAssetReaderVideoCompositionOutput * _videoOutput; // +0x78
    AVAssetReaderAudioMixOutput * _audioOutput; // +0x80
    AVAssetWriter * _writer; // +0x88
    AVAssetWriterInput * _videoInput; // +0x90
    AVAssetWriterInputPixelBufferAdaptor * _videoPixelBufferAdaptor; // +0x98
    AVAssetWriterInput * _audioInput; // +0xa0
    NSObject<OS_dispatch_queue> * _inputQueue; // +0xa8
    double _duration; // +0xb0
    NSCondition * _pauseCondition; // +0xb8
    TAVImageProcessor * _processor; // +0xc0
    TAVExportReportData * _exportReportData; // +0xc8
    double _exportStartTime; // +0xd0
    long long _backgroundCount; // +0xd8
    struct _lastVideoTime; // +0xe0
    struct _lastAudioTime; // +0xf8
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
- (BOOL)processSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (BOOL)encodeReadySamplesFromOutput:(id)arg1 toInput:(id)arg2;
- (void)updateProgressForFrameTime:(struct)arg1;
- (void)finishWithError:(id)arg1;
- (void)finishWithCancelled;
- (void)finishWithSuccess;
- (void)finish;
- (void)reset;
- (BOOL)setupReaderWriterWithError:(id *)arg1;
- (BOOL)imageProcessorSetup;
- (id)currentVideoComposition;
- (id)buildDefaultVideoComposition;
- (BOOL)setupVideoInputWithError:(id *)arg1;
- (BOOL)setupAudioInputWithError:(id *)arg1;
- (void)setupNotification;
- (void)removeNotification;
- (void)applicationWillResignActiveNotification;
- (void)applicationDidBecomeActiveNotification;
- (struct)getReaderRestartTime;
- (unsigned long long)audioWriteStatusWithSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (opaqueCMSampleBuffer *)reconstructHalfWrittenAudioSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)handleErrorReportWithError:(id)arg1;
- (void)handleSuccessReport;
- (id)getExportFailStatusInfo;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)audioMix;
- (void)setAudioMix:(id)arg1;
- (id)exportConfiguration;
- (void)setExportConfiguration:(id)arg1;
- (id)videoConfiguration;
- (void)setVideoConfiguration:(id)arg1;
- (id)audioConfiguration;
- (void)setAudioConfiguration:(id)arg1;
- (id)encoderFactory;
- (void)setEncoderFactory:(id)arg1;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (BOOL)keepsProcessInBackground;
- (void)setKeepsProcessInBackground:(BOOL)arg1;
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
- (BOOL)audioCompleted;
- (void)setAudioCompleted:(BOOL)arg1;
- (id)processor;
- (void)setProcessor:(id)arg1;
- (id)exportReportData;
- (void)setExportReportData:(id)arg1;
- (double)exportStartTime;
- (void)setExportStartTime:(double)arg1;
- (long long)backgroundCount;
- (void)setBackgroundCount:(long long)arg1;
- (void).cxx_destruct;
@end
