@interface MMFinderLiveLogic : MMLiveLogic <WCFinderContactExt, MMFinderLiveFansGroupInfoExt, MMFinderLiveConnectMicActionDelegate, MMFinderLiveRedPacketLogicDelegate, MMLiveCommentViewDelegate, MMLiveScreenSharingLogicOperationDelegate, MMLiveScreenSharingLogicUIDelegate, MMFinderLiveKTVSongOperationExt, WCFinderLiveExt>
{
    BOOL _isLiveClosed; // +0x8
    BOOL _isKeyRequesting; // +0x9
    BOOL _isLiveJoined; // +0xa
    BOOL _joinLiveAfterGetLiveMsgInvalid; // +0xb
    BOOL _hasOfflined; // +0xc
    BOOL _isEnableRewardAnchorStatusRequesting; // +0xd
    BOOL _isEnableLikeAnchorStatusRequesting; // +0xe
    id <MMFinderLiveLogicDelegate> _liveLogicDelegate; // +0x10
    MMFinderLiveRedPacketLogic * _redPacketLogic; // +0x18
    MMLiveScreenSharingLogic * _screenSharingLogic; // +0x20
    WeAvatarLogic * _weAvatarLogic; // +0x28
    NSString * _finderUserName; // +0x30
    long long _roleType; // +0x38
    WCFinderLiveInfo * _lastFinderLiveInfo; // +0x40
    WCFinderCreateLiveCGI * _createLiveCGI; // +0x48
    long long _currEntryScene; // +0x50
    NSString * _lastJumpGameInfoContent; // +0x58
    MMFinderLiveRedPacketMessage * _taggedRedPacketMessage; // +0x60
    unsigned long long _enableRewardAnchorStatusRequestSeq; // +0x68
    double _lastEnableRewardAnchorStatusRequestResultTime; // +0x70
    unsigned long long _enableLikeAnchorStatusRequestSeq; // +0x78
    double _lastEnableLikeAnchorStatusRequestResultTime; // +0x80
    MMFinderLiveImageOcrOp * _ocrOp; // +0x88
    MMFinderLiveAppMsgInfoCacheLogic * _appMsgInfoCacheLogic; // +0x90
}
- (id)initWithTaskId:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)createLiveWithLiveCreateParamsModel:(id)arg1;
- (void)uploadCoverImageWithCreateParamsModel:(id)arg1 successBlock:(id /* block */)arg2;
- (void)checkForLiveImageSpamWithCreateParamsModel:(id)arg1 successBlock:(id /* block */)arg2;
- (void)uploadAudioOnlyBackgroundImageWithCreateParamsModel:(id)arg1 successBlock:(id /* block */)arg2;
- (void)realCreateLiveWithCreateLiveParamsModel:(id)arg1;
- (void)preJoinLive;
- (BOOL)joinLive:(unsigned long long)arg1;
- (BOOL)joinLiveInternal:(unsigned long long)arg1;
- (BOOL)cancelLive;
- (BOOL)closeLive;
- (BOOL)closeLiveByAssitant;
- (BOOL)closeWait:(unsigned int)arg1;
- (void)clearLive;
- (BOOL)setOffline;
- (BOOL)notifyStartLiveSucceeded;
- (BOOL)shareLive;
- (BOOL)getLiveInfo;
- (void)initConnectMicLogic;
- (BOOL)refreshLiveSdkInfoForConnectMicUser;
- (BOOL)fetchNewLiveSdkInfo;
- (void)fetchDetailNewDataItem;
- (void)fetchDetailDataItemWithFinderUserName:(id)arg1 completeBlock:(id /* block */)arg2;
- (BOOL)getJoinLiveAfterGetLiveMsgInvalid;
- (void)resetJoinLiveAfterGetLiveMsgInvalid;
- (void)asyncGetCreateLiveImageSpamCheckInfoWithCoverImage:(id)arg1 coverPath:(id)arg2 coverUrl:(id)arg3 headImg:(id)arg4 headImgPath:(id)arg5 headUrl:(id)arg6 completion:(id /* block */)arg7;
- (id)assembleSpamCheckInfoWithCoverPicFeature:(id)arg1 headImgPicFeat:(id)arg2;
- (void)enterLiveRoom;
- (void)enterBackground;
- (void)enterForeground;
- (void)sysCallInterrupted:(BOOL)arg1;
- (void)enableLiveReward:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)enableLiveLike:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)openGloryList:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)hiddenAudienceName:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)enableRealTimeDataPanel:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)enableAnchorProductQuestion:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)handleUIForRewardEnableChanged:(BOOL)arg1;
- (void)handleUIForLikeEnableChanged:(BOOL)arg1;
- (void)handleNotifyCommentForRewardEnableChaned:(BOOL)arg1;
- (void)handleNotifyCommentForLikeEnableChaned:(BOOL)arg1;
- (void)handleNotifyCommentForHiddenNameChaned:(BOOL)arg1;
- (void)handleNotifyCommentForSkinSegOpen;
- (void)handleNotifyCommentForSkinSegClose;
- (void)handleNotifyCommentForJoinGameEnableChaned:(BOOL)arg1;
- (void)handleNotifyCommentForJoinGameSpecialGiftEnable;
- (void)handleNotifyCommentForSubscribeWithBizUserInfo:(id)arg1;
- (void)handleNotifyCommentForSelfJoinWithExtInfo:(id)arg1;
- (void)handleNotifyCommentForAppWithGameLiveJumpInfo:(id)arg1;
- (void)enableApplyConnectMic:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)enableFreeTalk:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)openMicModeSettingPanel;
- (void)changePureAudioModeForAnchor:(BOOL)arg1;
- (void)resetAnchorStatus;
- (void)setJoinTeamMode:(unsigned int)arg1 curPayment:(unsigned int)arg2 callback:(id /* block */)arg3;
- (void)reportPayGameAction:(unsigned int)arg1 newPayment:(unsigned int)arg2 success:(BOOL)arg3 extra:(id)arg4;
- (void)saveLastLiveInfo;
- (BOOL)backToPluginLive;
- (void)reuseFeedStreamDataToLiveRoomIfNeeded;
- (void)preloadCommentsBeforeJoinLive;
- (void)preAppendComments;
- (void)updateMicUser:(id)arg1 micMuted:(BOOL)arg2;
- (void)tryShowMicActionSheetForAudienceWithUserInfo:(id)arg1;
- (void)updateMicSeatSettingWithMicUserInfo:(id)arg1;
- (void)maximizeOrMinimizeMicAudience:(id)arg1 isMaximizeOperation:(BOOL)arg2;
- (void)reportJoinLiveLoading;
- (id)finderTaskId;
- (id)liveTask;
- (id)finderLiveConnectMicLogic;
- (BOOL)isConnectingMic;
- (BOOL)isInMicTalking;
- (id)finderLiveOperationView;
- (id)operationViewModel;
- (BOOL)shouldDisplayLawTips;
- (BOOL)hasCancelledByUser;
- (BOOL)canPauseOrResumeLive;
- (BOOL)pauseLive;
- (BOOL)resumeLive;
- (void)requestPauseLive;
- (void)requestResumeLive;
- (void)requestResumeSuspiciousVerify:(long long)arg1 successBlock:(id /* block */)arg2;
- (BOOL)checkCoverLivePauseStatusFromLocalFlag:(long long)arg1;
- (void)correctAnchorLivePauseStatus:(id)arg1 preLivePauseStatus:(long long)arg2;
- (void)addNotificationCommentForPauseStatusChanged:(BOOL)arg1;
- (void)initRedPacketLogic;
- (void)markTaggedRedPacketIfNeeded;
- (void)openTaggedRedPacketIfNeeded;
- (id)viewControllerForRedPacketLogic:(id)arg1;
- (void)redPacketLogic:(id)arg1 didFailToOpenRedPacketWithError:(id)arg2 handled:(BOOL *)arg3;
- (void)initWeAvatarLogic;
- (void)initScreenSharingLogic;
- (BOOL)isSharingFiles;
- (void)selectFiles;
- (void)selectActionsWhileSharingFiles;
- (void)screenSharingLogic:(id)arg1 didStartSharingInViewController:(id)arg2;
- (void)screenSharingLogic:(id)arg1 didStopSharingInViewController:(id)arg2;
- (id)liveViewControllerForPresentingScreenSharing:(id)arg1;
- (void)onFansGroupStateChanged:(unsigned long long)arg1;
- (void)onCreateFinderLiveError:(id)arg1 finderDataItem:(id)arg2 errorPage:(id)arg3 warnPage:(id)arg4 createLiveCGI:(id)arg5 isMiniGameLive:(BOOL)arg6;
- (BOOL)isCreateLiveSecurityOrNameError:(id)arg1;
- (void)onJoinFinderLiveError:(id)arg1 finderDataItem:(id)arg2 joinLiveContext:(id)arg3 errorPage:(id)arg4;
- (id)pollingFetchRequestBufferByCmdId:(long long)arg1;
- (void)checkLiveMicInfoInJoinLiveResponse:(id)arg1 micExtFlag:(unsigned long long)arg2;
- (void)checkWordingInLiveMicInfo:(id)arg1;
- (void)checkBattleSettingsInLiveMicInfo:(id)arg1;
- (void)updateMicUsersInMicInfo:(id)arg1;
- (void)checkFinderLiveMicConfigInLiveMicInfo:(id)arg1 fromFirstJoinLive:(BOOL)arg2;
- (void)updateMicLocationInRespContext:(id)arg1;
- (void)doubleCheckShowOpenScreenAd;
- (void)checkLiveMicAnchorBattleInfoInJoinLiveResponse:(id)arg1 micSessionId:(id)arg2 vroomId:(id)arg3;
- (void)checkOtherRoomMicAudienceListInJoinLiveResponse:(id)arg1 anchorSdkUserId:(id)arg2;
- (void)checkLiveFreeMicUsersInJoinLiveResponse:(id)arg1;
- (void)onCloseFinderLiveError:(id)arg1 finderDataItem:(id)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned long long)arg5 liveNewFansNum:(unsigned int)arg6 maxOnlineCount:(unsigned int)arg7 audiencesAvgSeconds:(unsigned int)arg8;
- (void)onCancelFinderLiveError:(id)arg1 finderDataItem:(id)arg2;
- (void)onGetFinderLiveAlertInfoWithTaskId:(id)arg1 alertInfo:(id)arg2;
- (void)onGetFinderLiveToastInfoWithTaskId:(id)arg1 toastInfo:(id)arg2;
- (void)onGetFinderLiveApplyMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 withVideo:(BOOL)arg3 seatId:(unsigned int)arg4 autoConnect:(BOOL)arg5 expiredTime:(unsigned long long)arg6 sdkUserId:(id)arg7 sessionId:(id)arg8 micUserAttrFlag:(unsigned int)arg9;
- (void)onGetFinderLiveAcceptMicMessageWithTaskId:(id)arg1 connectMicFinderContact:(id)arg2 liveSdkInfo:(id)arg3 withVideo:(BOOL)arg4 seatId:(unsigned int)arg5 expiredTime:(unsigned long long)arg6 sdkUserId:(id)arg7 sessionId:(id)arg8 sequence:(unsigned long long)arg9;
- (void)onGetFinderLiveCloseMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 sessionId:(id)arg3 closeMicInfo:(id)arg4;
- (void)onGetFinderLiveInviteAudienceMicMessageWithTaskId:(id)arg1 isVideoMic:(BOOL)arg2 seatId:(unsigned int)arg3 expiredTime:(unsigned long long)arg4 inviteMicBuffer:(id)arg5;
- (void)onGetFinderLiveAnchorNewApplyMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 applyAnchor:(id)arg3 acceptorAnchor:(id)arg4 pkroomAnchors:(id)arg5 applyId:(id)arg6 randomMicBuffer:(id)arg7 expiredTime:(unsigned long long)arg8;
- (void)onGetFinderLiveAnchorNewAcceptMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 pkroomAnchors:(id)arg3 sessionId:(id)arg4 vroomId:(id)arg5 vroomIdVersion:(unsigned long long)arg6;
- (void)onGetFinderLiveAnchorNewCloseMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 sdkUserId:(id)arg3 applyId:(id)arg4 sessionId:(id)arg5;
- (void)onGetFinderLiveAnchorApplyMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 coverImageUrlString:(id)arg3 sdkUserId:(id)arg4 sdkRoomId:(unsigned int)arg5 liveRoomImages:(id)arg6 randomMicBuffer:(id)arg7 sessionId:(id)arg8;
- (void)onGetFinderLiveAnchorAcceptMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 coverImageUrlString:(id)arg3 liveRoomImages:(id)arg4 sdkUserId:(id)arg5 sdkRoomId:(unsigned int)arg6 sdkPkSign:(id)arg7 sdkNewPkSign:(id)arg8 sessionId:(id)arg9 sequence:(unsigned long long)arg10;
- (void)onGetFinderLiveAnchorCloseMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 sessionId:(id)arg3 sdkUserId:(id)arg4;
- (void)onGetFinderLiveAnchorConnectMicStatusInfoWithTaskId:(id)arg1 fromFinderContact:(id)arg2 connectMicFinderContact:(id)arg3 coverImageUrlString:(id)arg4 liveRoomImages:(id)arg5 status:(long long)arg6 sessionId:(id)arg7 sequence:(unsigned long long)arg8 sdkUserId:(id)arg9 audienceMicList:(id)arg10 disableBattle:(BOOL)arg11;
- (void)checkOtherRoomMicAudienceList:(id)arg1 anchorSdkUserId:(id)arg2;
- (void)onGetFinderLiveAnchorConnectMicBattleNotifyInfoWithTaskId:(id)arg1 notifyInfo:(id)arg2;
- (void)onGetFinderLiveAnchorConnectMicBattleInfoWithTaskId:(id)arg1 battleInfo:(id)arg2;
- (void)onGetFinderLiveAnchorConnectMicTemplateBattleInfoWithTaskId:(id)arg1 battleInfo:(id)arg2 serverUnixEpochTimeInSeconds:(unsigned long long)arg3;
- (void)onGetFinderLiveNotifyApplyRandomMicInfoWithTaskId:(id)arg1 finderLiveContact:(id)arg2 randomMicBuffer:(id)arg3 isMultiAnchorMic:(BOOL)arg4;
- (void)onGetFinderLiveApplyMicIntercomMessageWithTaskId:(id)arg1 finderLiveContact:(id)arg2 sdkUserId:(id)arg3 sessionId:(id)arg4;
- (void)onGetFinderLiveCloseMicIntercomMessageWithTaskId:(id)arg1 sessionId:(id)arg2;
- (void)onGetFinderLiveMicBreakTrtcMessageWithTaskId:(id)arg1 sdkUserId:(id)arg2;
- (void)onGetFinderLiveMicHeartBrokenInfoWithTaskId:(id)arg1 users:(id)arg2;
- (void)onFinderLiveAnchorStatusUpdated:(id)arg1;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)onGetFinderLivePromoteInfoWithTaskId:(id)arg1 promoteInfo:(id)arg2;
- (void)onGetFinderLivePromoteExtInfoWithTaskId:(id)arg1 promoteExtInfo:(id)arg2;
- (void)onFinderLiveUpdateMutilAngleWithTaskId:(id)arg1 multiPullStreamInfo:(id)arg2;
- (void)onGetFinderLivePromoteProductInfoWithTaskId:(id)arg1 productInfo:(id)arg2;
- (void)onFinderLiveUpdateFinderObjectInfoWithTaskId:(id)arg1 finderObjectInfo:(id)arg2;
- (void)onGetGameLiveJumpInfoWithTaskId:(id)arg1 gameLiveJumpInfo:(id)arg2;
- (void)onGetReserveOrDownloadGameInfoWithTaskId:(id)arg1 gameInfo:(id)arg2;
- (void)onNewAnchorQuestUpdated:(id)arg1 taskId:(id)arg2;
- (void)onNewAnchorTopLiveDesc:(id)arg1 taskId:(id)arg2;
- (void)onGetHandledFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 onlineViewCount:(unsigned int)arg9 ktvPlayerCount:(unsigned int)arg10 respContext:(id)arg11;
- (BOOL)isInGamePluginLive;
- (void)checkAndSyncAnchorStatusForAssistant:(id)arg1;
- (void)checkAndSyncAnchorStatusForAnchorMainScene:(id)arg1;
- (void)checkAndSyncAnchorStatusForAnchorSecondaryDevice:(id)arg1;
- (void)synchronizeJoinTeamModeAndPayment:(id)arg1;
- (BOOL)isAnchorJoinGameSpecialGift:(id)arg1;
- (void)startWeChatPayVerifyProcess:(long long)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)handleAnchorStatusUpdated:(id)arg1 preivousAnchorStatus:(id)arg2;
- (BOOL)checkLiveHiddenNameChanged:(id)arg1 preivousAnchorStatus:(id)arg2;
- (BOOL)checkLiveGameTeamUpSettingValueChanged:(id)arg1 preivousAnchorStatus:(id)arg2;
- (void)onFinderLiveVerifyRealNameForComment;
- (void)onMMFinderLiveConnectMicLogicConnectMicLayoutModeDidChangeFrom:(unsigned long long)arg1 toLayoutMode:(unsigned long long)arg2;
- (void)onFinderLiveVerifyRealNameForConnectMic;
- (void)onFinderLivePolicyShown;
- (void)onFinderLiveVerifyRealNameForFreeMic;
- (void)onFinderLivePolicyShownForFreeMic;
- (void)onFinderLiveConnectedMicUserAreaTappedWithMicUserInfo:(id)arg1 isAvatarTapped:(BOOL)arg2 highlightRect:(CGRect)arg3 highlightRectCornerRadius:(double)arg4;
- (void)onFinderLiveConnectedMicUserListUpdated;
- (void)onFinderLiveSwitchUserRoleBeforeConnectingMic;
- (void)onFinderLiveConnectMicStartWithUserInfo:(id)arg1;
- (void)onFinderLiveConnectMicEndWithUserInfo:(id)arg1;
- (void)onFinderLiveConnectedMicPKSuperfanCountUpdated:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicLogicRequestOpenWebUrl:(id)arg1;
- (void)onRealnameVerifySuccessNotification:(id)arg1;
- (void)onRealnameVerifyCancelNotification:(id)arg1;
- (void)onLiveKTVSongOperationRequestSongBlockedWithType:(unsigned long long)arg1 taskId:(id)arg2;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)reportCreateLiveFinalResultWith:(id)arg1 warnPage:(id)arg2;
- (unsigned long long)getReportFinalResultWith:(unsigned int)arg1;
- (void)reportSDKEnterRoomError:(id)arg1;
- (void)reportCreateLiveError:(id)arg1 stage:(int)arg2 errorType:(int)arg3;
- (void)reportJoinLiveError:(id)arg1 stage:(int)arg2 errorType:(int)arg3;
- (void)reportHeartBeatJoinLiveError:(id)arg1 stage:(int)arg2 errorType:(int)arg3;
- (void)reportCloseLiveError:(id)arg1 stage:(int)arg2 errorType:(int)arg3;
- (id)liveLogicDelegate;
- (void)setLiveLogicDelegate:(id)arg1;
- (BOOL)isLiveClosed;
- (void)setIsLiveClosed:(BOOL)arg1;
- (id)redPacketLogic;
- (void)setRedPacketLogic:(id)arg1;
- (id)screenSharingLogic;
- (void)setScreenSharingLogic:(id)arg1;
- (id)weAvatarLogic;
- (void)setWeAvatarLogic:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (BOOL)isKeyRequesting;
- (void)setIsKeyRequesting:(BOOL)arg1;
- (BOOL)isLiveJoined;
- (void)setIsLiveJoined:(BOOL)arg1;
- (BOOL)joinLiveAfterGetLiveMsgInvalid;
- (void)setJoinLiveAfterGetLiveMsgInvalid:(BOOL)arg1;
- (BOOL)hasOfflined;
- (void)setHasOfflined:(BOOL)arg1;
- (id)lastFinderLiveInfo;
- (void)setLastFinderLiveInfo:(id)arg1;
- (id)createLiveCGI;
- (void)setCreateLiveCGI:(id)arg1;
- (long long)currEntryScene;
- (void)setCurrEntryScene:(long long)arg1;
- (id)lastJumpGameInfoContent;
- (void)setLastJumpGameInfoContent:(id)arg1;
- (id)taggedRedPacketMessage;
- (void)setTaggedRedPacketMessage:(id)arg1;
- (unsigned long long)enableRewardAnchorStatusRequestSeq;
- (void)setEnableRewardAnchorStatusRequestSeq:(unsigned long long)arg1;
- (BOOL)isEnableRewardAnchorStatusRequesting;
- (void)setIsEnableRewardAnchorStatusRequesting:(BOOL)arg1;
- (double)lastEnableRewardAnchorStatusRequestResultTime;
- (void)setLastEnableRewardAnchorStatusRequestResultTime:(double)arg1;
- (unsigned long long)enableLikeAnchorStatusRequestSeq;
- (void)setEnableLikeAnchorStatusRequestSeq:(unsigned long long)arg1;
- (BOOL)isEnableLikeAnchorStatusRequesting;
- (void)setIsEnableLikeAnchorStatusRequesting:(BOOL)arg1;
- (double)lastEnableLikeAnchorStatusRequestResultTime;
- (void)setLastEnableLikeAnchorStatusRequestResultTime:(double)arg1;
- (id)ocrOp;
- (void)setOcrOp:(id)arg1;
- (id)appMsgInfoCacheLogic;
- (void)setAppMsgInfoCacheLogic:(id)arg1;
- (void).cxx_destruct;
@end

