@interface VoIPMPScreenProjectLifecycle : MMUserService <VoIPPIPServiceExt, VoIPMPScreenProjectLifecycleExt, MMConfSDKServiceExtension, VoIPConfSDKServiceExtension, MMServiceProtocol>
{
    BOOL _hasReportedBackground; // +0x8
    BOOL _hasReportedPip; // +0x9
    BOOL _hasHandledFlutterPageDismiss; // +0xa
    BOOL _isRemoteViewingMode; // +0xb
    BOOL _isOpeningRemoteViewingPage; // +0xc
    BOOL _isIlinkMode; // +0xd
    BOOL _screenProjectUsesVoIPConfSDKService; // +0xe
    BOOL _didUnhideCallWindowForPIP; // +0xf
    BOOL _pipDidRestoreFullscreen; // +0x10
    int _remoteViewingMemberId; // +0x14
    VoIPMPScreenProjectReporter * _reporter; // +0x18
    VoipmpCoreNativeController * _nativeController; // +0x20
    VoipmpCoreUIController * _uiController; // +0x28
    VoIPMPScreenProjectUIController * _uiControllerImpl; // +0x30
    MMFlutterInstance * _flutterInstance; // +0x38
    VoIPMPScreenProjectPlugin * _plugin; // +0x40
    MMConfSDKMemberMgr * _currentMemberMgr; // +0x48
    VoIPMPScreenProjectFlutterViewController * _screenProjectViewController; // +0x50
    VoIPMPScreenProjectWindow * _screenProjectWindow; // +0x58
    VoIPMPScreenProjectMiniCoordinator * _miniCoordinator; // +0x60
    VoIPMPScreenProjectPIPCoordinator * _pipCoordinator; // +0x68
    NSDictionary * _currentScreenProjectPageArguments; // +0x70
    unsigned long long _screenProjectRoomId; // +0x78
    long long _initialScreenProjectSecuritySeq; // +0x80
    id /* block */ _pendingInitialScreenProjectStartConfirmedBlock; // +0x88
    long long _pendingInitialScreenProjectStartSeq; // +0x90
    WeToast * _initialScreenProjectLoadingToast; // +0x98
}
+ (BOOL)isNewScreenProjectEnable;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)reporter;
- (void)initializeWithMemberMgr:(id)arg1 completion:(id /* block */)arg2;
- (void)initializeForIlinkWithCanShowAddMemberIcon:(BOOL)arg1 remoteCanShowAddMemberIcon:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)preparePluginForMemberMgr:(id)arg1 isIlinkMode:(BOOL)arg2 canShowAddMemberIcon:(BOOL)arg3 remoteCanShowAddMemberIcon:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)cleanup;
- (void)injectInitialMembers;
- (void)syncTalkingStateToCppWithMemberMgr:(id)arg1 isIlinkMode:(BOOL)arg2 canShowAddMemberIcon:(BOOL)arg3 remoteCanShowAddMemberIcon:(BOOL)arg4;
- (id)groupIdForMemberMgr:(id)arg1 isIlinkMode:(BOOL)arg2;
- (int)roomTypeForIlinkMode:(BOOL)arg1;
- (int)roomRoleForIlinkMode:(BOOL)arg1;
- (BOOL)isVideoOnForMember:(id)arg1 selfUsername:(id)arg2 isIlinkMode:(BOOL)arg3;
- (int)selfMemberIdForMemberMgr:(id)arg1;
- (void)mmConfSDKServiceOnReceiveEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 ret:(id)arg4 roomId:(unsigned long long)arg5;
- (void)voIPConfSDKServiceOnReceiveEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 ret:(id)arg4 roomId:(unsigned long long)arg5;
- (void)handleConfEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 roomId:(unsigned long long)arg4 fromVoIPConfSDKService:(BOOL)arg5;
- (void)forwardVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6 isScreenStream:(BOOL)arg7;
- (void)forwardLocalPreviewPixelBuffer:(__CVBuffer *)arg1 memberId:(int)arg2 rotate:(int)arg3;
- (void)openScreenProjectPage:(id)arg1;
- (void)openRemoteScreenProjectPage:(id)arg1 memberId:(int)arg2 renderId:(long long)arg3;
- (void)openRemoteScreenProjectPage:(id)arg1 memberId:(int)arg2 renderId:(long long)arg3 pushAnimation:(BOOL)arg4;
- (void)startRemoteViewingWithMemberMgr:(id)arg1 fromViewController:(id)arg2 memberId:(int)arg3;
- (void)stopRemoteViewingIfNeeded;
- (BOOL)isRemoteViewingActive;
- (BOOL)isRestoringExistingScreenProjectPage;
- (BOOL)canStartNewScreenProjectForReason:(id)arg1;
- (void)abortNewScreenProjectOpeningForReason:(id)arg1 cleanup:(BOOL)arg2;
- (id)screenProjectArgumentsByAddingFeatureFlag:(id)arg1;
- (id)normalizedBlockMd5SetFromList:(id)arg1;
- (id)debugMockInitialSecurityBlockMd5ListFromArguments:(id)arg1;
- (id)screenProjectArgumentsByFilteringBlockedMd5List:(id)arg1 arguments:(id)arg2;
- (void)openScreenProjectPage:(id)arg1 withArguments:(id)arg2;
- (void)openScreenProjectPage:(id)arg1 withArguments:(id)arg2 pushAnimation:(BOOL)arg3;
- (void)hideUnderlyingCallWindowIfNeeded;
- (void)restoreUnderlyingCallWindowIfNeeded;
- (void)showScreenProjectPageOnIndependentWindowWithPushAnimation:(BOOL)arg1;
- (void)openScreenProjectPageForFile:(id)arg1;
- (void)openScreenProjectPageForMedia:(id)arg1;
- (id)securityItemDataListFromArguments:(id)arg1 fallbackMd5:(id *)arg2 typeSummary:(id *)arg3;
- (int)screenProjectSubVideoTypeFromArguments:(id)arg1;
- (BOOL)isSelfScreenProjectStarted;
- (void)showInitialScreenProjectLoadingFromViewController:(id)arg1;
- (void)stopInitialScreenProjectLoading;
- (void)clearPendingInitialScreenProjectStartObserverForSeq:(long long)arg1 reason:(id)arg2;
- (void)notifyInitialScreenProjectStartIfNeededForReason:(id)arg1;
- (void)notifyScreenProjectMemberScreenStatusUpdated;
- (void)presentInitialScreenProjectPageWhenReady:(id)arg1 arguments:(id)arg2 deadline:(id)arg3;
- (void)presentInitialSecurityCheckedScreenProjectPage:(id)arg1 arguments:(id)arg2 status:(id)arg3 seq:(long long)arg4;
- (void)showInitialSecurityRejectToast;
- (void)showInitialScreenProjectStartFailedToast;
- (void)showInitialSecurityRejectAlert;
- (void)handleInitialSecurityRejectBeforePresentForSeq:(long long)arg1;
- (void)handleInitialSecurityLateRejectForSeq:(long long)arg1;
- (void)notifyScreenProjectPartialBlockWithMd5List:(id)arg1;
- (void)stopInitialScreenProjectStartForSeq:(long long)arg1 reason:(id)arg2;
- (void)handleInitialScreenProjectStartFailedForSeq:(long long)arg1 reason:(id)arg2;
- (void)subscribeInitialScreenProjectStartFromViewController:(id)arg1 arguments:(id)arg2 status:(id)arg3 seq:(long long)arg4;
- (void)startInitialScreenProjectAndPresentWhenConfirmedFromViewController:(id)arg1 arguments:(id)arg2 status:(id)arg3 seq:(long long)arg4;
- (void)startInitialSecurityCheckFromViewController:(id)arg1 arguments:(id)arg2 source:(id)arg3;
- (void)presentScreenProjectPageWhenReady:(id)arg1 arguments:(id)arg2;
- (void)onFlutterScreenProjectPageDismissed;
- (void)dismissScreenProjectPageForFlutterFinish;
- (void)dismissScreenProjectPageForFlutterFinishWithCompletion:(id /* block */)arg1;
- (void)dismissScreenProjectPageForMiniWindowWithCompletion:(id /* block */)arg1;
- (void)restoreScreenProjectPageAfterMiniWindowIfNeededFromViewController:(id)arg1;
- (void)_handleRestoreFallbackFromViewController:(id)arg1;
- (void)UIManagerDidExtendWindow;
- (BOOL)hasActiveScreenProjectStateForExclusion;
- (void)forceCleanupScreenProjectStateForReason:(id)arg1;
- (void)VoIPPIPServiceWillStartPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceEnterForeground:(BOOL)arg1;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)reportScreenProjectBackground:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_clearPIPFrameCallback;
- (BOOL)_canTransitionScreenProjectToPIP;
- (BOOL)_transitionScreenProjectToPIPIfNeeded;
- (void)dismissScreenProjectPageForCallHangupWithCompletion:(id /* block */)arg1;
- (BOOL)prepareMigrateScreenProjectPageToMultiTalkWithMemberMgr:(id)arg1;
- (void)consumePendingMigrationOnFromVC:(id)arg1;
- (BOOL)isScreenProjectFullscreenActive;
- (void)presentScreenProjectPageOnNewFromVC:(id)arg1;
- (void)forceCleanupScreenProjectState;
- (void)setReporter:(id)arg1;
- (id)nativeController;
- (void)setNativeController:(id)arg1;
- (id)uiController;
- (void)setUiController:(id)arg1;
- (id)uiControllerImpl;
- (void)setUiControllerImpl:(id)arg1;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (BOOL)hasReportedBackground;
- (void)setHasReportedBackground:(BOOL)arg1;
- (BOOL)hasReportedPip;
- (void)setHasReportedPip:(BOOL)arg1;
- (id)currentMemberMgr;
- (void)setCurrentMemberMgr:(id)arg1;
- (id)screenProjectViewController;
- (void)setScreenProjectViewController:(id)arg1;
- (id)screenProjectWindow;
- (void)setScreenProjectWindow:(id)arg1;
- (id)miniCoordinator;
- (void)setMiniCoordinator:(id)arg1;
- (id)pipCoordinator;
- (void)setPipCoordinator:(id)arg1;
- (id)currentScreenProjectPageArguments;
- (void)setCurrentScreenProjectPageArguments:(id)arg1;
- (BOOL)hasHandledFlutterPageDismiss;
- (void)setHasHandledFlutterPageDismiss:(BOOL)arg1;
- (BOOL)isRemoteViewingMode;
- (void)setIsRemoteViewingMode:(BOOL)arg1;
- (int)remoteViewingMemberId;
- (void)setRemoteViewingMemberId:(int)arg1;
- (BOOL)isOpeningRemoteViewingPage;
- (void)setIsOpeningRemoteViewingPage:(BOOL)arg1;
- (BOOL)isIlinkMode;
- (void)setIsIlinkMode:(BOOL)arg1;
- (unsigned long long)screenProjectRoomId;
- (void)setScreenProjectRoomId:(unsigned long long)arg1;
- (BOOL)screenProjectUsesVoIPConfSDKService;
- (void)setScreenProjectUsesVoIPConfSDKService:(BOOL)arg1;
- (long long)initialScreenProjectSecuritySeq;
- (void)setInitialScreenProjectSecuritySeq:(long long)arg1;
- (id /* block */)pendingInitialScreenProjectStartConfirmedBlock;
- (void)setPendingInitialScreenProjectStartConfirmedBlock:(id /* block */)arg1;
- (long long)pendingInitialScreenProjectStartSeq;
- (void)setPendingInitialScreenProjectStartSeq:(long long)arg1;
- (id)initialScreenProjectLoadingToast;
- (void)setInitialScreenProjectLoadingToast:(id)arg1;
- (BOOL)didUnhideCallWindowForPIP;
- (void)setDidUnhideCallWindowForPIP:(BOOL)arg1;
- (BOOL)pipDidRestoreFullscreen;
- (void)setPipDidRestoreFullscreen:(BOOL)arg1;
- (void).cxx_destruct;
@end
