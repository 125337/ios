@interface AmoebaStandardEventMonitor : NSObject <AmoebaStandardEventDelegate>
{
    NSMutableArray * m_sessionStayInfosList; // +0x8
    NSMutableDictionary * m_sessionStayInfos; // +0x10
    NSMutableArray * m_pageStayInfosList; // +0x18
    NSMutableDictionary * m_pageStayInfos; // +0x20
    AmoebaStayInfo * m_curBizStayInfo; // +0x28
    float m_lastAppInBatteryLevel; // +0x30
}
- (id)init;
- (void)onAppIn:(unsigned long long)arg1 inType:(unsigned long long)arg2;
- (void)onAppOut:(unsigned long long)arg1 outType:(unsigned long long)arg2;
- (void)onSessionIn:(unsigned long long)arg1 page:(id)arg2;
- (void)onSessionOut:(unsigned long long)arg1 page:(id)arg2;
- (void)onPageIn:(unsigned long long)arg1 page:(id)arg2 isSubPage:(BOOL)arg3;
- (void)onPageOut:(unsigned long long)arg1 page:(id)arg2 isSubPage:(BOOL)arg3;
- (void)onBizIn:(unsigned long long)arg1 page:(id)arg2;
- (void)onBizOut:(unsigned long long)arg1 page:(id)arg2;
- (void)onViewClk:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onViewDoubleTap:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onViewLongPress:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onViewExp:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onViewUnExp:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onVideoPlay:(unsigned long long)arg1;
- (void)onVideoPause:(unsigned long long)arg1;
- (void)onVideoStop:(unsigned long long)arg1;
- (void)onAudioPlay:(unsigned long long)arg1;
- (void)onAudioPause:(unsigned long long)arg1;
- (void)onAudioStop:(unsigned long long)arg1;
- (void)onCgiReq:(id)arg1 cgiParams:(id)arg2 routeRules:(id)arg3 time:(unsigned long long)arg4;
- (void)onCgiResp:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3 cgiParams:(id)arg4 routeRules:(id)arg5 time:(unsigned long long)arg6;
- (void)onReset;
- (unsigned long long)getLastAppInTime;
- (void).cxx_destruct;
@end
