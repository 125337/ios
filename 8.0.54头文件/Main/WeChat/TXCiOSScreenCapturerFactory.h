@interface TXCiOSScreenCapturerFactory : NSObject <TXICapturerFactoryInterface>
{
    TXCAppScreenCapturer * _appCapturer; // +0x8
    TXCIOSScreenCapturer * _screenCapturer; // +0x10
    TXCDispatchQueue * _queue; // +0x18
    TXCDispatchQueue * _outputQueue; // +0x20
    _opaque_pthread_mutex_t _lock; // +0x28
}
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;
- (id)appCapturer;
- (id)screenCapturer;
- (void)dealloc;
- (id)capturerOfType:(unsigned long long)arg1 identifier:(id)arg2;
- (void)setAppCapturer:(id)arg1;
- (void)setScreenCapturer:(id)arg1;
- (_opaque_pthread_mutex_t)lock;
- (void)setLock:(_opaque_pthread_mutex_t)arg1;
- (id)queue;
- (id)outputQueue;
- (void).cxx_destruct;
@end

