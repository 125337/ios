@interface CBTAsstReportMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _sessionMap; // +0x8
    NSMutableDictionary * _answerBubbleIndexMap; // +0x10
    NSMutableDictionary * _agentSessionContextMap; // +0x18
    NSMutableDictionary * _activeRecTraceMap; // +0x20
    NSMutableArray * _activeRecTraceOrder; // +0x28
}
+ (void)reportSlideIntoXiaoweiSucc;
+ (void)reportSlideIntoXiaoweiFail;
+ (void)notifyPanelEnterSource:(int)arg1;
+ (void)notifyXiaoweiEntryClickTs:(long long)arg1;
+ (long long)currentTimeMs;
+ (void)clearPendingEntryClickTs;
+ (void)notifyPanelExitSource:(int)arg1;
+ (id)getCurCBTSessionId;
+ (void)prefetchCurrentTimbre;
+ (id)currentTimbreId;
+ (id)currentTimbreName;
+ (void)reportEvent:(id)arg1 target:(id)arg2 specParams:(id)arg3;
+ (void)reportViewEvent:(id)arg1 eventId:(id)arg2 target:(id)arg3 specParams:(id)arg4;
+ (void)reportLiteAppQueryDisplayWithOrigin:(id)arg1 target:(id)arg2;
+ (id)commonParamsForVoipSessionID:(id)arg1;
+ (void)reportPageEvent:(unsigned long long)arg1 eventId:(id)arg2 target:(id)arg3 specParams:(id)arg4;
+ (id)commonParamsFromViewModel:(id)arg1;
+ (id)referParamsFromViewModel:(id)arg1;
+ (id)bubbleTypeListOf:(id)arg1;
+ (id)miniAppMetaFromAppId:(id)arg1;
+ (id)miniAppMetaFromSessionId:(id)arg1;
+ (void)registerCommonParams:(id)arg1 forAgentSessionId:(id)arg2;
+ (id)commonParamsForAgentSessionId:(id)arg1;
+ (void)clearCommonParamsForAgentSessionId:(id)arg1;
+ (void)reportMiniAppInterruptWithType:(long long)arg1 appId:(id)arg2 sessionId:(id)arg3 vm:(id)arg4;
+ (void)reportMiniAppTakeOverWinEvent:(id)arg1 eventId:(id)arg2 appId:(id)arg3 sessionId:(id)arg4 winExitType:(long long)arg5;
+ (void)reportMiniAppThinkTxtLinkEvent:(id)arg1 appId:(id)arg2 sessionId:(id)arg3 text:(id)arg4 linkUrl:(id)arg5 vm:(id)arg6;
+ (id)cardSpecificParamsFromViewModel:(id)arg1;
+ (id)cbt_queryParamsOfUrl:(id)arg1;
+ (BOOL)isAigcImageUrl:(id)arg1;
+ (id)aigcTaskIdFromUrl:(id)arg1;
+ (BOOL)reportAigcViewEvent:(id)arg1 eventId:(id)arg2 target:(id)arg3 commonParams:(id)arg4 aigcTaskId:(id)arg5 extraParams:(id)arg6 dedupKey:(id)arg7;
+ (id)_inviterTokenFromLiteAppQuery:(id)arg1;
+ (void)reportSingleChatInviteCardEvent:(id)arg1 messageWrap:(id)arg2 isSender:(BOOL)arg3 target:(id)arg4;
- (void)applyPendingEntryClickTsToSessionID:(id)arg1;
- (id)activeRecTraceForSessionID:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)lockedActiveRecTraceForSessionID:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)markEnterXiaoweiClkTsMs:(long long)arg1 forSessionID:(id)arg2;
- (void)markViewWillAppearTsMs:(long long)arg1 forSessionID:(id)arg2;
- (void)markCreateRoomTsMs:(long long)arg1 forSessionID:(id)arg2;
- (void)markRecommendCgiTsMs:(long long)arg1 forSessionID:(id)arg2;
- (void)markRecommendCgiResponseTsMs:(long long)arg1 forSessionID:(id)arg2;
- (void)reportFirstActiveRecommendExpWithSessionID:(id)arg1 enterScene:(long long)arg2 text:(id)arg3 contentIndex:(long long)arg4;
- (void)reportFirstActiveRecommendClkWithSessionID:(id)arg1 enterScene:(long long)arg2 text:(id)arg3 contentIndex:(long long)arg4;
- (void)reportFirstActiveRecommendEvent:(id)arg1 sessionID:(id)arg2 enterScene:(long long)arg3 text:(id)arg4 contentIndex:(long long)arg5 trace:(id)arg6;
- (void)onServiceInit;
- (id)sessionForVoipSessionID:(id)arg1 enterScene:(long long)arg2;
- (void)removeSessionForVoipSessionID:(id)arg1;
- (void)reportEntryExposureIfNeededWithTarget:(id)arg1;
- (id)cbt_entryExpKV;
- (long long)nextBubbleIndexForAnswerKey:(id)arg1;
- (void)clearBubbleIndexForAnswerKey:(id)arg1;
- (void)clearAllBubbleIndex;
- (id)sessionMap;
- (void)setSessionMap:(id)arg1;
- (id)answerBubbleIndexMap;
- (void)setAnswerBubbleIndexMap:(id)arg1;
- (id)agentSessionContextMap;
- (void)setAgentSessionContextMap:(id)arg1;
- (id)activeRecTraceMap;
- (void)setActiveRecTraceMap:(id)arg1;
- (id)activeRecTraceOrder;
- (void)setActiveRecTraceOrder:(id)arg1;
- (void).cxx_destruct;
@end
