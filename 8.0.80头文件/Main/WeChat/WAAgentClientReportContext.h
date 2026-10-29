@interface WAAgentClientReportContext : NSObject <WAChatBotAgentRoomTaskReportDelegate>
{
    BOOL _roundStageLastReported; // +0x8
    BOOL _currentRoundFirstTokenReported; // +0x9
    BOOL _sessionStartReported; // +0xa
    NSString * _chatSessionId; // +0x10
    NSString * _chatAgentSource; // +0x18
    NSString * _clientSessionId; // +0x20
    NSString * _clientRoundId; // +0x28
    NSString * _currentAppid; // +0x30
    NSString * _currentRoundId; // +0x38
    unsigned long long _currentRoundNewMsgTsMs; // +0x40
    unsigned long long _lastStageUpdatedTsMs; // +0x48
    unsigned long long _enterChatPageTsMs; // +0x50
    NSString * _voiceRecordEventId; // +0x58
    unsigned long long _voiceRecordStartTsMs; // +0x60
    unsigned long long _voiceRecordEndTsMs; // +0x68
    NSMutableDictionary * _cardRenderStartTsMap; // +0x70
    NSMutableDictionary * _imageUploadCtxSnapshotMap; // +0x78
}
- (id)init;
- (id)buildClientCtxWithAppid:(id)arg1;
- (void)beginNewRound;
- (void)adoptRoundId:(id)arg1;
- (void)adoptMetaFromEvent:(id)arg1;
- (void)reportSessionStartIfNeededWithAppid:(id)arg1;
- (void)reportEnterChatPageWithAppid:(id)arg1 isColdLaunch:(BOOL)arg2;
- (void)reportExitChatPageWithAppid:(id)arg1 exitTo:(id)arg2;
- (void)reportExitSessionWithAppid:(id)arg1 reason:(id)arg2;
- (void)beginVoiceRecordingWithAppid:(id)arg1;
- (void)reportVoiceRecordReadyWithAppid:(id)arg1;
- (unsigned int)endVoiceRecordingWithAppid:(id)arg1;
- (unsigned int)completeAsrAndBeginNewRoundWithAppid:(id)arg1 asrText:(id)arg2;
- (void)reportNewMessage:(id)arg1 msgType:(id)arg2 from:(id)arg3 imageCount:(unsigned int)arg4 breakChat:(BOOL)arg5 appid:(id)arg6;
- (unsigned int)reportTextFirstTokenIfNeededWithAppid:(id)arg1;
- (void)reportTextCompleted:(id)arg1 msgId:(id)arg2 isGreeting:(BOOL)arg3 appid:(id)arg4;
- (void)reportStageUpdated:(id)arg1 stageName:(id)arg2 thinkContent:(id)arg3 isLast:(BOOL)arg4 appid:(id)arg5;
- (void)reportCardReceivedWithAppid:(id)arg1 sectionId:(id)arg2 msgId:(id)arg3 eventAppid:(id)arg4;
- (void)markCardStartRenderForContainerId:(unsigned int)arg1 appid:(id)arg2;
- (void)reportCardRenderCompleted:(unsigned int)arg1 isSuccess:(BOOL)arg2 appid:(id)arg3;
- (void)reportSuggestionShownWithAppid:(id)arg1 count:(unsigned int)arg2;
- (void)reportSuggestionClicked:(id)arg1 appid:(id)arg2;
- (void)reportImageUploadStartWithEventId:(id)arg1 imageCount:(unsigned int)arg2;
- (void)reportImageUploadStartWithEventId:(id)arg1 appid:(id)arg2 imageCount:(unsigned int)arg3;
- (void)reportImageUploadCompletedWithEventId:(id)arg1 costTimeMs:(unsigned int)arg2 imageCount:(unsigned int)arg3 isSuccess:(BOOL)arg4 errorMessage:(id)arg5;
- (void)reportImageUploadCompletedWithEventId:(id)arg1 appid:(id)arg2 costTimeMs:(unsigned int)arg3 imageCount:(unsigned int)arg4 isSuccess:(BOOL)arg5 errorMessage:(id)arg6;
- (id)buildClientCtxFromSnapshot:(id)arg1;
- (void)roomTaskDidStartImageUploadWithEventId:(id)arg1 imageCount:(unsigned int)arg2;
- (void)roomTaskDidCompleteImageUploadWithEventId:(id)arg1 costTimeMs:(unsigned int)arg2 imageCount:(unsigned int)arg3 isSuccess:(BOOL)arg4 errorMessage:(id)arg5;
- (void)specializedAgentPipeline:(id)arg1 didStartImageUploadWithEventId:(id)arg2 appId:(id)arg3 imageCount:(unsigned int)arg4;
- (void)specializedAgentPipeline:(id)arg1 didCompleteImageUploadWithEventId:(id)arg2 appId:(id)arg3 costTimeMs:(unsigned int)arg4 imageCount:(unsigned int)arg5 isSuccess:(BOOL)arg6 errorMessage:(id)arg7;
- (id)chatSessionId;
- (void)setChatSessionId:(id)arg1;
- (id)chatAgentSource;
- (void)setChatAgentSource:(id)arg1;
- (id)clientSessionId;
- (void)setClientSessionId:(id)arg1;
- (id)clientRoundId;
- (void)setClientRoundId:(id)arg1;
- (id)currentAppid;
- (void)setCurrentAppid:(id)arg1;
- (BOOL)roundStageLastReported;
- (void)setRoundStageLastReported:(BOOL)arg1;
- (id)currentRoundId;
- (void)setCurrentRoundId:(id)arg1;
- (unsigned long long)currentRoundNewMsgTsMs;
- (void)setCurrentRoundNewMsgTsMs:(unsigned long long)arg1;
- (BOOL)currentRoundFirstTokenReported;
- (void)setCurrentRoundFirstTokenReported:(BOOL)arg1;
- (unsigned long long)lastStageUpdatedTsMs;
- (void)setLastStageUpdatedTsMs:(unsigned long long)arg1;
- (BOOL)sessionStartReported;
- (void)setSessionStartReported:(BOOL)arg1;
- (unsigned long long)enterChatPageTsMs;
- (void)setEnterChatPageTsMs:(unsigned long long)arg1;
- (id)voiceRecordEventId;
- (void)setVoiceRecordEventId:(id)arg1;
- (unsigned long long)voiceRecordStartTsMs;
- (void)setVoiceRecordStartTsMs:(unsigned long long)arg1;
- (unsigned long long)voiceRecordEndTsMs;
- (void)setVoiceRecordEndTsMs:(unsigned long long)arg1;
- (id)cardRenderStartTsMap;
- (void)setCardRenderStartTsMap:(id)arg1;
- (id)imageUploadCtxSnapshotMap;
- (void)setImageUploadCtxSnapshotMap:(id)arg1;
- (void).cxx_destruct;
@end
