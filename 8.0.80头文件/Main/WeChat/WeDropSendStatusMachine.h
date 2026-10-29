@interface WeDropSendStatusMachine : WeDropStatusMachine
{
    WeDropSendEventSharedData * _sharedData; // +0x8
    id <WeDropSendViewProvider> _viewProvider; // +0x10
    id <WeDropSendViewLifeCycleHelper> _viewLifeCycleHelper; // +0x18
}
+ (id)machine;
- (id)initWithDefaultEvent:(id)arg1;
- (BOOL)tryEnterStatus:(unsigned long long)arg1;
- (id)sharedData;
- (void)setSharedData:(id)arg1;
- (id)viewProvider;
- (void)setViewProvider:(id)arg1;
- (id)viewLifeCycleHelper;
- (void)setViewLifeCycleHelper:(id)arg1;
- (void).cxx_destruct;
@end
