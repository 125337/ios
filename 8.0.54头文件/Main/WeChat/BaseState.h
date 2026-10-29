@interface BaseState : NSObject
{
    BOOL isFirstEntry; // +0x8
    NSString * _stateName; // +0x10
    NSMutableDictionary * _stateData; // +0x18
    id /* block */ _firstEntryBlock; // +0x20
}
- (id)init;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)unload;
- (void)enter;
- (void)exit;
- (void)update:(Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)updateSDKSetting:(id)arg1;
- (void)reset;
- (void)onPause;
- (void)onResume;
- (void)moveToNextState;
- (void)handleInnerAction:(id)arg1 data:(id)arg2;
- (void)handleEvent:(id)arg1;
- (BOOL)isFirstEntry;
- (void)setIsFirstEntry:(BOOL)arg1;
- (id)stateName;
- (void)setStateName:(id)arg1;
- (id)stateData;
- (void)setStateData:(id)arg1;
- (id /* block */)firstEntryBlock;
- (void)setFirstEntryBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

