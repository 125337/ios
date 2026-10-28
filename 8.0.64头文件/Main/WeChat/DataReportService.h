@interface DataReportService : MMUserService <DataReportPageEventExt, MMServiceProtocol>
{
    NSNumber * m_ssConf; // +0x8
    NSNumber * m_ssExpt; // +0x10
    NSNumber * m_localSwitch; // +0x18
    NSNumber * m_cloudSwitch; // +0x20
    DataReportConfiguration * m_configuration; // +0x28
    DataReportPageContext * m_pageContext; // +0x30
    NSMutableDictionary * m_staticPublicParams; // +0x38
    NSMutableDictionary * m_eventRouteRules; // +0x40
    unsigned long long m_reportSeq; // +0x48
    NSMutableDictionary * m_eventSeqs; // +0x50
    NSMutableArray * m_callbacks; // +0x58
    UIViewController * m_curViewController; // +0x60
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onSendKV:(id)arg1 withReportID:(unsigned int)arg2;
- (BOOL)isOpenSwitch;
- (BOOL)isSS;
- (void)startDataReport:(BOOL)arg1;
- (void)stopDataReport;
- (void)startDataReport2:(BOOL)arg1;
- (void)stopDataReport2;
- (void)startWithConfiguration:(id)arg1;
- (id)getConfiguration;
- (id)getPageContext;
- (id)getFormatter;
- (id)getSharedSerialQueue;
- (void)updateCurViewController:(id)arg1;
- (id)getCurViewController;
- (void)genContextId:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (void)obtainContextId:(unsigned long long)arg1 lastSessionCount:(unsigned long long)arg2 obtainInfoBlock:(id /* block */)arg3;
- (void)clearContextId:(unsigned long long)arg1;
- (void)obtainSessionId:(id /* block */)arg1;
- (void)obtainPagePaths:(unsigned long long)arg1 obtainInfoBlock:(id /* block */)arg2;
- (void)obtainBizId:(id /* block */)arg1;
- (void)obtainCurPageInfo:(id)arg1 obtainInfoBlock:(id /* block */)arg2;
- (void)obtainLastClickViewInfo:(id /* block */)arg1;
- (void)obtainAllCommonInfo:(id)arg1 obtainInfoBlock:(id /* block */)arg2;
- (void)obtainFinderEnterMethod:(id)arg1 obtainInfoBlock:(id /* block */)arg2;
- (id)obtainCurPageId;
- (id)obtainSourceViewId;
- (id)obtainSyncLastClickViewId;
- (void)syncPageResume:(unsigned long long)arg1 pageId:(id)arg2;
- (void)syncViewClick:(id)arg1;
- (void)resetViewParams:(id)arg1;
- (void)setEnterMethod:(id)arg1;
- (void)floatWindowEvent:(unsigned int)arg1;
- (void)bindSessionId:(id)arg1;
- (void)reportStandardViewEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRule:(id)arg4;
- (void)reportStandardViewEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRules:(id)arg4;
- (void)reportStandardPageEvent:(id)arg1 time:(unsigned long long)arg2 target:(id)arg3 params:(id)arg4;
- (void)reportStandardEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3;
- (void)reportStandardEvent:(id)arg1;
- (void)reportCustomViewEvent:(id)arg1 eventId:(id)arg2 params:(id)arg3 routeRule:(unsigned long long)arg4;
- (void)reportCustomPageEvent:(unsigned long long)arg1 eventId:(id)arg2 params:(id)arg3 routeRule:(unsigned long long)arg4;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2 routeRule:(unsigned long long)arg3;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2 routeRule:(unsigned long long)arg3 isRtReport:(BOOL)arg4;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2 routeRules:(id)arg3;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2 routeRules:(id)arg3 isRtReport:(BOOL)arg4;
- (void)reportCustomEvent:(id)arg1 target:(id)arg2 params:(id)arg3 routeRule:(unsigned long long)arg4;
- (void)reportCustomEvent:(id)arg1 target:(id)arg2 params:(id)arg3 routeRule:(unsigned long long)arg4 isRtReport:(BOOL)arg5 isBringPageInfo:(BOOL)arg6;
- (void)reportCustomEvent:(id)arg1 target:(id)arg2 params:(id)arg3 routeRules:(id)arg4;
- (void)reportCustomEvent:(id)arg1 target:(id)arg2 params:(id)arg3 routeType:(unsigned long long)arg4 routeRules:(id)arg5 isRtReport:(BOOL)arg6 isBringPageInfo:(BOOL)arg7 isBatchReport:(BOOL)arg8;
- (void)reportCustomEvent:(id)arg1;
- (void)reportCustomCgiViewEvent:(id)arg1 eventId:(id)arg2 target:(id)arg3 params:(id)arg4 bizId:(long long)arg5 isBatchReport:(BOOL)arg6;
- (void)reportCustomCgiPageEvent:(unsigned long long)arg1 eventId:(id)arg2 target:(id)arg3 params:(id)arg4 bizId:(long long)arg5 isBatchReport:(BOOL)arg6;
- (void)reportCustomCgiEvent:(id)arg1 target:(id)arg2 params:(id)arg3 bizId:(long long)arg4 isBatchReport:(BOOL)arg5;
- (void)routeEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRules:(id)arg4 isRtReport:(BOOL)arg5;
- (void)handleReportData:(unsigned long long)arg1 reportData:(id)arg2 routeRules:(id)arg3;
- (void)setDynamicPublicParams:(id)arg1;
- (void)addCommonParams:(id)arg1 params:(id)arg2;
- (void)addReportAndEventSeqParam:(id)arg1 params:(id)arg2;
- (void)setPublicParam:(id)arg1 value:(id)arg2;
- (void)setPublicParams:(id)arg1;
- (void)removePublicParam:(id)arg1;
- (void)removePublicParams;
- (void)resetPublicParams;
- (id)getPublicParams;
- (void)setBizParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setBizParams:(id)arg1 params:(id)arg2;
- (void)removeBizParam:(id)arg1 key:(id)arg2;
- (void)removeBizParams:(id)arg1;
- (void)resetBizParams:(id)arg1;
- (id)getBizParams:(id)arg1;
- (void)setNextBizParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setNextBizParams:(id)arg1 params:(id)arg2;
- (void)removeNextBizParam:(id)arg1 key:(id)arg2;
- (void)removeNextBizParams:(id)arg1;
- (void)resetNextBizParams:(id)arg1;
- (id)getNextBizParams:(id)arg1;
- (void)setSessionParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setSessionParams:(id)arg1 params:(id)arg2;
- (void)removeSessionParam:(id)arg1 key:(id)arg2;
- (void)removeSessionParams:(id)arg1;
- (void)resetSessionParams:(id)arg1;
- (id)getSessionParams:(id)arg1;
- (void)setNextSessionParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setNextSessionParams:(id)arg1 params:(id)arg2;
- (void)removeNextSessionParam:(id)arg1 key:(id)arg2;
- (void)removeNextSessionParams:(id)arg1;
- (void)resetNextSessionParams:(id)arg1;
- (id)getNextSessionParams:(id)arg1;
- (void)setParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setParams:(id)arg1 params:(id)arg2;
- (void)removeParam:(id)arg1 key:(id)arg2;
- (void)removeParams:(id)arg1;
- (void)resetParams:(id)arg1;
- (id)getParams:(id)arg1;
- (void)setReportPolicy:(id)arg1 reportPolicy:(unsigned long long)arg2 routeRule:(unsigned long long)arg3;
- (void)setReportPolicy:(id)arg1 reportPolicy:(unsigned long long)arg2 routeType:(unsigned long long)arg3 routeRule:(unsigned long long)arg4 isRtReport:(BOOL)arg5 isBatchReport:(BOOL)arg6;
- (unsigned long long)getReportPolicy:(id)arg1;
- (void)setEventCallback:(id)arg1 reportPolicy:(unsigned long long)arg2 callbackBlock:(id /* block */)arg3 key:(id)arg4;
- (void)setDynamicParamsBlock:(id)arg1 block:(id /* block */)arg2 key:(id)arg3;
- (void)removeDynamicParamsBlock:(id)arg1 key:(id)arg2;
- (id)getDynamicParamsBlocks:(id)arg1;
- (id /* block */)getDynamicParamsBlock:(id)arg1 key:(id)arg2;
- (id)getDynamicParams:(id)arg1 eventId:(id)arg2;
- (void)setLastReportTime:(id)arg1 lastReportTime:(unsigned long long)arg2 eventId:(id)arg3;
- (unsigned long long)getLastReportTime:(id)arg1 eventId:(id)arg2;
- (void)setReportInterval:(id)arg1 reportInterval:(unsigned long long)arg2 eventId:(id)arg3;
- (unsigned long long)getReportInterval:(id)arg1 eventId:(id)arg2;
- (void)setEventParam:(id)arg1 eventId:(id)arg2 key:(id)arg3 value:(id)arg4;
- (void)setEventParams:(id)arg1 eventId:(id)arg2 params:(id)arg3;
- (void)removeEventParam:(id)arg1 eventId:(id)arg2 key:(id)arg3;
- (void)removeEventParams:(id)arg1;
- (id)getEventParam:(id)arg1 eventId:(id)arg2;
- (void)setEventRouteRule:(id)arg1 routeRule:(unsigned long long)arg2;
- (void)setEventRouteRule:(id)arg1 routeRule:(unsigned long long)arg2 isRtReport:(BOOL)arg3;
- (void)removeEventRouteRule:(id)arg1 routeRule:(unsigned long long)arg2;
- (id)getEventRouteRules:(id)arg1;
- (void)addDataReportCallback:(id)arg1;
- (void)removeDataReportCallback:(id)arg1;
- (void)setPageId:(id)arg1 pageId:(unsigned long long)arg2;
- (unsigned long long)getPageId:(id)arg1;
- (void)setPageName:(id)arg1 pageName:(id)arg2;
- (id)getPageName:(id)arg1;
- (void)setBizGroupId:(id)arg1 bizGroupId:(unsigned long long)arg2;
- (unsigned long long)getBizGroupId:(id)arg1;
- (void)setViewId:(id)arg1 viewId:(id)arg2;
- (id)getViewId:(id)arg1;
- (void)setViewExposeMinTime:(id)arg1 timeMills:(unsigned long long)arg2;
- (void)setViewExposeMinRate:(id)arg1 rate:(double)arg2;
- (void)onPageEventAppear:(id)arg1;
- (void)onPageEventDisappear:(id)arg1;
- (void)onPageEventAppear:(id)arg1 hash:(unsigned long long)arg2 pageId:(unsigned long long)arg3 bizGroupId:(unsigned long long)arg4;
- (void)onPageEventDisappear:(id)arg1 hash:(unsigned long long)arg2 pageId:(unsigned long long)arg3 bizGroupId:(unsigned long long)arg4;
- (void).cxx_destruct;
@end
