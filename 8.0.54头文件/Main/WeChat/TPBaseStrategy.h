@interface TPBaseStrategy : NSObject <ITPStrategy>
{
    TPStrategyConfig * _config; // +0x8
    NSArray * _contextList; // +0x10
}
+ (id)strategyWithConfig:(id)arg1;
- (id)init;
- (BOOL)shouldRetry;
- (id)lastContext;
- (long long)playerTypeForOpen:(id)arg1;
- (long long)playerTypeForRetry:(id)arg1;
- (void)addStrategyContext:(id)arg1;
- (id)defultPlayerTypeList;
- (BOOL)isPlayerTypeValidForCurrentPlayerScene;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)contextList;
- (void)setContextList:(id)arg1;
- (void).cxx_destruct;
@end

