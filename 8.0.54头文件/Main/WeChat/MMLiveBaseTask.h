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
    NSString * _sessionKey; // +0x18
    long long _roleType; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    MMLiveCommentDataRefreshConfig * _commentRefreshConfig; // +0x30
    MMLiveAnchorStatusItem * _anchorStatusItem; // +0x38
    LiveSdkInfo * _liveSdkInfo; // +0x40
    LiveSdkChannelParams * _lastLiveChannelParams; // +0x48
    NSArray * _seiConnectMicUserInfoList; // +0x50
    MMLiveSEIConnectMicMsg * _seiMicMsgInfo; // +0x58
    unsigned long long _localAudioModeState; // +0x60
    unsigned long long _audioRoomScene; // +0x68
    MMLiveAudioRoomSEIConnectMicMsg * _audioRoomSeiMicMsgInfo; // +0x70
    MMFinderLiveKTVBox * _ktvBox; // +0x78
    id <MMLiveBaseTaskDelegate> _delegate; // +0x80
    NSString * _disableCommentMsg; // +0x88
    MMLiveCDNPlayerItem * _mainCdnPlayerItem; // +0x90
    MMLiveCommentDataFetchEngne * _commentFetchEngine; // +0x98
    NSArray * _commentPermissions; // +0xa0
    MMLiveCommentUIStateInfo * _uiStateInfo; // +0xa8
    NSMutableDictionary * _currentCommentVMStateDic; // +0xb0
    NSMutableArray * _connectMicUserInfoListFromAnchorSEIMsg; // +0xb8
}
- (id)createNewTaskId;
- (id)createNewCommentFetchEngine;
- (id)initWithRoleType:(long long)arg1 liveId:(unsigned long long)arg2 andAnchorId:(id)arg3;
- (void)updateCommentRefreshControl;
- (void)updateEnableComment:(BOOL)arg1 toastMsg:(id)arg2;
- (id)getCommentVMStateWithBoxId:(id)arg1;
- (id)commentRefreshConfig;
- (id)currentCommentVMStateDic;
- (unsigned long long)currentLiveScene;
- (BOOL)isAnchor;
- (BOOL)isAudience;
- (BOOL)isAssistant;
- (BOOL)isAnchorOrAssistant;
- (BOOL)isNormalAudience;
- (BOOL)isLiveAnchorMainDisplayMode;
- (BOOL)isLiveAnchorMiniGamePluginMode;
- (BOOL)isLiveAudienceDisplayMode;
- (BOOL)checkTaskType:(Class)arg1;
- (void)updateAnchorStatus:(id)arg1;
- (BOOL)isSecondaryDeviceAnchorOrAssistant;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)anchorSdkUserId;
- (BOOL)isInLocalAudioModeWaitState;
- (BOOL)isAudienceLocalAudioMode;
- (BOOL)isPureAudioDisplayMode;
- (BOOL)isOrdinaryLiveMode;
- (BOOL)isAudioRoomMode;
- (BOOL)isKTVMode;
- (void)checkAndParseConnectMicDataFromCommonSEIMsg:(id)arg1;
- (BOOL)handleSynchronizedSEIAnchoInfoEvent:(id)arg1 anchorSeiStatus:(unsigned int *)arg2 audioRoomSceneValue:(unsigned int *)arg3;
- (BOOL)checkAndNotifySEIConnectMicMsg:(id)arg1;
- (BOOL)checkAndNotifyAudioRoomSEIConnectMicMsg:(id)arg1;
- (void)notifyAudioRoomSEIConnectMicMsgUpdated:(BOOL)arg1;
- (id)uiStateInfo;
- (BOOL)canShowLocationInConnectMicScene;
- (BOOL)canShowAnchorLocationInConnectMicScene;
- (void)onKTVModeChanged;
- (void)createKTVModels;
- (id)ktvBox;
- (id)createKTVBox;
- (id)ktvManageLogic;
- (id)ktvStateInfo;
- (unsigned int)getKtvScene;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setCommentRefreshConfig:(id)arg1;
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
- (void)setKtvBox:(id)arg1;
- (BOOL)isLiveClosed;
- (void)setIsLiveClosed:(BOOL)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
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
- (void)setCurrentCommentVMStateDic:(id)arg1;
- (id)connectMicUserInfoListFromAnchorSEIMsg;
- (void)setConnectMicUserInfoListFromAnchorSEIMsg:(id)arg1;
- (void).cxx_destruct;
@end

