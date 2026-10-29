@interface WCFinderTimelineReportMgr : NSObject <MMConfigMgrExt>
{
    BOOL _isContinue; // +0x8
    NSMutableArray * _reportStatsArray; // +0x10
    NSMutableArray * _watingReportPool; // +0x18
    NSMutableDictionary * _currentStatsPool; // +0x20
    MMTimer * _reportTimer; // +0x28
    unsigned long long _reportTryTimes; // +0x30
    double _streamRequestInterval; // +0x38
    double _lastStreamCGIPostTime; // +0x40
    NSMutableArray * _enhanceStatsArray; // +0x48
    NSMapTable * _recardStatModelMap; // +0x50
}
- (id)init;
- (void)onMMDynamicConfigUpdated;
- (void)dealloc;
- (id)currentStatsPool;
- (id)reportStatsArray;
- (id)watingReportPool;
- (id)enhanceStatsArray;
- (void)reportImmediately;
- (void)startStatsReport;
- (void)endStatsReport;
- (void)reportAllPoolImmediately;
- (void)reportAllPoolIgnoreTimer:(BOOL)arg1;
- (void)pourStateIntoPoolWithTid:(id)arg1;
- (void)pourStateIntoPoolImmediatelyWithTid:(id)arg1;
- (void)reportAllStatsPool;
- (void)reportAllStatsByStreamCGI;
- (id)getMetaModelFromCurrentStatsPoolWithTid:(id)arg1;
- (void)reportStatsPoolArrayWithDelayTime:(double)arg1;
- (void)updateMetaModelWithTid:(id)arg1 updateBlock:(id /* block */)arg2;
- (void)createMetaModelWithTid:(id)arg1 nonceID:(id)arg2 commentScene:(int)arg3 updateBlock:(id /* block */)arg4;
- (void)reportInteractiveActionWithTid:(id)arg1 nonceID:(id)arg2 interactiveType:(unsigned long long)arg3;
- (void)reportInteractiveActionWithTid:(id)arg1 nonceID:(id)arg2 interactiveType:(unsigned long long)arg3 updateBlock:(id /* block */)arg4;
- (void)pourStatsIntoPoolWithMusicVM:(id)arg1 commentScene:(int)arg2;
- (void)pourStatsIntoPoolWithContentVM:(id)arg1 commentScene:(int)arg2;
- (void)reportFullStatsExceptTidImmediately:(id)arg1;
- (void)realReportFullStatsExceptTidImmediately:(id)arg1;
- (id)getFullStatsFromCurrentStatsPool;
- (void)pourStatsIntoPoolWithFinderMegaVideo:(id)arg1 commentScene:(int)arg2;
- (id)getFullStatsFromEnhanceStatsPool;
- (void)pushStatReportShim:(id)arg1;
- (void)_callShimWhenUpdateModel:(id)arg1;
- (void)popStatReportShim:(id)arg1;
- (void)setReportStatsArray:(id)arg1;
- (void)setWatingReportPool:(id)arg1;
- (void)setCurrentStatsPool:(id)arg1;
- (BOOL)isContinue;
- (void)setIsContinue:(BOOL)arg1;
- (id)reportTimer;
- (void)setReportTimer:(id)arg1;
- (unsigned long long)reportTryTimes;
- (void)setReportTryTimes:(unsigned long long)arg1;
- (double)streamRequestInterval;
- (void)setStreamRequestInterval:(double)arg1;
- (double)lastStreamCGIPostTime;
- (void)setLastStreamCGIPostTime:(double)arg1;
- (void)setEnhanceStatsArray:(id)arg1;
- (id)recardStatModelMap;
- (void)setRecardStatModelMap:(id)arg1;
- (void).cxx_destruct;
@end

