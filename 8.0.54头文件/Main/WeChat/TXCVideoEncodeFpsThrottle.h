@interface TXCVideoEncodeFpsThrottle : TXCVideoReportBase <TXCTimedOutputDelegate>
{
    BOOL _isRpsIdrMode; // +0x8
    TXCDispatchQueue * _queue; // +0x10
    TXCTimedOutput * _sender; // +0x18
    id /* block */ _complete; // +0x20
    long long _rpsIdrFramerate; // +0x28
    long long _framerate; // +0x30
}
- (id)initWithQueue:(id)arg1 withFps:(long long)arg2;
- (void)start;
- (void)stop;
- (void)setFrameRate:(long long)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)timedOutput:(id)arg1 outputObject:(id)arg2;
- (void)reset;
- (void)setIsRpsIdrMode:(BOOL)arg1 framerate:(long long)arg2;
- (void)updateSenderInterval:(long long)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)sender;
- (void)setSender:(id)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (BOOL)isRpsIdrMode;
- (void)setIsRpsIdrMode:(BOOL)arg1;
- (long long)rpsIdrFramerate;
- (void)setRpsIdrFramerate:(long long)arg1;
- (long long)framerate;
- (void)setFramerate:(long long)arg1;
- (void).cxx_destruct;
@end

