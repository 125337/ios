@interface MMLiveContainerLogicHandler : NSObject
{
    MMLiveContainerPresentCheckRecord * _lastReportPresentCheckRecord; // +0x8
    MMLiveContainerPresentCheckRecord * _pendingReportPresentCheckRecord; // +0x10
}
- (void)onLiveContainerPresentCheck:(unsigned long long)arg1 presentingVC:(id)arg2 scene:(unsigned long long)arg3 liveId:(unsigned long long)arg4;
- (void)onCurrLiveContainerLogicWillDestroy;
- (void)delayToReportPresentCheckRecordIfNeed:(id)arg1;
- (void)cancelPresentCheckPendingReport;
- (void)reportPresentCheckRecord;
- (id)lastReportPresentCheckRecord;
- (void)setLastReportPresentCheckRecord:(id)arg1;
- (id)pendingReportPresentCheckRecord;
- (void)setPendingReportPresentCheckRecord:(id)arg1;
- (void).cxx_destruct;
@end
