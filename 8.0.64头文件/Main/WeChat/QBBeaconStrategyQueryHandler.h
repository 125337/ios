@interface QBBeaconStrategyQueryHandler : NSObject
{
    int _retryTime; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)checkStrategyQuery:(double)arg1;
- (void)startStrategyQuery;
- (void)failQuery:(id)arg1;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (BOOL)processCommonStrategy:(id)arg1;
- (BOOL)processStrategy:(id)arg1;
- (int)retryTime;
- (void)setRetryTime:(int)arg1;
@end
