@interface TXCVideoProducerDelegateBridge : NSObject <TXIVideoProducerDelegate, TXCCustomVideoRendererDelegate, TXCCustomVideoProcessDelegate>
{
    void * _producer; // +0x8
    Lock _lock; // +0x10
    weak_ptr<liteav::video::VideoProducer::Client> _client; // +0x50
    shared_ptr<liteav::video::VideoStats> _stats; // +0x60
}
- (id)initWithProducer:(void *)arg1 withClient:(shared_ptr<liteav::video::VideoProducer::Client>)arg2 withStats:(shared_ptr<liteav::video::VideoStats>)arg3;
- (void)setClient:(shared_ptr<liteav::video::VideoProducer::Client>)arg1;
- (shared_ptr<liteav::video::VideoProducer::Client>)client;
- (void)onVideoProducerCaptureFirstFrame:(id)arg1;
- (void)videoProducer:(id)arg1 onCaptureVideoFrame:(id)arg2;
- (void)onVideoProducerCameraStarted:(id)arg1;
- (void)onVideoProducerCameraStateUpdated:(id)arg1 deviceId:(id)arg2 isConnected:(BOOL)arg3;
- (void)onVideoProducerCameraInterrupted:(id)arg1 reason:(long long)arg2;
- (void)onVideoProducerCameraInterruptionEnd:(id)arg1;
- (void)onVideoProducerScreenStarted:(id)arg1;
- (void)onVideoProducerScreenStopped:(id)arg1 isManual:(BOOL)arg2;
- (void)onVideoProducerScreenPaused:(id)arg1 isManual:(BOOL)arg2;
- (void)onVideoProducerScreenResumed:(id)arg1 isManual:(BOOL)arg2;
- (void)videoProducer:(id)arg1 onRenderVideoFrame:(id)arg2 isFirst:(BOOL)arg3;
- (void)onCustomRenderVideoFrame:(id)arg1;
- (void)videoProducer:(id)arg1 onNotifyPreprocessCost:(unsigned long long)arg2;
- (void)videoProducer:(id)arg1 onEncodeVideoFrame:(id)arg2 forStreamType:(int)arg3;
- (void)videoProducer:(id)arg1 onEncoderTypeChanged:(int)arg2 onCodecTypeChanged:(int)arg3 forStreamType:(int)arg4;
- (void)videoProducer:(id)arg1 onEncodeParamsChanged:(const void *)arg2 forStreamType:(int)arg3;
- (void)videoProducer:(id)arg1 onError:(id)arg2;
- (void)onCustomProcessVideoFrame:(id)arg1 dst:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

