@interface WAJSEventHandler_collectWepalm : WAJSEventHandler_BaseEvent <WCPayCollectPalmControlLogicDelegate>
{
    WCPayControlData * _controlData; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (int)getIntFromStringParam:(id)arg1 key:(id)arg2 defaultVal:(int)arg3;
- (id)wrapJSApiResult:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)onWCPayCollectPalmControlLogicEndWithOK:(id)arg1;
- (void)onWCPayCollectPalmControlLogicEndWithCancel:(id)arg1;
- (void)onWCPayCollectPalmControlLogicEndWithFail:(id)arg1;
- (id)controlData;
- (void)setControlData:(id)arg1;
- (void).cxx_destruct;
@end

