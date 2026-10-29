@interface EcsOrderAndCardReportMgr : MMUserService <MMServiceProtocol>
{
    BOOL _needReportPageEvent; // +0x8
    NSString * _exposeId; // +0x10
    WCFinderRedDotCtrlInfo * _lastClickMyTabCtrlInfo; // +0x18
    unsigned long long _pageEnterTime; // +0x20
    unsigned long long _orderAndCardEnterTime; // +0x28
    NSMutableDictionary * _reportedExposeReddotUuidMap; // +0x30
}
- (void)recordExposeReportedReddotAtPath:(id)arg1 ctrlInfo:(id)arg2;
- (BOOL)markReddotExposeReportedIfNeededAtPath:(id)arg1 ctrlInfo:(id)arg2;
- (void)resetReddotExposeReportRecord;
- (BOOL)isOrderAndCardEntrance;
- (void)fillCtrlInfoWithDic:(id)arg1 CtrlInfo:(id)arg2;
- (void)fillRedDotInfoWithDic:(id)arg1 CtrlInfo:(id)arg2 showInfo:(id)arg3;
- (id)genExtInfo2String;
- (id)genReportParamsWithTitle:(unsigned int)arg1 clickSessionId:(id)arg2 leftCtrlInfo:(id)arg3 leftShowInfo:(id)arg4 rightCtrlInfo:(id)arg5 rightShowInfo:(id)arg6 isReceiveAfterEnter:(long long)arg7 shouldAddExtInfo2:(BOOL)arg8;
- (void)orderAndCardReportWithTitle:(unsigned int)arg1 clickSessionId:(id)arg2 eventId:(id)arg3 leftCtrlInfo:(id)arg4 leftShowInfo:(id)arg5 rightCtrlInfo:(id)arg6 rightShowInfo:(id)arg7 isReceiveAfterEnter:(long long)arg8 shouldAddExtInfo2:(BOOL)arg9;
- (void)clickMyTab;
- (void)exitMyTab;
- (void)myTabRedDotExposeWithTime:(unsigned long long)arg1 eventId:(id)arg2 params:(id)arg3;
- (void)revokeRedDotWithReason:(unsigned int)arg1 eventId:(id)arg2 ctrlInfo:(id)arg3 showInfo:(id)arg4;
- (void)orderAndCardExpose;
- (void)orderAndCardRedDotExposeWithTitleType:(unsigned int)arg1 ctrlInfo:(id)arg2 path:(id)arg3;
- (void)orderAndCardClickWithTitle:(unsigned int)arg1 clickSessionId:(id)arg2;
- (void)orderAndCardClick32325ReportWithTitle:(unsigned int)arg1 clickSessionId:(id)arg2;
- (void)orderAndCardPageReturn;
- (id)exposeId;
- (void)setExposeId:(id)arg1;
- (id)lastClickMyTabCtrlInfo;
- (void)setLastClickMyTabCtrlInfo:(id)arg1;
- (unsigned long long)pageEnterTime;
- (void)setPageEnterTime:(unsigned long long)arg1;
- (BOOL)needReportPageEvent;
- (void)setNeedReportPageEvent:(BOOL)arg1;
- (unsigned long long)orderAndCardEnterTime;
- (void)setOrderAndCardEnterTime:(unsigned long long)arg1;
- (id)reportedExposeReddotUuidMap;
- (void)setReportedExposeReddotUuidMap:(id)arg1;
- (void).cxx_destruct;
@end
