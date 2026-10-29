@interface TXCVideoEncodeController : TXCVideoBindableSerialGroup <TXCVideoEncoderSupervisorDelegate>
{
    shared_ptr<liteav::video::TXCVideoRpsFramerateCallback> _rpsFramerateCallback; // +0x8
    TXCVideoEncodeConfig * _config; // +0x18
    id <TXIVideoEncoderInterface> _encoder; // +0x20
    TXCVideoResolutionConstraint * _resolutionFilter; // +0x28
    TXCDispatchQueue * _queue; // +0x30
    TXCVideoEncodeFpsThrottle * _fpsThrottle; // +0x38
    TXCVideoEncoderSupervisor * _supervisor; // +0x40
    id <TXCVideoEncodeControllerDelegate> _delegate; // +0x48
    TXCVideoEncodeReport * _report; // +0x50
    double _lastRequestKeyFrameTime; // +0x58
}
+ (BOOL)supportsSoftwareEncode;
+ (BOOL)supportsHardwareHevcEncode;
- (id)initWithQueue:(id)arg1 streamType:(int)arg2 delegate:(id)arg3;
- (void)start;
- (void)stop;
- (void)setEncodeParams:(const void *)arg1;
- (void)setEncodeStrategy:(int)arg1;
- (void)setEncodeUsage:(int)arg1;
- (id)rpsEncoder;
- (void)enablesHevc:(BOOL)arg1;
- (void)setRpsIDRFramerate:(long long)arg1 IsRpsIDR:(BOOL)arg2;
- (void)enableRoiEncoding:(BOOL)arg1;
- (void)applyConfig:(const void *)arg1;
- (BOOL)shouldResetEncoderWhenUpdateGopFrameIndex:(const void *)arg1;
- (void)updateSupervisor:(const void *)arg1;
- (void)createEncoder;
- (void)updateEncoder;
- (void)setupStreamLine;
- (void)notifyInputFormat;
- (void)supervisor:(id)arg1 onChangeToHardware:(BOOL)arg2 hevc:(BOOL)arg3;
- (id)config;
- (id)encoder;
- (void)setEncoder:(id)arg1;
- (id)resolutionFilter;
- (id)queue;
- (id)fpsThrottle;
- (id)supervisor;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)report;
- (double)lastRequestKeyFrameTime;
- (void)setLastRequestKeyFrameTime:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

