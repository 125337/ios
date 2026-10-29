@interface WeDropReceiveStatusMachine : WeDropStatusMachine
{
    WeDropReceiveEventSharedData * _sharedData; // +0x8
    id <WeDropReceiveModuleViewProvider> _moduleViewProvider; // +0x10
    id <WeDropReceiveFullscreenViewProvider> _fullscreenViewProvider; // +0x18
    id <WeDropReceiveViewFullscreenLifeCycleHelper> _fullscreenViewLifeCycleHelper; // +0x20
    id <WeDropReceiveViewModuleLifeCycleHelper> _moduleViewLifeCycleHelper; // +0x28
}
+ (id)machine;
- (id)initWithDefaultEvent:(id)arg1;
- (BOOL)tryEnterStatus:(unsigned long long)arg1;
- (id)sharedData;
- (void)setSharedData:(id)arg1;
- (id)moduleViewProvider;
- (void)setModuleViewProvider:(id)arg1;
- (id)fullscreenViewProvider;
- (void)setFullscreenViewProvider:(id)arg1;
- (id)fullscreenViewLifeCycleHelper;
- (void)setFullscreenViewLifeCycleHelper:(id)arg1;
- (id)moduleViewLifeCycleHelper;
- (void)setModuleViewLifeCycleHelper:(id)arg1;
- (void).cxx_destruct;
@end
