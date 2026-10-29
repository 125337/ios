@interface VoiceSearchActionReportService : MMUserService <IMsgExt, IMsgRevokeExt, BaseMsgViewControllerExt, MMServiceProtocol>
{
    BOOL _firstPageOutObserverRegistered; // +0x8
    BOOL _persistentStateLoaded; // +0x9
    BOOL _observingMessageEvents; // +0xa
    BOOL _observingMessageRevocations; // +0xb
    NSObject * _reportingScope; // +0x10
    NSMutableDictionary * _roundsByID; // +0x18
    NSMutableDictionary * _roundIDByVoipSessionID; // +0x20
    NSMutableDictionary * _roundIDByTraceID; // +0x28
    NSMutableDictionary * _pendingDirectRecords; // +0x30
    NSMutableDictionary * _pendingFirstPageOutRecordsByUsername; // +0x38
    NSMutableDictionary * _pendingAutoRecords; // +0x40
    NSMutableDictionary * _automaticSendIntents; // +0x48
    NSMutableDictionary * _automaticSendSuppressionTokensByMessageKey; // +0x50
    MemoryMappedKV * _storage; // +0x58
    unsigned long long _pendingObservationExpiryGeneration; // +0x60
    unsigned long long _pendingObservationScheduledDeadlineMilliseconds; // +0x68
}
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (id)beginVoiceInputRound;
- (void)bindRoundID:(id)arg1 toVoipSessionID:(id)arg2;
- (void)reportVoiceInputReleaseForRoundID:(id)arg1;
- (void)recordMicrophoneReadyForRoundID:(id)arg1;
- (void)finishVoiceInputRoundForRoundID:(id)arg1;
- (id)receiveAgentResultV2ForVoipSessionID:(id)arg1 highConfidence:(BOOL)arg2;
- (void)reportSimpleIntentResultForRound:(id)arg1 usernames:(id)arg2 actionType:(unsigned long long)arg3;
- (void)reportConfirmHalfShownForRound:(id)arg1;
- (void)reportConfirmHalfContinueForRound:(id)arg1;
- (void)reportSimpleIntentActionSucceededForRound:(id)arg1;
- (void)reportVoiceInputCancelForRoundID:(id)arg1;
- (void)invalidateActionAttributionForRoundID:(id)arg1;
- (void)reportHalfScreenShownForVoipSessionID:(id)arg1;
- (void)reportDirectContactJumpWithTraceID:(id)arg1 voipSessionID:(id)arg2 username:(id)arg3;
- (id)beginAutomaticSendWithTraceID:(id)arg1 voipSessionID:(id)arg2 username:(id)arg3;
- (void)completeAutomaticSendWithToken:(id)arg1 messageWrap:(id)arg2;
- (void)cancelAutomaticSendWithToken:(id)arg1;
- (void)beginFirstPageOutObservationForDirectRecord:(id)arg1;
- (void)onExitBaseMsgSession:(id)arg1;
- (void)purgeExpiredFirstPageOutRecordsAtMilliseconds:(unsigned long long)arg1;
- (void)refreshFirstPageOutObserverRegistration;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)ensureStateInitialized;
- (id)roundContextForVoipSessionID:(id)arg1;
- (id)roundContextForActionTraceID:(id)arg1 voipSessionID:(id)arg2;
- (BOOL)hasAutomaticSendIntentForUsername:(id)arg1;
- (id)automaticSendMessageKeyForChatName:(id)arg1 localID:(unsigned int)arg2;
- (void)addAutomaticSendSuppressionForChatName:(id)arg1 localID:(unsigned int)arg2;
- (BOOL)consumeAutomaticSendSuppressionForChatName:(id)arg1 localID:(unsigned int)arg2;
- (id)automaticRecordMatchingMessageWrap:(id)arg1;
- (id)automaticRecordForChatName:(id)arg1 localID:(unsigned int)arg2;
- (void)consumeRecallRecord:(id)arg1;
- (void)purgeExpiredStateAndPersistIfNeeded:(BOOL)arg1;
- (void)refreshPendingMessageObservation;
- (void)loadPendingRecords;
- (void)persistPendingRecords;
- (void)reportEventIfNeeded:(id)arg1 round:(id)arg2;
- (BOOL)reportEventID:(id)arg1 roundID:(id)arg2 voipSessionID:(id)arg3 screenStatus:(unsigned long long)arg4 username:(id)arg5 searchXiaoweiID:(id)arg6 durationKey:(id)arg7 durationMilliseconds:(unsigned long long)arg8;
- (void)reportV2EventIfNeeded:(id)arg1 round:(id)arg2 params:(id)arg3;
- (void)submitEventID:(id)arg1 params:(id)arg2;
- (void)runOnMainThread:(id /* block */)arg1;
- (void)runSynchronouslyOnMainThread:(id /* block */)arg1;
- (id)reportingScope;
- (void)setReportingScope:(id)arg1;
- (id)roundsByID;
- (void)setRoundsByID:(id)arg1;
- (id)roundIDByVoipSessionID;
- (void)setRoundIDByVoipSessionID:(id)arg1;
- (id)roundIDByTraceID;
- (void)setRoundIDByTraceID:(id)arg1;
- (id)pendingDirectRecords;
- (void)setPendingDirectRecords:(id)arg1;
- (id)pendingFirstPageOutRecordsByUsername;
- (void)setPendingFirstPageOutRecordsByUsername:(id)arg1;
- (BOOL)firstPageOutObserverRegistered;
- (void)setFirstPageOutObserverRegistered:(BOOL)arg1;
- (id)pendingAutoRecords;
- (void)setPendingAutoRecords:(id)arg1;
- (id)automaticSendIntents;
- (void)setAutomaticSendIntents:(id)arg1;
- (id)automaticSendSuppressionTokensByMessageKey;
- (void)setAutomaticSendSuppressionTokensByMessageKey:(id)arg1;
- (id)storage;
- (void)setStorage:(id)arg1;
- (BOOL)persistentStateLoaded;
- (void)setPersistentStateLoaded:(BOOL)arg1;
- (BOOL)observingMessageEvents;
- (void)setObservingMessageEvents:(BOOL)arg1;
- (BOOL)observingMessageRevocations;
- (void)setObservingMessageRevocations:(BOOL)arg1;
- (unsigned long long)pendingObservationExpiryGeneration;
- (void)setPendingObservationExpiryGeneration:(unsigned long long)arg1;
- (unsigned long long)pendingObservationScheduledDeadlineMilliseconds;
- (void)setPendingObservationScheduledDeadlineMilliseconds:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
