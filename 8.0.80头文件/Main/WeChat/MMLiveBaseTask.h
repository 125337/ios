@interface MMLiveBaseTask : NSObject
{
    BOOL _isReplay; // +0x8
    BOOL _isLivePlayingViaCdn; // +0x9
    BOOL _isViewCapturing; // +0xa
    BOOL _isPureAudioMode; // +0xb
    BOOL _hasSetAudioRoomSceneBySEI; // +0xc
    BOOL _isLiveClosed; // +0xd
    BOOL _isInLive; // +0xe
    BOOL _isEnableComment; // +0xf
    BOOL _isShowUserLocationAvailable; // +0x10
    BOOL _isAllowShowAudioRoomAnchorLocation; // +0x11
    BOOL _isBubbleShowing; // +0x12
    BOOL _isGiftGoalShowing; // +0x13
    BOOL _isInputViewShowing; // +0x14
    unsigned int _mSEIMode; // +0x18
    int _startControllerSwitchFlag; // +0x1c
    NSString * _sessionKey; // +0x20
    long long _roleType; // +0x28
    MMLiveTaskId * _taskId; // +0x30
    MMLiveCommentDataRefreshConfig * _commentRefreshConfig; // +0x38
    MMLiveExtraClientConfig * _extraClientConfig; // +0x40
    MMLiveAnchorStatusItem * _anchorStatusItem; // +0x48
    LiveSdkInfo * _liveSdkInfo; // +0x50
    LiveSdkChannelParams * _lastLiveChannelParams; // +0x58
    NSArray * _seiConnectMicUserInfoList; // +0x60
    MMLiveSEIConnectMicMsg * _seiMicMsgInfo; // +0x68
    unsigned long long _localAudioModeState; // +0x70
    unsigned long long _audioRoomScene; // +0x78
    MMLiveAudioRoomSEIConnectMicMsg * _audioRoomSeiMicMsgInfo; // +0x80
    MMFinderLiveKTVReporter * _freqLogReporter; // +0x88
    MMFinderLiveKTVBox * _ktvBox; // +0x90
    id <MMLiveBaseTaskDelegate> _delegate; // +0x98
    NSString * _disableCommentMsg; // +0xa0
    MMLiveCDNPlayerItem * _mainCdnPlayerItem; // +0xa8
    MMLiveCommentDataFetchEngne * _commentFetchEngine; // +0xb0
    NSArray * _commentPermissions; // +0xb8
    MMLiveCommentUIStateInfo * _uiStateInfo; // +0xc0
    double _enterLiveTime; // +0xc8
    FinderLiveAgreementInfo * _liveAgreementInfo; // +0xd0
    NSData * _createLivePrepareBuffer; // +0xd8
    NSMutableDictionary * _currentCommentVMStateDic; // +0xe0
    NSMutableArray * _connectMicUserInfoListFromAnchorSEIMsg; // +0xe8
    MMLiveConnectMicSubtitleDataModel * _subtitleDataModel; // +0xf0
}
- (BOOL)isSubtitleRecalledWithIndex:(unsigned long long)arg1;
- (void)updateSubtitleRecallDataWithIndexList:(id)arg1 fromScene:(unsigned long long)arg2 shouldNotify:(BOOL)arg3;
- (id)createNewTaskId;
- (id)createNewCommentFetchEngine;
- (void)releaseCommentDataFetchEngine;
- (id)initWithRoleType:(long long)arg1 liveId:(unsigned long long)arg2 andAnchorId:(id)arg3;
- (id)initWithRoleType:(long long)arg1 liveId:(unsigned long long)arg2 andAnchorId:(id)arg3 taskId:(id)arg4;
- (id)initPrimitiveLiveWithRoleType:(long long)arg1 liveId:(unsigned long long)arg2 andAnchorId:(id)arg3;
- (void)updateCommentRefreshControl;
- (void)updateEnableComment:(BOOL)arg1 toastMsg:(id)arg2;
- (id)getCommentVMStateWithBoxId:(id)arg1;
- (id)commentRefreshConfig;
- (id)extraClientConfig;
- (id)currentCommentVMStateDic;
- (unsigned long long)currentLiveScene;
- (BOOL)isAnchor;
- (BOOL)isAudience;
- (BOOL)isAssistant;
- (BOOL)isSyndicateParticipant;
- (BOOL)isPrivilegedAudience;
- (BOOL)isAnchorOrAssistant;
- (BOOL)isAnchorOrPrivilegedAudience;
- (BOOL)isNormalAudience;
- (BOOL)isInMainChannel;
- (BOOL)isLiveAnchorMainDisplayMode;
- (BOOL)isLiveAnchorMiniGamePluginMode;
- (BOOL)isLiveAudienceDisplayMode;
- (BOOL)checkTaskType:(Class)arg1;
- (void)updateAnchorStatus:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (void)setIsInLive:(BOOL)arg1;
- (id)anchorSdkUserId;
- (BOOL)isInLocalAudioModeWaitState;
- (BOOL)isAudienceLocalAudioMode;
- (BOOL)isPureAudioDisplayMode;
- (BOOL)isOrdinaryLiveMode;
- (BOOL)isAudioRoomMode;
- (BOOL)isKTVMode;
- (BOOL)isChatRoomMode;
- (void)updateSEIMode:(unsigned int)arg1;
- (void)checkAndParseConnectMicDataFromCommonSEIMsg:(id)arg1;
- (BOOL)handleSynchronizedSEIAnchoInfoEvent:(id)arg1 anchorSeiStatus:(unsigned int *)arg2 audioRoomSceneValue:(unsigned int *)arg3;
- (BOOL)checkAndNotifySEIConnectMicMsg:(id)arg1 showMicTopic:(BOOL)arg2;
- (BOOL)checkAndNotifyAudioRoomSEIConnectMicMsg:(id)arg1;
- (void)notifyAudioRoomSEIConnectMicMsgUpdated:(BOOL)arg1;
- (void)notifyLiveStreamServerTimeWithJsonDict:(id)arg1;
- (id)uiStateInfo;
- (BOOL)canShowLocationInConnectMicScene;
- (BOOL)canShowAnchorLocationInConnectMicScene;
- (id)freqLogReporter;
- (void)onKTVModeChanged;
- (void)createKTVModels;
- (void)configKTVBox:(id)arg1;
- (id)ktvBox;
- (id)getKTVBoxWithoutAutoCreate;
- (id)createKTVBox;
- (id)ktvManageLogic;
- (id)ktvStateInfo;
- (unsigned int)getKtvScene;
- (BOOL)enableNewStartController;
- (BOOL)enableNewStartDefaultTitle;
- (BOOL)enableNewStartTitleAndPoiGuide;
- (BOOL)enableNewStartTagRequirement;
- (BOOL)enableNewStartProcedureOptimization;
- (void)notifyConnectMicSubTitleWithJsonInfo:(id)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setCommentRefreshConfig:(id)arg1;
- (void)setExtraClientConfig:(id)arg1;
- (id)anchorStatusItem;
- (void)setAnchorStatusItem:(id)arg1;
- (BOOL)isReplay;
- (BOOL)isLivePlayingViaCdn;
- (void)setIsLivePlayingViaCdn:(BOOL)arg1;
- (BOOL)isViewCapturing;
- (void)setIsViewCapturing:(BOOL)arg1;
- (id)liveSdkInfo;
- (void)setLiveSdkInfo:(id)arg1;
- (id)lastLiveChannelParams;
- (void)setLastLiveChannelParams:(id)arg1;
- (unsigned int)mSEIMode;
- (void)setMSEIMode:(unsigned int)arg1;
- (id)seiConnectMicUserInfoList;
- (id)seiMicMsgInfo;
- (void)setSeiMicMsgInfo:(id)arg1;
- (BOOL)isPureAudioMode;
- (void)setIsPureAudioMode:(BOOL)arg1;
- (unsigned long long)localAudioModeState;
- (void)setLocalAudioModeState:(unsigned long long)arg1;
- (unsigned long long)audioRoomScene;
- (void)setAudioRoomScene:(unsigned long long)arg1;
- (id)audioRoomSeiMicMsgInfo;
- (void)setAudioRoomSeiMicMsgInfo:(id)arg1;
- (BOOL)hasSetAudioRoomSceneBySEI;
- (void)setHasSetAudioRoomSceneBySEI:(BOOL)arg1;
- (void)setFreqLogReporter:(id)arg1;
- (void)setKtvBox:(id)arg1;
- (BOOL)isLiveClosed;
- (void)setIsLiveClosed:(BOOL)arg1;
- (BOOL)isInLive;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isEnableComment;
- (void)setIsEnableComment:(BOOL)arg1;
- (id)disableCommentMsg;
- (void)setDisableCommentMsg:(id)arg1;
- (id)mainCdnPlayerItem;
- (void)setMainCdnPlayerItem:(id)arg1;
- (id)commentFetchEngine;
- (void)setCommentFetchEngine:(id)arg1;
- (id)commentPermissions;
- (void)setCommentPermissions:(id)arg1;
- (void)setUiStateInfo:(id)arg1;
- (BOOL)isShowUserLocationAvailable;
- (void)setIsShowUserLocationAvailable:(BOOL)arg1;
- (BOOL)isAllowShowAudioRoomAnchorLocation;
- (void)setIsAllowShowAudioRoomAnchorLocation:(BOOL)arg1;
- (double)enterLiveTime;
- (void)setEnterLiveTime:(double)arg1;
- (id)liveAgreementInfo;
- (void)setLiveAgreementInfo:(id)arg1;
- (int)startControllerSwitchFlag;
- (void)setStartControllerSwitchFlag:(int)arg1;
- (id)createLivePrepareBuffer;
- (void)setCreateLivePrepareBuffer:(id)arg1;
- (BOOL)isBubbleShowing;
- (void)setIsBubbleShowing:(BOOL)arg1;
- (BOOL)isGiftGoalShowing;
- (void)setIsGiftGoalShowing:(BOOL)arg1;
- (BOOL)isInputViewShowing;
- (void)setIsInputViewShowing:(BOOL)arg1;
- (void)setCurrentCommentVMStateDic:(id)arg1;
- (id)connectMicUserInfoListFromAnchorSEIMsg;
- (void)setConnectMicUserInfoListFromAnchorSEIMsg:(id)arg1;
- (id)subtitleDataModel;
- (void)setSubtitleDataModel:(id)arg1;
- (void).cxx_destruct;
@end
