@interface WCFinderLiveCompletePageReporter : NSObject
{
    BOOL _isFromQRCode; // +0x8
    MMFinderLiveTask * _liveTask; // +0x10
    unsigned long long _liveId; // +0x18
    WCFinderLivePageStayReporter * _exposeReporter; // +0x20
    WCFinderLiveOverReporter * _overReporter; // +0x28
    id <WCFinderLiveCompleteDiagnoseStateStoring> _diagnoseStateDelegate; // +0x30
}
- (void)reportAnchorDiagnose:(long long)arg1;
- (void)reportPageStayEnter;
- (void)reportPageStayQuit;
- (void)reportElementClick:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (BOOL)isFromQRCode;
- (void)setIsFromQRCode:(BOOL)arg1;
- (id)exposeReporter;
- (void)setExposeReporter:(id)arg1;
- (id)overReporter;
- (void)setOverReporter:(id)arg1;
- (id)diagnoseStateDelegate;
- (void)setDiagnoseStateDelegate:(id)arg1;
- (void).cxx_destruct;
@end
