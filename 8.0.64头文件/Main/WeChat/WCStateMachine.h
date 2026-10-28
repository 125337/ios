@interface WCStateMachine : MMObject
{
    NSRecursiveLock * _lock; // +0x8
    BOOL _active; // +0x10
    id <WCStateMachineDelegate> _delegate; // +0x18
    WCState * _initialState; // +0x20
    WCState * _currentState; // +0x28
    NSMutableSet * _states; // +0x30
    NSMutableSet * _events; // +0x38
}
- (id)init;
- (void)setInitialState:(id)arg1;
- (int)activate;
- (int)addState:(id)arg1;
- (int)addEvent:(id)arg1;
- (BOOL)canFireEvent:(id)arg1;
- (int)fireEvent:(id)arg1 userInfo:(id)arg2;
- (id)eventNamed:(id)arg1;
- (id)stateNamed:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initialState;
- (id)currentState;
- (void)setCurrentState:(id)arg1;
- (id)states;
- (id)events;
- (BOOL)active;
- (void).cxx_destruct;
@end
