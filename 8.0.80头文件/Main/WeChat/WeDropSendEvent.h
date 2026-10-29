@interface WeDropSendEvent : WeDropEvent
{
    BOOL _isActive; // +0x8
    unsigned long long _status; // +0x10
    WeDropSendEventSharedData * _sharedData; // +0x18
    WeDropSendStatusMachine * _statusMachine; // +0x20
    id <WeDropSendViewProvider> _viewProvider; // +0x28
    id <WeDropSendViewLifeCycleHelper> _viewLifeCycleHelper; // +0x30
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
- (id)viewProvider;
- (void)setViewProvider:(id)arg1;
- (id)viewLifeCycleHelper;
- (void)setViewLifeCycleHelper:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
