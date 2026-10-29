@interface WCSHmdtMgr : MMRootService <MMKernelExt, IMsgExt, MMServiceProtocol>
{
    BOOL _isEnable; // +0x8
    NSMutableDictionary * _dicSceneBehaviorID; // +0x10
    unsigned int finderLiveSampleCount; // +0x18
    unsigned int finderLiveSampleIntervalPreReport; // +0x1c
}
- (id)init;
- (BOOL)isHmdtEnable;
- (void)startTask:(unsigned int)arg1 behaviorID:(id)arg2;
- (void)startTask:(unsigned int)arg1 behaviorID:(id)arg2 config:(TaskConfig *)arg3;
- (void)setBehaviorID:(id)arg1 forScene:(unsigned int)arg2;
- (void)onManulLoginOK;
- (void)onNewRegOK;
- (void)startFinderLiveReportWithLiveid:(unsigned long long)arg1;
- (void)stopFinderLiveReport;
- (void)startFinderLiveReportUntilStopWithBid:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void).cxx_destruct;
@end

