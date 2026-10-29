@interface TXCHardwareVideoEncoder : TXCVideoBindableObject <TXIVideoEncoderInterface>
{
    BOOL _enable_restart_encoder_when_bitrate_not_health; // +0x8
    BOOL _should_restart_after_bitrate_changed; // +0x9
    unsigned int _bitrate_anchor; // +0xc
    unsigned int _bitrate_health_degree_timestamp; // +0x10
    unsigned int _bitrate_health_check_interval; // +0x14
    float _bitrate_health_degree; // +0x18
    float _bitrate_health_lower_limit; // +0x1c
    float _bitrate_health_upper_limit; // +0x20
    unsigned int _encoded_data_length_bytes; // +0x24
    BOOL _enablesHevc; // +0x28
    BOOL _nextKeyFrame; // +0x29
    BOOL _needsRestartEncoder; // +0x2a
    TXCVideoEncoderSupervisor * supervisor; // +0x30
    TXCDispatchQueue * _queue; // +0x38
    TXCVideoEncodeConfig * _config; // +0x40
    OpaqueVTCompressionSession * _session; // +0x48
    long long _frameIndex; // +0x50
    TXCRetrier * _recreateRetrier; // +0x58
    double _lastIDRTime; // +0x60
    const __CFString * _currentYCbCrMatrixKey; // +0x68
    TXCDroppableDispatcher * _dispatcher; // +0x70
    long long _lastPts; // +0x78
    id /* block */ _stuckChecker; // +0x80
    long long _droppedFrameCount; // +0x88
    unsigned long long _frameDurationFlag; // +0x90
}
+ (void)releaseSession:(OpaqueVTCompressionSession *)arg1;
- (id)initWithQueue:(id)arg1 enablesHevc:(BOOL)arg2 config:(id)arg3;
- (void)dealloc;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)setBitrate:(long long)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)enableTranscodingMode:(BOOL)arg1;
- (unsigned long long)features;
- (void)configEnableRestartStrategy;
- (void)configRealTime;
- (void)configMaxFrameDelay;
- (void)configOpenGop;
- (BOOL)createEncoder;
- (void)configVUIColorInfoIfNeed:(__CVBuffer *)arg1;
- (void)encodePixelBuffer:(__CVBuffer *)arg1 timestamp:(unsigned long long)arg2 onComplete:(id /* block */)arg3;
- (void)updateFrameRate:(long long)arg1;
- (void)updateBitrate:(long long)arg1;
- (void)requestKeyFrame;
- (void)notifyError:(id)arg1 withComplete:(id /* block */)arg2;
- (BOOL)recreateEncodeOnPtsWrapAround:(long long)arg1;
- (__CFString *)profileLevel;
- (unsigned int)codecType;
- (BOOL)shouldDisableDataRateLimits;
- (void)onCodecFinished:(int)arg1 infoFlags:(unsigned int)arg2 sampleBufferRef:(opaqueCMSampleBuffer *)arg3 startTime:(id)arg4 complete:(id /* block */)arg5;
- (id)videoFrameFrom:(opaqueCMSampleBuffer *)arg1;
- (id)supervisor;
- (void)setSupervisor:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (OpaqueVTCompressionSession *)session;
- (void)setSession:(OpaqueVTCompressionSession *)arg1;
- (long long)frameIndex;
- (void)setFrameIndex:(long long)arg1;
- (id)recreateRetrier;
- (void)setRecreateRetrier:(id)arg1;
- (BOOL)enablesHevc;
- (BOOL)nextKeyFrame;
- (void)setNextKeyFrame:(BOOL)arg1;
- (double)lastIDRTime;
- (void)setLastIDRTime:(double)arg1;
- (BOOL)needsRestartEncoder;
- (void)setNeedsRestartEncoder:(BOOL)arg1;
- (__CFString *)currentYCbCrMatrixKey;
- (void)setCurrentYCbCrMatrixKey:(__CFString *)arg1;
- (id)dispatcher;
- (void)setDispatcher:(id)arg1;
- (long long)lastPts;
- (void)setLastPts:(long long)arg1;
- (id /* block */)stuckChecker;
- (void)setStuckChecker:(id /* block */)arg1;
- (long long)droppedFrameCount;
- (void)setDroppedFrameCount:(long long)arg1;
- (unsigned long long)frameDurationFlag;
- (void)setFrameDurationFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

