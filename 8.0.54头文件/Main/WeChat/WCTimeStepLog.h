@interface WCTimeStepLog : NSObject
{
    double _begin; // +0x8
    NSString * _prefix; // +0x10
}
- (id)initWithPrefix:(id)arg1;
- (double)showTimeStep:(id)arg1;
- (double)begin;
- (void)setBegin:(double)arg1;
- (id)prefix;
- (void)setPrefix:(id)arg1;
- (void).cxx_destruct;
@end

