@interface MMFinderLiveAiAssistantLogic : NSObject <MMFinderLiveAiAssistantExt, MMFinderLiveMusicSettingReportDelegate, MMLiveKWSEngineDelegate>
{
    BOOL _isAiAssistantEnabled; // +0x8
    BOOL _hasCheckedIsShowingFirstTime; // +0x9
    BOOL _hasReceivedInfoFromPolling; // +0xa
    BOOL _hasReceivedInfoFromGetLiveMsg; // +0xb
    BOOL _hasLoggedPollingInfo; // +0xc
    BOOL _lastCanProcessKWSAudio; // +0xd
    BOOL _hasReportedFirstExposeInLive; // +0xe
    MMFinderLiveTaskId * _taskId; // +0x10
    FinderLiveAiAssistantNotification * _currentAiAssistantInfo; // +0x18
    id <MMFinderLiveAiAssistantLogicDelegate> _delegate; // +0x20
    FinderLiveAiAssistantNotification * _lastNormalAiAssistantInfo; // +0x28
    NSMutableSet * _closedDialogSessions; // +0x30
    MMLiveKWSProcessor * _kwsProcessor; // +0x38
    NSArray * _welcomeList; // +0x40
    double _wakeupConfidence; // +0x48
    NSArray * _kwsBanTexts; // +0x50
    NSString * _reportingClientInvokeMsgId; // +0x58
    NSString * _lastReceivedClientInvokeMsgIdFromGetLiveMsg; // +0x60
    FinderLiveAiAssistantNotification * _lastReportedAiAssistantInfo; // +0x68
}
- (void)mockAiAssistantInfoIfNeeded;
- (id)mockMusic;
- (id)mockLiveTheme;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)onFirstJoinLive;
- (void)onAnchorStatusUpdatedForAiAssistant;
- (BOOL)isInDialogMode;
- (void)updateAnchorVoiceVolume:(unsigned long long)arg1;
- (id)dialogInfo;
- (void)closeDialog:(id)arg1;
- (void)rollbackToNormalInfo;
- (void)forwardToolCallsIfNeeded:(id)arg1;
- (void)updateLastNormalAiAssistantInfo;
- (void)operateUIOnAiAssistantInfoUpdated:(BOOL)arg1;
- (void)processFeatureGuide:(id)arg1;
- (void)processJumpInfo:(id)arg1;
- (BOOL)checkAiAssistantInfoWithdrawn:(id)arg1;
- (BOOL)checkAiAssistantInfoShouldBeDisposed:(id)arg1 channelType:(unsigned long long)arg2;
- (void)checkFirstTimeShowAndOverwriteIfNeeded;
- (BOOL)enableAiAssistantDialogMsg;
- (BOOL)enableAiAssistantPassiveMsg;
- (BOOL)checkAndSetAiAssistantEnabled;
- (void)onReportMusicSettingActionType:(long long)arg1 songIdList:(id)arg2;
- (void)onReportBGMusicWithAction:(unsigned long long)arg1 tab:(unsigned int)arg2 listenId:(id)arg3 aiAssistantId:(id)arg4;
- (void)onReportBGMusicPlayWithAction:(unsigned long long)arg1 listenId:(id)arg2 playId:(unsigned long long)arg3 playDuration:(unsigned long long)arg4;
- (void)onAiAssistantActionClickedWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2;
- (void)onAiAssistantActionClosedWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2;
- (void)onAiAssistantKWSResourceLoadResult:(BOOL)arg1;
- (void)onAiAssistantInfoUpdatedWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2 channelType:(unsigned long long)arg3;
- (void)initKWSEngine;
- (void)loadKWSResource;
- (void)triggerKWSResourceUDRCheck;
- (void)loadKWSResourceFromUDRResource:(id)arg1;
- (void)releaseKWSEngine;
- (void)processCapturedAudioFrame:(id)arg1;
- (BOOL)isClientInvokeEnabled;
- (BOOL)canProcessKWSAudio;
- (void)notifyKWSStatusIfChanged;
- (void)onKWSWakeupDetected:(id)arg1 confidence:(float)arg2;
- (void)triggerInvokeAiAssistantOnWakeup;
- (id)pickRandomWelcome;
- (void)notifyServerStartDialogWithInfo:(id)arg1 welcomeId:(id)arg2;
- (id)liveTask;
- (id)liveJumpInfo;
- (void)fetchWelcomeConfig;
- (void)setWelcomeList:(id)arg1;
- (void)reportWithdrawn;
- (void)reportFirstExposeInLive;
- (void)recordClientInvokeMsgIdIfNeeded:(id)arg1;
- (void)logAiAssistantInfoOnReceive:(id)arg1 channelType:(unsigned long long)arg2;
- (id)anchorReporter;
- (id)closedDialogSessions;
- (id)taskId;
- (BOOL)isAiAssistantEnabled;
- (void)setIsAiAssistantEnabled:(BOOL)arg1;
- (id)currentAiAssistantInfo;
- (void)setCurrentAiAssistantInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lastNormalAiAssistantInfo;
- (void)setLastNormalAiAssistantInfo:(id)arg1;
- (BOOL)hasCheckedIsShowingFirstTime;
- (void)setHasCheckedIsShowingFirstTime:(BOOL)arg1;
- (BOOL)hasReceivedInfoFromPolling;
- (void)setHasReceivedInfoFromPolling:(BOOL)arg1;
- (BOOL)hasReceivedInfoFromGetLiveMsg;
- (void)setHasReceivedInfoFromGetLiveMsg:(BOOL)arg1;
- (BOOL)hasLoggedPollingInfo;
- (void)setHasLoggedPollingInfo:(BOOL)arg1;
- (void)setClosedDialogSessions:(id)arg1;
- (id)kwsProcessor;
- (void)setKwsProcessor:(id)arg1;
- (id)welcomeList;
- (double)wakeupConfidence;
- (void)setWakeupConfidence:(double)arg1;
- (id)kwsBanTexts;
- (void)setKwsBanTexts:(id)arg1;
- (id)reportingClientInvokeMsgId;
- (void)setReportingClientInvokeMsgId:(id)arg1;
- (id)lastReceivedClientInvokeMsgIdFromGetLiveMsg;
- (void)setLastReceivedClientInvokeMsgIdFromGetLiveMsg:(id)arg1;
- (BOOL)lastCanProcessKWSAudio;
- (void)setLastCanProcessKWSAudio:(BOOL)arg1;
- (BOOL)hasReportedFirstExposeInLive;
- (void)setHasReportedFirstExposeInLive:(BOOL)arg1;
- (id)lastReportedAiAssistantInfo;
- (void)setLastReportedAiAssistantInfo:(id)arg1;
- (void).cxx_destruct;
@end
