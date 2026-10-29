@interface TPBaseReporter : NSObject <ITPReporter>
{
    int _reporterInstanceBaseID; // +0x8
    TPReporterInitParams * _reporterInitParams; // +0x10
    id <ITPReportInfoGetter> _reportInfoGetter; // +0x18
    id <ITPPlayerInfoGetter> _playerInfoGetter; // +0x20
    NSPointerArray * _reportChannelDelegates; // +0x28
    TPCommonParams * _commonParams; // +0x30
    NSMutableDictionary * _extInitParams; // +0x38
    NSMutableDictionary * _rsvExtInitParams; // +0x40
    long long _reportEventSeq; // +0x48
    NSMutableDictionary * _playerConfigKeyValueDic; // +0x50
    id <ITPReportWrapper> _beaconReporter; // +0x58
    TPPlayerLogContext * _log; // +0x60
    TPDiskReadWrite * _diskReadWrite; // +0x68
}
+ (long long)calcDrmCapability:(id)arg1;
- (id)init;
- (void)setup:(id)arg1;
- (void)addReportChannelListener:(id)arg1;
- (void)onEvent:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)dumpInfo:(id)arg1 withDictionary:(id)arg2;
- (void)reportToExternalReportChannelIfNeed:(id)arg1 withDictionary:(id)arg2;
- (id)getGeneralPlayFlowParamsFromCore;
- (id)getDynamicStatisticParamsFromCore:(BOOL)arg1;
- (id)getLivePeriodExtendReportInfo;
- (void)cacheReport:(id)arg1 withParams:(id)arg2;
- (void)removeCachedReport:(id)arg1;
- (void)removeCachedReports;
- (void)reportEvent:(id)arg1 withParams:(id)arg2;
- (void)reportAndClearCache;
- (void)classifyDicIntoRsvExtMapAndExtMap:(id)arg1 withRsvExtDic:(id)arg2 withExtDic:(id)arg3;
- (void)onDTProcessUpdate:(id)arg1;
- (void)onDTCdnUrlUpdate:(id)arg1;
- (void)onDTProtocolUpdate:(id)arg1;
- (void)getCoreCommonParams;
- (void)getInitExtParams;
- (void)initDeviceParams;
- (id)reportSafeString:(id)arg1;
- (id)reporterInitParams;
- (void)setReporterInitParams:(id)arg1;
- (int)reporterInstanceBaseID;
- (id)reportInfoGetter;
- (void)setReportInfoGetter:(id)arg1;
- (id)playerInfoGetter;
- (void)setPlayerInfoGetter:(id)arg1;
- (id)reportChannelDelegates;
- (void)setReportChannelDelegates:(id)arg1;
- (id)commonParams;
- (void)setCommonParams:(id)arg1;
- (id)extInitParams;
- (void)setExtInitParams:(id)arg1;
- (id)rsvExtInitParams;
- (void)setRsvExtInitParams:(id)arg1;
- (long long)reportEventSeq;
- (void)setReportEventSeq:(long long)arg1;
- (id)playerConfigKeyValueDic;
- (void)setPlayerConfigKeyValueDic:(id)arg1;
- (id)beaconReporter;
- (void)setBeaconReporter:(id)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (id)diskReadWrite;
- (void)setDiskReadWrite:(id)arg1;
- (void).cxx_destruct;
@end
