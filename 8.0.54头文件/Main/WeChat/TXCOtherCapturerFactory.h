@interface TXCOtherCapturerFactory : NSObject <TXICapturerFactoryInterface>
{
    TXCDispatchQueue * _queue; // +0x8
    TXCDispatchQueue * _outputQueue; // +0x10
}
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;
- (id)capturerOfType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)queue;
- (id)outputQueue;
- (void).cxx_destruct;
@end

