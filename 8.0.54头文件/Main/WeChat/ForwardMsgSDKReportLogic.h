@interface ForwardMsgSDKReportLogic : MMUserService <MMServiceProtocol, ForwardMessageLogicExt>
{
    unsigned int _lastGetSdkInfoTimeSec; // +0x8
    MMLRUCache * _sdkCacheInfo; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onAfterForwardMsgToContact:(id)arg1 msgWrap:(id)arg2 fromMsg:(id)arg3;
- (void)onPreForwardMsgToContact:(id)arg1 msgWrap:(id)arg2;
- (void)onForwardMsgToContact:(id)arg1 scene:(unsigned long long)arg2;
- (void)onPreForwardVideoToContact:(id)arg1 videoInfo:(id)arg2;
- (unsigned int)checkIsInFinder:(id)arg1;
- (id)sdkCacheInfo;
- (void)setSdkCacheInfo:(id)arg1;
- (unsigned int)lastGetSdkInfoTimeSec;
- (void)setLastGetSdkInfoTimeSec:(unsigned int)arg1;
- (void).cxx_destruct;
@end

