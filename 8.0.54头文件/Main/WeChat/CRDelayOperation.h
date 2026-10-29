@interface CRDelayOperation : NSBlockOperation
{
    CRDelay * _delay; // +0x8
}
+ (id)operationWithDelay:(id)arg1;
+ (id)operationWithDelayInSeconds:(double)arg1;
- (id)initWithDelay:(id)arg1;
- (void)cancel;
- (double)seconds;
- (id)delay;
- (void)setDelay:(id)arg1;
- (void).cxx_destruct;
@end

