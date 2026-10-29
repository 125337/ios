@interface TXCVideoConsumerDelegateBridge : NSObject <TXIVideoConsumerDelegate, TXCCustomVideoRendererDelegate>
{
    void * _consumer; // +0x8
    weak_ptr<liteav::video::VideoConsumer::Client> _client; // +0x10
    void * _stats; // +0x20
    NSObject<OS_dispatch_source> * _monitorTimer; // +0x28
    NSObject<OS_dispatch_queue> * _monitorQueue; // +0x30
    CGSize _resolution; // +0x38
}
- (id)initWithConsumer:(void *)arg1 withClient:(shared_ptr<liteav::video::VideoConsumer::Client>)arg2 withStats:(void *)arg3;
- (void)dealloc;
- (void)clearState;
- (void)videoConsumer:(id)arg1 onDecodeVideoFrame:(id)arg2 cacheCount:(long long)arg3 isFirst:(BOOL)arg4;
- (void)videoConsumer:(id)arg1 onDecoderTypeChanged:(DecoderProperty)arg2;
- (void)videoConsumer:(id)arg1 onRenderVideoFrame:(id)arg2 isFirst:(BOOL)arg3;
- (void)videoConsumer:(id)arg1 onRenderFirstFrameInView:(id)arg2;
- (void)videoConsumer:(id)arg1 onAppBecomeInactive:(BOOL)arg2;
- (void)videoConsumer:(id)arg1 onError:(id)arg2;
- (void)onCustomRenderVideoFrame:(id)arg1;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (id)monitorTimer;
- (void)setMonitorTimer:(id)arg1;
- (id)monitorQueue;
- (void)setMonitorQueue:(id)arg1;
- (CGSize)resolution;
- (void)setResolution:(CGSize)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

