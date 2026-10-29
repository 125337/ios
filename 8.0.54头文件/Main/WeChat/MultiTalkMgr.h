@interface MultiTalkMgr : MMUserService <MMKernelExt, MultitalkApiDelegate, IMsgExt, MultiTalkMainViewControllerDelegate, AVVideoDeviceSessionDelegate, AVVideoDeviceDelegate, AVVideoDataSource, MMViewCaptureDelegate, CNetworkStatusExt, MonoServiceMsgLogicDelegate, MonoServiceMsgDelegate, VoIPPushKitExt, IGroupMgrExt, IContactMgrExt, IMinimizeTaskDelegateInterface, AVVideoDeviceDelegate, WCAudioModuleDelegate, IlinkMultiTalkDelegate, AVAudioRouteManagerDelegate, MMServiceProtocol>
{
    char * cameraBuf; // +0x8
    int cameraBufSize; // +0x10
    BOOL _isMicrophoneOn; // +0x14
    BOOL _isSpeakerEnabled; // +0x15
    BOOL _isSpeakerOn; // +0x16
    BOOL _isCameraEnabled; // +0x17
    BOOL _isCameraOn; // +0x18
    BOOL _m_videoDeviceRunning; // +0x19
    BOOL _m_multiTalkReady; // +0x1a
    BOOL _m_isCalling; // +0x1b
    BOOL _m_deviceLaunchSuccess; // +0x1c
    BOOL _ilinkTalkReady; // +0x1d
    BOOL _isCameraSwitchingOn; // +0x1e
    BOOL _isScreenOn; // +0x1f
    BOOL _isScreenSwitchingOn; // +0x20
    BOOL _isScreenSharingTransition; // +0x21
    BOOL _isScreenPause; // +0x22
    BOOL _m_blockDisplayVideo; // +0x23
    BOOL _m_useLowQualityVideo; // +0x24
    BOOL _m_haveBigVideoSubscriber; // +0x25
    BOOL _isMinimizeMode; // +0x26
    BOOL _hasSetVirtualBackground; // +0x27
    unsigned int m_mUIInterruptCnt; // +0x28
    unsigned int _currentMessageId; // +0x2c
    unsigned int _m_uploadFpsCount; // +0x30
    unsigned int _m_nextCanJoinTalkTime; // +0x34
    unsigned int _m_nextCanCreateTalkTime; // +0x38
    int _lastSubscribeScreenMemberID; // +0x3c
    unsigned int _m_nextCanOpenCameraTime; // +0x40
    unsigned int _nextEnableTimeForCreateRoom; // +0x44
    unsigned int _nextEnableTimeForOpenCamera; // +0x48
    MultiTalkWindow * m_mainWindow; // +0x50
    unsigned long long m_mUIInterruptEndTime; // +0x58
    unsigned long long m_mUIInterruptBeginTime; // +0x60
    unsigned long long m_mTalkViewStartTime; // +0x68
    AVVideoDevice * _m_videoDevice; // +0x70
    SafeMutableDictionary * _m_renderDic; // +0x78
    SafeMutableDictionary * _m_videoInfoDic; // +0x80
    AVAudioPlayer * _m_audioPlayer; // +0x88
    RingBackSoundCoordinator * _ringCoordinator; // +0x90
    NSMutableDictionary * _memberInfoMutableDictionrary; // +0x98
    MMViewCapture * _viewCapture; // +0xa0
    long long _lastOrientationFromViewCapture; // +0xa8
    NSMutableDictionary * _validatingScreenSharingMapping; // +0xb0
    MMTimer * _m_uploadFpsTimer; // +0xb8
    NSMutableDictionary * _m_bannerInfoList; // +0xc0
    NSString * _m_talkingGroupId; // +0xc8
    NSMutableDictionary * _m_lastBannerTsList; // +0xd0
    NSMutableDictionary * _m_invitedFlagList; // +0xd8
    NSString * _m_lastSubscribeName; // +0xe0
    NSString * _lastSubscribeScreenUserName; // +0xe8
    MinimizeTaskData * _minimizeTaskData; // +0xf0
    MultitalkMiniInAppView * _minimizeView; // +0xf8
    VoipCheckAudioDeviceObj * _checkAudioDeviceObj; // +0x100
    MultiTalkMainViewController * _mainViewController; // +0x108
    NSRecursiveLock * _m_videoEncLock; // +0x110
    NSString * _reportVirtualBackgroundData; // +0x118
    NSString * _reportVirtualBackgroundHeader; // +0x120
    id /* block */ _resumeAfterInterruptionBlock; // +0x128
    AVAudioRouteManager * _audioRouteMgr; // +0x130
    id /* block */ _queryTalkingMembersBlock; // +0x138
    NSArray * _currentTalkingInfos; // +0x140
}
- (void)cancelQueryingTalkingMembers;
- (void)queryTalkingMembersContinually;
- (void)close;
- (void)minimize;
- (void)showCalleeRiskAlertWithUserNames:(id)arg1 isAll:(BOOL)arg2 isCreating:(BOOL)arg3;
- (void)clearResumeAfterInterruptionBlock;
- (void)broadcastCmdMsgData:(id)arg1 toSpecifyMemberIDs:(id)arg2;
- (void)broadcastInfoToSpecifyMemberIDs:(id)arg1;
- (void)updateMemberInfosByGroupInfo:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (id)genMultiTalkClientGroupId;
- (unsigned int)getNextEnableTimeForCreateRoom;
- (void)clearVideoDevice;
- (void)resetVideoDevice;
- (void)startVideoDevice;
- (void)stopVideoDevice;
- (void)uploadFpsCountCheck;
- (BOOL)canStartANewCall;
- (BOOL)isMultiTalkActive;
- (BOOL)isMultiTalkLocalCameraActive;
- (BOOL)isMultiTalkCalling;
- (BOOL)isMultiTalkConnected;
- (BOOL)isOutOfDate:(unsigned int)arg1;
- (BOOL)isMultiTalkValidWithWxGroupId:(id)arg1;
- (BOOL)isPhoneCalling;
- (id)getRenderForMemberId:(unsigned int)arg1;
- (BOOL)isSpeakerSupported;
- (BOOL)isUsingEarDevice;
- (id)getRenderForUsername:(id)arg1;
- (id)getTalkIngMember:(id)arg1;
- (id)getMemberQualityInfoList:(id)arg1;
- (int)engineDoMemberSelectForView:(id)arg1;
- (void)subscribeLargeVideoForUser:(id)arg1 isSharedScreenData:(BOOL)arg2 isCancel:(BOOL)arg3;
- (void)checkAndResubscribeLargeSharedScreenDataWithUserName:(id)arg1;
- (void)checkAndCancelSubscribeLargeSharedScreenDataWithGroupInfo:(id)arg1;
- (int)getMemberIdByUserName:(id)arg1;
- (BOOL)isUserSharingScreenWithUserMemberID:(int)arg1;
- (void)resubscribeLargeVideo;
- (void)joinMultiTalkWithGroup:(id)arg1 roomId:(unsigned long long)arg2 roomKey:(unsigned long long)arg3;
- (void)_joinMultiTalkWithGroup:(id)arg1 roomId:(unsigned long long)arg2 roomKey:(unsigned long long)arg3;
- (void)initVoipCheckAudioDeviceObj;
- (void)doCreateMultiTalkWithContacts:(id)arg1 withChatroomUsername:(id)arg2;
- (id)getMultiTalkWindow;
- (void)createMultiTalkWithContacts:(id)arg1 withChatroomUsername:(id)arg2;
- (unsigned long long)maxMultiTalkMemberCount;
- (void)setMicrophoneState:(BOOL)arg1;
- (void)setSpeakerState:(BOOL)arg1;
- (void)showlocalNetworkBadTips;
- (BOOL)canShareScreen;
- (BOOL)canDoodleWhenShareScreen;
- (BOOL)validateScreenSharingFileWithPath:(id)arg1;
- (void)_validateScreenSharingFileWithPath:(id)arg1 MD5:(id)arg2;
- (void)_handleValidateScreenSharingFileWithMD5:(id)arg1 ret:(int)arg2 fileStatus:(int)arg3;
- (void)onAuthOK;
- (void)onPreQuit;
- (void)writeLog:(int)arg1 tag:(id)arg2 content:(id)arg3;
- (void)rejectCall:(id)arg1;
- (void)playWhenEnterForeground;
- (void)playRingSoundWithVibration:(BOOL)arg1 isCaller:(BOOL)arg2;
- (void)stopRingSound;
- (int)inviteUserType:(id)arg1;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onInviteOrAcceptTimeout:(id)arg1;
- (void)confSDKOnRecvCmdMsg:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onMemberChange:(id)arg1;
- (void)onMemberChange:(id)arg1 withNewJoinedMembers:(id)arg2;
- (void)onMultiTalkReady;
- (void)onMuteStateChange:(BOOL)arg1;
- (void)onSpeakerStateChange:(BOOL)arg1;
- (void)onErr:(int)arg1 groupUserName:(id)arg2;
- (void)onCreateFailedDueToCallerRisk;
- (void)onCreateFailedDueToRequireVerification:(id)arg1;
- (void)onJoinFailedDueToCallerRisk;
- (void)onCreateUnsafelyDueToCalleeRiskWithUserNames:(id)arg1 isAll:(BOOL)arg2;
- (void)onReceiveConfCallWordingInfo:(id)arg1;
- (void)onRejectToCreateRoomForServerOverloadWithTimeInterval:(int)arg1;
- (void)onRejectToOpenCameraForServerOverloadWithTimeInterval:(int)arg1;
- (void)onAddMultiTalkMemberResult:(BOOL)arg1 errorType:(int)arg2 groupInfo:(id)arg3;
- (void)onAddMultiTalkMemberFailedDueToCallerRisk;
- (void)onAddMultiTalkMemberFailedDueToRiskWithUserNames:(id)arg1 groupInfo:(id)arg2 isAll:(BOOL)arg3;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onReceiveMutilTalkPokerMsg;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onReceiveSubscribeMemberChangeMsg:(int)arg1;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (void)OnVideoStateChange:(BOOL)arg1 VideoOn:(BOOL)arg2;
- (long long)getRemoteVideoOrientation:(int)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(BOOL)arg5 screenData:(BOOL)arg6;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(BOOL)arg5 screenData:(BOOL)arg6 format:(int)arg7;
- (void)onMultiTalkRedirectOk;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)arg1;
- (void)onSetMultiTalkScreenSharingStatus:(int)arg1 ScreenSharingStatus:(int)arg2;
- (void)onDoScreenSharingSecurityCheck:(int)arg1 checkStatus:(int)arg2 fileMd5:(id)arg3;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onMultiTalkBannerChange:(id)arg1;
- (void)onMultiTalkBannerChange:(id)arg1 WxGroupId:(id)arg2;
- (id)getMultiTalkUserNameListWithPrivacy:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (const char *)notifyInviteString;
- (const char *)notifyDataString;
- (const char *)notifyBannerString;
- (const char *)notFriendNotify;
- (const char *)notifyCancelInviteString;
- (CGRect)onMultiTalkMainViewControllerRequestMinimizeFrame;
- (void)onMultiTalkMainViewControllerQuitAnimationWillStart;
- (void)onMultiTalkMainViewControllerQuitAnimationDidEnd;
- (void)onMultiTalkMainViewControllerCloseCameraByInterrupt;
- (void)onMultiTalkMainViewControllerOpenCameraByInterrupt;
- (void)clearMultiTalkStatus;
- (void)onMultiTalkMainViewControllerCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerViewDidAppear;
- (void)onMultiTalkMainViewControllerCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkTipsViewResumeMainWindowFromBanner;
- (void)onMultiTalkMainViewControllerUpdateMessageWith:(id)arg1 duration:(unsigned int)arg2 messageId:(unsigned int)arg3;
- (void)onMultiTalkMainViewControllerReceiveCancelCall:(id)arg1;
- (void)onMultiTalkMainViewControllerHangupWithGroup:(id)arg1 isClickHangup:(BOOL)arg2 isNewIlink:(BOOL)arg3 isInviterQuitEarly:(BOOL)arg4;
- (void)onMultiTalkMainViewControllerAcceptWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerRejectWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerReceiveTimeOutWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerCancelJoinWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerSpeakerButtonSeclect:(BOOL)arg1;
- (void)onMultiTalkMainViewControllerMicButtonSeclect:(BOOL)arg1;
- (void)onMultiTalkMainViewControllerClickedCollapseButton;
- (void)onMultiTalkMainViewControllerSlipToCollapse:(id)arg1;
- (void)onMultiTalkMainViewControllerClickedCollapseButtonWithNotAnimation;
- (void)closeLocalCameraForServerEnableWithInterval:(int)arg1;
- (void)onMultiTalkMainViewControllerVideoSelected:(BOOL)arg1;
- (void)onMultiTalkMainViewControllerScreenSharingDidStartWithView:(id)arg1;
- (void)onMultiTalkMainViewControllerScreenSharingDidStop;
- (void)onMultiTalkMainViewControllerScreenSharingDidPause;
- (void)onMultiTalkMainViewControllerScreenSharingDidResume;
- (unsigned int)getShareScreenStatus;
- (void)onMultiTalkMainViewControllerScreenSharingPresentationWillTransition;
- (void)onMultiTalkMainViewControllerScreenSharingPresentationDidTransition;
- (void)onMultiTalkMainViewControllerAddNewMemberArray:(id)arg1 withGroup:(id)arg2;
- (BOOL)onMultiTalkMainViewControllerRequestLocalVideoDeviceStatus;
- (BOOL)onMultiTalkMainViewControllerShouldBlockReceiveVideo;
- (void)onMultiTalkMainViewControllerFlipCamera;
- (void)onMultiTalkMainViewControllerResubscribe;
- (void)onMultiTalkMainViewControllerCloseVideoSendAndRecv;
- (void)onMultiTalkMainViewControllerRecoverVideoOn:(BOOL)arg1 screenStatus:(unsigned int)arg2;
- (void)onMultiTalkMainViewControllerResumeMultiTalkAudio;
- (void)onMultiTalkMainViewControllerHoldMultiTalkAudio;
- (id)getLowVersionMembers;
- (unsigned long long)getStartTalkingTime;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionRecvFirstFrame;
- (void)onVideoSessionStopComplete;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDevice:(id)arg1 didChangeRotation:(int)arg2;
- (void)videoDevice:(id)arg1 didOutputPixelBuffer:(__CVBuffer *)arg2;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 frmIndex:(unsigned long long)arg3 imageWidth:(unsigned int)arg4 imageHeight:(unsigned int)arg5 rgbaTexture:(id)arg6;
- (int)GetFrmType;
- (BOOL)isLowNetwork;
- (BOOL)checkUnReachableWithNotify:(BOOL)arg1;
- (BOOL)checkWiFiWithNotify:(BOOL)arg1;
- (BOOL)checkHighWWanWithNotify:(BOOL)arg1;
- (BOOL)checkLowNetworkWithNotify:(BOOL)arg1;
- (void)updateNetworkTacticsWithNotify:(BOOL)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onSimCardNetTypeChange;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleDidRemoveFromInterruptList:(id)arg1;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (void)_onMonoServiceMsgStartWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (BOOL)onMonoServiceMsgHoldWithMsg:(id)arg1;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)showMultiTalkBanner:(BOOL)arg1 group:(id)arg2 roomId:(unsigned long long)arg3 roomKey:(unsigned long long)arg4;
- (BOOL)insertMultiTalkBannerItem:(id)arg1;
- (BOOL)deleteMultiTalkBannerItemWithGroupId:(id)arg1;
- (id)getMultiTalkBannerItemWithGroupId:(id)arg1;
- (void)loadMultiTalkBannerInfoList;
- (id)getCurrentTalkingGroupId;
- (BOOL)isMultiTalkMinimized;
- (void)quitMultiTalkAndClearBannerInfoWithGroupName:(id)arg1;
- (void)OnQuitGroup:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (id)getCurrentRoomBanner;
- (unsigned long long)getCurrentRoomKey;
- (unsigned long long)getCurrentRoomID;
- (id)getMinimizeTaskData;
- (id)getMinimizeTaskKey;
- (void)createMinimizeView;
- (id)getMultiTalkMinimizeView;
- (void)updateMinimizeViewFromSize:(CGSize)arg1 toSize:(CGSize)arg2;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onContainerSizeDidChange:(id)arg1 fromSize:(CGSize)arg2 toSize:(CGSize)arg3;
- (void)renewViewCapture;
- (void)clearViewCapture;
- (void)startViewCaptureWithView:(id)arg1;
- (void)stopViewCapture;
- (void)pauseViewCapture;
- (void)resumeViewCapture;
- (void)viewCapture:(id)arg1 didCaptureImageContext:(CGContext *)arg2 orientation:(long long)arg3;
- (void)didCaptureViewWithVideoBuffer:(CGContext *)arg1 orientation:(long long)arg2;
- (int)valueFromScreenSharingOrientation:(long long)arg1;
- (void)reportMultiTalkVoipIncomingCallLogWithActionCode:(unsigned int)arg1;
- (void)notifyWithData:(id)arg1;
- (unsigned long long)getInterrupEndTimeStamp;
- (unsigned long long)getInterrupBeginTimeStamp;
- (unsigned int)getInterrupCnt;
- (unsigned long long)getTalkViewStartTime;
- (void)videoDevice:(id)arg1 updateFilterSetting:(id)arg2 fromABTest:(BOOL)arg3;
- (void)reportVirtualBackgroundWithtimeStamp:(id)arg1 endCall:(BOOL)arg2;
- (void)setVirtualBackground:(BOOL)arg1 isFront:(BOOL)arg2;
- (void)addReportVirtualBackgroundData:(id)arg1;
- (int)ilinkDoCreateMultiTalk:(id)arg1 isAudio:(BOOL)arg2;
- (BOOL)getIfThisTalkIlink;
- (void)receiverOpenUIAfterAckSuccess:(BOOL)arg1;
- (void)receiverCanStartCamera;
- (void)ilinkDidEnd;
- (BOOL)isCameraFront;
- (void)onIlinkInviteMultiTalk:(id)arg1;
- (void)onIlinkChangeToMultiTalk:(id)arg1 confSDKMemberMgr:(id)arg2 isMicMute:(BOOL)arg3 isSpeakerOn:(BOOL)arg4 localVideoClosed:(BOOL)arg5 remoteVideoClosed:(BOOL)arg6;
- (void)showToastOnMultiTalkVC:(id)arg1;
- (void)hangupMultiTalkByCallEnd;
- (id)settingPortType;
- (BOOL)hasExtenalOutput;
- (id)curOutputPort;
- (id)getSpeakerBtnText:(id)arg1;
- (void)changeAudioToPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)multiTalkRestartDeviceForFail;
- (void)multiTalkAudioDeviceStartedSuccess;
- (void)updatePortWithReasonValue:(unsigned long long)arg1 prevPort:(id)arg2;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)notifyAudioDeviceChange;
- (id)m_mainWindow;
- (void)setM_mainWindow:(id)arg1;
- (unsigned long long)m_mUIInterruptEndTime;
- (void)setM_mUIInterruptEndTime:(unsigned long long)arg1;
- (unsigned long long)m_mUIInterruptBeginTime;
- (void)setM_mUIInterruptBeginTime:(unsigned long long)arg1;
- (unsigned int)m_mUIInterruptCnt;
- (void)setM_mUIInterruptCnt:(unsigned int)arg1;
- (unsigned long long)m_mTalkViewStartTime;
- (void)setM_mTalkViewStartTime:(unsigned long long)arg1;
- (BOOL)isMicrophoneOn;
- (void)setIsMicrophoneOn:(BOOL)arg1;
- (BOOL)isSpeakerEnabled;
- (void)setIsSpeakerEnabled:(BOOL)arg1;
- (BOOL)isSpeakerOn;
- (void)setIsSpeakerOn:(BOOL)arg1;
- (BOOL)isCameraEnabled;
- (void)setIsCameraEnabled:(BOOL)arg1;
- (BOOL)isCameraOn;
- (void)setIsCameraOn:(BOOL)arg1;
- (id)m_videoDevice;
- (void)setM_videoDevice:(id)arg1;
- (id)m_renderDic;
- (void)setM_renderDic:(id)arg1;
- (id)m_videoInfoDic;
- (void)setM_videoInfoDic:(id)arg1;
- (BOOL)m_videoDeviceRunning;
- (void)setM_videoDeviceRunning:(BOOL)arg1;
- (id)m_audioPlayer;
- (void)setM_audioPlayer:(id)arg1;
- (id)ringCoordinator;
- (void)setRingCoordinator:(id)arg1;
- (id)memberInfoMutableDictionrary;
- (void)setMemberInfoMutableDictionrary:(id)arg1;
- (id)viewCapture;
- (void)setViewCapture:(id)arg1;
- (long long)lastOrientationFromViewCapture;
- (void)setLastOrientationFromViewCapture:(long long)arg1;
- (unsigned int)currentMessageId;
- (void)setCurrentMessageId:(unsigned int)arg1;
- (BOOL)m_multiTalkReady;
- (void)setM_multiTalkReady:(BOOL)arg1;
- (BOOL)m_isCalling;
- (void)setM_isCalling:(BOOL)arg1;
- (BOOL)m_deviceLaunchSuccess;
- (void)setM_deviceLaunchSuccess:(BOOL)arg1;
- (BOOL)ilinkTalkReady;
- (void)setIlinkTalkReady:(BOOL)arg1;
- (BOOL)isCameraSwitchingOn;
- (void)setIsCameraSwitchingOn:(BOOL)arg1;
- (BOOL)isScreenOn;
- (void)setIsScreenOn:(BOOL)arg1;
- (BOOL)isScreenSwitchingOn;
- (void)setIsScreenSwitchingOn:(BOOL)arg1;
- (BOOL)isScreenSharingTransition;
- (void)setIsScreenSharingTransition:(BOOL)arg1;
- (BOOL)isScreenPause;
- (void)setIsScreenPause:(BOOL)arg1;
- (id)validatingScreenSharingMapping;
- (void)setValidatingScreenSharingMapping:(id)arg1;
- (unsigned int)m_uploadFpsCount;
- (void)setM_uploadFpsCount:(unsigned int)arg1;
- (id)m_uploadFpsTimer;
- (void)setM_uploadFpsTimer:(id)arg1;
- (BOOL)m_blockDisplayVideo;
- (void)setM_blockDisplayVideo:(BOOL)arg1;
- (BOOL)m_useLowQualityVideo;
- (void)setM_useLowQualityVideo:(BOOL)arg1;
- (id)m_bannerInfoList;
- (void)setM_bannerInfoList:(id)arg1;
- (id)m_talkingGroupId;
- (void)setM_talkingGroupId:(id)arg1;
- (id)m_lastBannerTsList;
- (void)setM_lastBannerTsList:(id)arg1;
- (id)m_invitedFlagList;
- (void)setM_invitedFlagList:(id)arg1;
- (unsigned int)m_nextCanJoinTalkTime;
- (void)setM_nextCanJoinTalkTime:(unsigned int)arg1;
- (unsigned int)m_nextCanCreateTalkTime;
- (void)setM_nextCanCreateTalkTime:(unsigned int)arg1;
- (BOOL)m_haveBigVideoSubscriber;
- (void)setM_haveBigVideoSubscriber:(BOOL)arg1;
- (id)m_lastSubscribeName;
- (void)setM_lastSubscribeName:(id)arg1;
- (id)lastSubscribeScreenUserName;
- (void)setLastSubscribeScreenUserName:(id)arg1;
- (int)lastSubscribeScreenMemberID;
- (void)setLastSubscribeScreenMemberID:(int)arg1;
- (unsigned int)m_nextCanOpenCameraTime;
- (void)setM_nextCanOpenCameraTime:(unsigned int)arg1;
- (id)minimizeTaskData;
- (void)setMinimizeTaskData:(id)arg1;
- (id)minimizeView;
- (void)setMinimizeView:(id)arg1;
- (BOOL)isMinimizeMode;
- (void)setIsMinimizeMode:(BOOL)arg1;
- (id)checkAudioDeviceObj;
- (void)setCheckAudioDeviceObj:(id)arg1;
- (id)mainViewController;
- (void)setMainViewController:(id)arg1;
- (id)m_videoEncLock;
- (void)setM_videoEncLock:(id)arg1;
- (unsigned int)nextEnableTimeForCreateRoom;
- (void)setNextEnableTimeForCreateRoom:(unsigned int)arg1;
- (unsigned int)nextEnableTimeForOpenCamera;
- (void)setNextEnableTimeForOpenCamera:(unsigned int)arg1;
- (id)reportVirtualBackgroundData;
- (void)setReportVirtualBackgroundData:(id)arg1;
- (BOOL)hasSetVirtualBackground;
- (void)setHasSetVirtualBackground:(BOOL)arg1;
- (id)reportVirtualBackgroundHeader;
- (void)setReportVirtualBackgroundHeader:(id)arg1;
- (id /* block */)resumeAfterInterruptionBlock;
- (void)setResumeAfterInterruptionBlock:(id /* block */)arg1;
- (id)audioRouteMgr;
- (void)setAudioRouteMgr:(id)arg1;
- (id /* block */)queryTalkingMembersBlock;
- (void)setQueryTalkingMembersBlock:(id /* block */)arg1;
- (id)currentTalkingInfos;
- (void)setCurrentTalkingInfos:(id)arg1;
- (void).cxx_destruct;
@end

