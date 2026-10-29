@interface CRDelay : NSObject
{
    double _seconds; // +0x8
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x10
}
+ (id)delayWithSeconds:(double)arg1;
- (id)initWithDelayInSeconds:(double)arg1;
- (void)cancel;
- (void)start;
- (double)seconds;
- (void)setSeconds:(double)arg1;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (void).cxx_destruct;
@end

