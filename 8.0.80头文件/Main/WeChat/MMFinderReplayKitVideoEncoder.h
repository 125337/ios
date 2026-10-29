@interface MMFinderReplayKitVideoEncoder : NSObject
{
    OpaqueVTCompressionSession * _session; // +0x8
    EncodeParamsTypeHeader _param; // +0x10
    unsigned long long _frameIndex; // +0x28
    OpaqueVTPixelRotationSession * _rotation_session_; // +0x30
    unsigned long long _bitrate_health_degree_timestamp; // +0x38
    unsigned long long _bitrate_health_check_interval; // +0x40
    float _bitrate_health_degree; // +0x48
    float _bitrate_health_lower_limit; // +0x4c
    float _bitrate_health_upper_limit; // +0x50
    unsigned int _encoded_data_length_bytes; // +0x54
    BOOL _should_restart; // +0x58
    long long _rc_limit; // +0x60
    BOOL _isLandscape; // +0x68
    id <MMFinderReplayKitVideoEncoderDelegate> _delegate; // +0x70
    NSObject<OS_dispatch_queue> * _queue; // +0x78
    CIContext * _rotateContext; // +0x80
}
- (id)initWithDelegate:(id)arg1;
- (BOOL)updateLandscape:(BOOL)arg1;
- (void)sendVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 pts:(struct)arg2 needsIFrame:(BOOL)arg3 isLandscape:(BOOL)arg4 orientation:(long long)arg5 rcLimit:(long long)arg6;
- (void)stop;
- (void)updateParams:(EncodeParamsTypeHeader)arg1;
- (void)updateEncodeSize;
- (void)forceRestartEncoder;
- (int)configEncoder;
- (void)onCodecFinished:(void *)arg1 status:(int)arg2 infoFlags:(unsigned int)arg3 sampleBufferRef:(opaqueCMSampleBuffer *)arg4;
- (__CVBuffer *)newRotateCVPixelBuffer:(__CVBuffer *)arg1 orientation:(long long)arg2;
- (__CVBuffer *)newRotateCVPixelBuffer:(__CVBuffer *)arg1 rotation:(int)arg2;
- (BOOL)RotateCVPixelBufferIOS16:(__CVBuffer *)arg1 destination:(__CVBuffer *)arg2 rotation:(int)arg3;
- (id)rotateContext;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setRotateContext:(id)arg1;
- (void).cxx_destruct;
@end
