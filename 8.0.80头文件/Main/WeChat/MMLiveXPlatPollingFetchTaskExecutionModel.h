@interface MMLiveXPlatPollingFetchTaskExecutionModel : NSObject <LiveURLivePollingTaskExecuteModel>
{
    MMLivePollingFetchTaskExecuteModel * _model; // +0x8
    id /* block */ _fallbackRequestModelFactory; // +0x10
}
- (id)initWithExecutionModel:(id)arg1 fallbackRequestModelFactory:(id /* block */)arg2;
- (unsigned long long)commandId;
- (BOOL)force;
- (id)requestBuffer;
- (id)model;
- (void)setModel:(id)arg1;
- (id /* block */)fallbackRequestModelFactory;
- (void)setFallbackRequestModelFactory:(id /* block */)arg1;
- (void).cxx_destruct;
@end
