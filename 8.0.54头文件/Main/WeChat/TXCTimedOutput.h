@interface TXCTimedOutput : NSObject
{
    BOOL _keepsLastObject; // +0x8
    BOOL _isLastObjectOutput; // +0x9
    double _interval; // +0x10
    NSMutableArray * _buffer; // +0x18
    id <TXCTimedOutputDelegate> _delegate; // +0x20
    TXCDispatchQueue * _queue; // +0x28
    long long _cacheSize; // +0x30
    NSObject<OS_dispatch_source> * _timer; // +0x38
}
- (id)initWithDelegate:(id)arg1 inQueue:(id)arg2 interval:(double)arg3 cacheSize:(long long)arg4 keepsLastObject:(BOOL)arg5;
- (void)start;
- (void)stop;
- (void)setInterval:(double)arg1;
- (void)pushObject:(id)arg1;
- (void)outputObject;
- (double)interval;
- (id)buffer;
- (id)delegate;
- (id)queue;
- (long long)cacheSize;
- (BOOL)keepsLastObject;
- (BOOL)isLastObjectOutput;
- (void)setIsLastObjectOutput:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

