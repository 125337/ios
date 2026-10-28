@interface EcsMonitorMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _stepName2beginTimeStamp; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)beginStep:(id)arg1;
- (void)endStep:(id)arg1;
- (void)makeSureStepName2beginTimeStampInit;
- (id)stepName2beginTimeStamp;
- (void)setStepName2beginTimeStamp:(id)arg1;
- (void).cxx_destruct;
@end
