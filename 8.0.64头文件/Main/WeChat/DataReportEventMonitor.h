@interface DataReportEventMonitor : MMUserService <DataReportViewExposeExt, MMUIViewControllerExt, DataReportMultiEventDelegate, DataReportPageEventExt, DataReportViewOperateExt, MMServiceProtocol>
{
    NSMutableArray * m_backgroundEventBuffers; // +0x8
    NSMutableDictionary * m_viewExposeTime; // +0x10
    DataReportSubstitutePageStack * m_pageStack; // +0x18
    DataReportSubstitutePage * m_curBizPage; // +0x20
    unsigned long long m_curBizGroupId; // +0x28
    BOOL m_isFront; // +0x30
    unsigned long long m_appInTime; // +0x38
    NSMutableArray * m_viewExpInfos; // +0x40
    NSMutableArray * m_curExpViewUniqueIds; // +0x48
    unsigned long long m_appInOutType; // +0x50
    NSMutableDictionary * m_pageAppearTimes; // +0x58
    NSString * m_appIoMethod; // +0x60
    id <DataReportStandardEventDelegate> _delegate; // +0x68
}
- (id)init;
- (void)startMonitor;
- (void)stopMonitor;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)appEnterForeground;
- (void)appEnterBackground;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (void)MMUIViewControllerDidBePopOrDismiss:(id)arg1;
- (void)checkStackTopPage:(id)arg1;
- (void)topViewControllerDidAppear:(id)arg1;
- (void)onPageEventAppear:(id)arg1;
- (void)onPageEventDisappear:(id)arg1;
- (void)onPageEventAppear:(id)arg1 hash:(unsigned long long)arg2 pageId:(unsigned long long)arg3 bizGroupId:(unsigned long long)arg4;
- (void)onPageEventDisappear:(id)arg1 hash:(unsigned long long)arg2 pageId:(unsigned long long)arg3 bizGroupId:(unsigned long long)arg4;
- (void)clearPage:(id)arg1 time:(unsigned long long)arg2;
- (void)onVCExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)onVCUnExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)subPageEvent:(id)arg1 vc:(id)arg2 checkType:(unsigned long long)arg3;
- (void)onViewExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)onViewUnExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)onViewClick:(id)arg1;
- (void)onViewDoubleTap:(id)arg1;
- (void)onViewLongPress:(id)arg1;
- (void)onPbCgiReq:(id)arg1 cgiName:(id)arg2;
- (void)onPbCgiResq:(id)arg1 cgiName:(id)arg2 errCode:(unsigned int)arg3 errMsg:(id)arg4;
- (void)appForeground:(unsigned long long)arg1;
- (void)appBackground:(unsigned long long)arg1;
- (void)triggerSubPageEvent:(id)arg1 page:(id)arg2 time:(unsigned long long)arg3;
- (void)pageAppear:(id)arg1 time:(unsigned long long)arg2;
- (void)setPageInfoWhenVcAppear:(id)arg1;
- (void)fillPageInfo:(id)arg1;
- (void)checkBizIn:(id)arg1 time:(unsigned long long)arg2;
- (void)checkBizOut:(id)arg1 time:(unsigned long long)arg2;
- (void)viewClk:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)viewDoubleTap:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)viewLongPress:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)viewExp:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)viewUnExp:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)checkViewExp:(id)arg1;
- (void)cgiReq:(id)arg1 cgiParams:(id)arg2 routeRules:(id)arg3 time:(unsigned long long)arg4;
- (void)cgiResp:(id)arg1 errCode:(unsigned int)arg2 errMsg:(id)arg3 cgiParams:(id)arg4 routeRules:(id)arg5 time:(unsigned long long)arg6;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
