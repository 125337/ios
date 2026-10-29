@interface WeDropReceiveEvent : WeDropEvent
{
    BOOL _isActive; // +0x8
    unsigned long long _status; // +0x10
    WeDropReceiveEventSharedData * _sharedData; // +0x18
    WeDropReceiveStatusMachine * _statusMachine; // +0x20
    id <WeDropReceiveModuleViewProvider> _moduleViewProvider; // +0x28
    id <WeDropReceiveFullscreenViewProvider> _fullscreenViewProvider; // +0x30
    id <WeDropReceiveViewFullscreenLifeCycleHelper> _fullscreenViewLifeCycleHelper; // +0x38
    id <WeDropReceiveViewModuleLifeCycleHelper> _moduleViewLifeCycleHelper; // +0x40
}
+ (id)getEventForStatus:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (void)onEnter;
- (void)onLeave;
- (void)onInterrupt;
- (void)onEnterBackground;
- (BOOL)tryEnterStatus:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)sharedData;
- (void)setSharedData:(id)arg1;
- (id)statusMachine;
- (void)setStatusMachine:(id)arg1;
- (id)moduleViewProvider;
- (void)setModuleViewProvider:(id)arg1;
- (id)fullscreenViewProvider;
- (void)setFullscreenViewProvider:(id)arg1;
- (id)fullscreenViewLifeCycleHelper;
- (void)setFullscreenViewLifeCycleHelper:(id)arg1;
- (id)moduleViewLifeCycleHelper;
- (void)setModuleViewLifeCycleHelper:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
