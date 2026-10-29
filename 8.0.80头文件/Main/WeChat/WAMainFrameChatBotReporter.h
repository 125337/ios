@interface WAMainFrameChatBotReporter : NSObject
{
    BOOL _panelExpanded; // +0x8
    BOOL _entryAppearReported; // +0x9
    BOOL _sugAppearReported; // +0xa
    id <WAMainFrameChatBotReportDataSource> _dataSource; // +0x10
    NSString * _appearReportedSessionId; // +0x18
}
+ (id)clickInfoWithPageType:(unsigned long long)arg1 action:(unsigned long long)arg2 sessionId:(id)arg3 sugQuery:(id)arg4 xiaoWeiEntryText:(id)arg5 xiaoWeiExtraData:(id)arg6 xiaoWeiBypass:(id)arg7 askResult:(unsigned long long)arg8 askErrCode:(id)arg9;
+ (unsigned long long)askResultForSemanticDestination:(id)arg1;
+ (void)reportOpenWeAppWithVoipSessionID:(id)arg1 appId:(id)arg2;
+ (id)headlessMiniAppSrcInfoJSONWithContext:(id)arg1 appId:(id)arg2;
+ (id)headlessMiniAppCommonParamsWithContext:(id)arg1 voipSessionID:(id)arg2 srcInfoJSON:(id)arg3;
+ (void)reportHeadlessMiniAppEventsWithVoipSessionID:(id)arg1 appId:(id)arg2;
+ (void)flushHeadlessMiniAppEventsWithVoipSessionID:(id)arg1 appId:(id)arg2;
+ (void)reportFirstTokenEventWithContext:(id)arg1 voipSessionID:(id)arg2 srcInfoJSON:(id)arg3 reportService:(id)arg4;
+ (void)reportCompleteEventWithContext:(id)arg1 voipSessionID:(id)arg2 srcInfoJSON:(id)arg3 reportService:(id)arg4;
+ (void)reportHalfScreenAction:(unsigned long long)arg1 pageType:(unsigned long long)arg2 context:(id)arg3;
+ (void)reportCloseHalfScreenWithVoipSessionID:(id)arg1;
+ (void)reportHalfScreenWithVoipSessionID:(id)arg1 action:(unsigned long long)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)markPanelExpanded;
- (void)markPanelCollapsed;
- (BOOL)isPanelExpanded;
- (id)sugQueryIfVisible;
- (id)xiaoWeiBypass;
- (id)xiaoWeiExtraData;
- (void)reportAppearIfNeeded;
- (void)reportAppearWithPageType:(unsigned long long)arg1 viewId:(id)arg2 withSugQuery:(BOOL)arg3;
- (void)reportEntryClick;
- (void)reportEntryLongPressWithDestination:(id)arg1 askErrCode:(id)arg2;
- (id)prepareSugClickId;
- (void)reportEntryLongPressResultWithDestination:(id)arg1 askErrCode:(id)arg2 voipSessionID:(id)arg3;
- (void)reportSugClickTaskBarResultWithAskResult:(unsigned long long)arg1 askErrCode:(id)arg2 voipSessionID:(id)arg3 clickContext:(id)arg4;
- (id)sugRoundSrcInfoWithDestination:(id)arg1 clkId:(id)arg2 keptReuse:(BOOL)arg3 voipSessionID:(id)arg4 clickContext:(id)arg5;
- (void)reportSugClickWithDestination:(id)arg1 clkId:(id)arg2 keptReuse:(BOOL)arg3 voipSessionID:(id)arg4 clickContext:(id)arg5;
- (void)reportSugClickAsMiniAppDirectWithClkId:(id)arg1 voipSessionID:(id)arg2 clickContext:(id)arg3;
- (void)reportSugLongPress;
- (void)reportClickWithPageType:(unsigned long long)arg1 action:(unsigned long long)arg2 eventId:(id)arg3 viewId:(id)arg4 destination:(id)arg5 withSugQuery:(BOOL)arg6 markClosing:(BOOL)arg7;
- (void)reportClickWithPageType:(unsigned long long)arg1 action:(unsigned long long)arg2 eventId:(id)arg3 viewId:(id)arg4 destination:(id)arg5 clkId:(id)arg6 withSugQuery:(BOOL)arg7 markClosing:(BOOL)arg8 askErrCode:(id)arg9;
- (id)srcInfoWithDestination:(id)arg1;
- (id)srcInfoWithDestination:(id)arg1 miniAppId:(id)arg2;
- (void)report38709WithEventId:(id)arg1 viewId:(id)arg2 destination:(id)arg3;
- (void)report38709WithEventId:(id)arg1 viewId:(id)arg2 destination:(id)arg3 clkId:(id)arg4;
- (void)report38709WithEventId:(id)arg1 viewId:(id)arg2 destination:(id)arg3 clkId:(id)arg4 extraParams:(id)arg5;
- (id)halfScreenSrcInfoParamsWithLongPress:(BOOL)arg1;
- (void)fillPanelAppearFields:(id)arg1;
- (id)buildTaskBarReportContext;
- (void)snapshotSessionContextForVoipSessionID:(id)arg1 fromSugDirectEntry:(BOOL)arg2;
- (void)snapshotSugClickContext:(id)arg1 forVoipSessionID:(id)arg2;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)panelExpanded;
- (void)setPanelExpanded:(BOOL)arg1;
- (id)appearReportedSessionId;
- (void)setAppearReportedSessionId:(id)arg1;
- (BOOL)entryAppearReported;
- (void)setEntryAppearReported:(BOOL)arg1;
- (BOOL)sugAppearReported;
- (void)setSugAppearReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
