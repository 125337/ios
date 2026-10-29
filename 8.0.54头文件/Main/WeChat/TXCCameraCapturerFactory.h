@interface TXCCameraCapturerFactory : NSObject <TXICapturerFactoryInterface>
{
    NSMutableDictionary * _capturers; // +0x8
    TXCDispatchQueue * _queue; // +0x10
    TXCDispatchQueue * _outputQueue; // +0x18
    _opaque_pthread_mutex_t _lock; // +0x20
}
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;
- (void)dealloc;
- (id)capturerOfType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)capturerWithIdentifier:(id)arg1;
- (id)createCapturerWithIdentifier:(id)arg1;
- (id)capturers;
- (_opaque_pthread_mutex_t)lock;
- (void)setLock:(_opaque_pthread_mutex_t)arg1;
- (id)queue;
- (id)outputQueue;
- (void).cxx_destruct;
@end

