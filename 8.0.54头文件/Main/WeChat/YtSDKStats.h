@interface YtSDKStats : NSObject
{
    NSString * _currentState; // +0x8
    NSString * _currentAction; // +0x10
    NSString * _prevUpdateState; // +0x18
    NSString * _prevInfo; // +0x20
    unsigned long long _currentEnterTimeStampMS; // +0x28
    id /* block */ _onEventBlock; // +0x30
    NSMutableDictionary * _stateNameMap; // +0x38
}
+ (id)sharedInstance;
+ (void)clearInstance;
- (id)init;
- (void)deInit;
- (void)registerStateName:(id)arg1;
- (unsigned long long)getTimeNow;
- (void)enterState:(id)arg1;
- (void)updateState:(id)arg1;
- (void)exitState;
- (void)resetState;
- (void)reportError:(int)arg1 message:(id)arg2;
- (void)reportInfo:(id)arg1;
- (void)makeReport:(id)arg1 action:(id)arg2 error:(id)arg3 cost:(id)arg4 info:(id)arg5;
- (void)sendStateEvent:(id)arg1;
- (id)netNameMapper:(id)arg1;
- (id /* block */)onEventBlock;
- (void)setOnEventBlock:(id /* block */)arg1;
- (id)stateNameMap;
- (void)setStateNameMap:(id)arg1;
- (void).cxx_destruct;
@end

