@interface ChatbotUICPP2NativeCallerCallback : NSObject
{
    ChatbotUICPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ChatbotUICPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onTalkSuccComplete:(unsigned long long)arg1;
- (void)onCallEndComplete:(unsigned long long)arg1;
- (void)onOnRecvToCliInfoComplete:(unsigned long long)arg1;
- (void)onOnTTSBeginComplete:(unsigned long long)arg1;
- (void)onOnTTSEndComplete:(unsigned long long)arg1;
- (void)onOnAIMicSpeakStatusComplete:(unsigned long long)arg1;
- (void)onOnRecvMsgComplete:(unsigned long long)arg1;
- (void)onOnRecvStreamTextComplete:(unsigned long long)arg1;
- (void)onOnRecvQuestionInfoComplete:(unsigned long long)arg1;
- (void)onOnRecvWeAppNotifyClientMsgComplete:(unsigned long long)arg1;
- (void)onOnRecvWeAppCdpComplete:(unsigned long long)arg1;
- (void)onOnRecvEvaluateJsComplete:(unsigned long long)arg1;
- (void)onOnRecvWeAppProccessMsgComplete:(unsigned long long)arg1;
- (void)onOnRecvPOIRequestComplete:(unsigned long long)arg1;
- (void)onOnSocialHistoryUpdateComplete:(unsigned long long)arg1;
- (void)onOnRecvAiSpeakingInfoComplete:(unsigned long long)arg1;
- (void)onOnRecvRecommendMsgInfoComplete:(unsigned long long)arg1;
- (void)onOnRoomMemberChangeComplete:(unsigned long long)arg1;
- (void)onOnRecvTTSExtraInfoComplete:(unsigned long long)arg1;
- (void)onOnCdpSessionTimeoutComplete:(unsigned long long)arg1;
- (void)onOnRecvToolCallAdaptorComplete:(unsigned long long)arg1;
- (void)onOnShowLinkErrMsgComplete:(unsigned long long)arg1;
- (void)onOnRecvVoIPAsrInfoComplete:(unsigned long long)arg1;
- (void)onLaunchAsstVoIPInComingCardComplete:(unsigned long long)arg1;
- (void)onHideAsstVoIPInComingCardComplete:(unsigned long long)arg1;
- (void)onOnDeleteMessagesSucceededComplete:(unsigned long long)arg1;
- (void)onOnAuditEvaluationModeChangedComplete:(unsigned long long)arg1;
- (void)onOnAuditAutomaticEvaluationResultComplete:(unsigned long long)arg1;
- (void)onOnAuditAutomaticEvaluationResultV2Complete:(unsigned long long)arg1;
- (void)onOnAuditSetLocationComplete:(unsigned long long)arg1;
- (void)onOnAuditHumanEvaluationResultComplete:(unsigned long long)arg1;
- (void)onOnClearAllMessagesSucceededComplete:(unsigned long long)arg1;
- (void)onNotifyChatbotEntryStateChangeComplete:(unsigned long long)arg1;
- (void)onOnSyncedMessagesInsertedComplete:(unsigned long long)arg1;
- (void)onOnSyncedMessagesUpdatedComplete:(unsigned long long)arg1;
- (void)onOnAuditClearMockLocationComplete:(unsigned long long)arg1;
@end
