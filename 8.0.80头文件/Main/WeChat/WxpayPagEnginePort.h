@interface WxpayPagEnginePort : NSObject
{
    shared_ptr<wxpay_luggage::PagPlaybackBridge> _bridge; // +0x8
    NSObject<OS_dispatch_queue> * _worker; // +0x18
    NSOperationQueue * _resources; // +0x20
    NSMutableDictionary * _objects; // +0x28
    NSMutableDictionary * _files; // +0x30
    NSMutableSet * _cancelled; // +0x38
    NSMutableSet * _activeRequests; // +0x40
    NSMutableDictionary * _deferredGpuRequests; // +0x48
    NSMutableOrderedSet * _deferredReleases; // +0x50
    WxpayPagEnginePort * _closeKeepAlive; // +0x58
    NSMutableSet * _ticks; // +0x60
    NSString * _prefix; // +0x68
    unsigned long long _nextObject; // +0x70
    atomic<bool> _closed; // +0x78
    mutex _gpuLifecycleMutex; // +0x80
    BOOL _appActive; // +0xc0
}
- (id)initWithRuntime:(shared_ptr<wxpay_luggage::SelfRenderRuntime>)arg1 wake:(id /* block */)arg2;
- (BOOL)dispatchScene:(SceneKey)arg1 payload:(id)arg2 pixelRatio:(double)arg3;
- (void)cancelScene:(SceneKey)arg1;
- (void)presented:(const PagFramePresentationAck *)arg1;
- (void)setAppActive:(BOOL)arg1;
- (void)onApplicationForeground:(id)arg1;
- (void)onApplicationBackground:(id)arg1;
- (void)dealloc;
- (void)run:(unsigned long long)arg1 timestamp:(long long)arg2;
- (void)onVSync:(long long)arg1;
- (BOOL)isCancelled:(unsigned long long)arg1;
- (void)cancelRequest:(unsigned long long)arg1;
- (void)endRequest:(unsigned long long)arg1;
- (void)releaseObject:(id)arg1;
- (void)finishCloseIfPossible;
- (id)materialize:(id)arg1 request:(unsigned long long)arg2 owned:(BOOL *)arg3;
- (void)request:(unsigned long long)arg1 json:(id)arg2;
- (void)close;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
