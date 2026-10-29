@interface MMMusicViewController : MMUIViewController <MMMusicAlbumRtnExt, MMMusicLyricsRtnExt, MMMusicLiveViewControllerDelegate, MMMusicMVEditorViewControllerDelegate, MMMusicMVPlayerBgViewDelegate, MMMusicLiveCGIMgrDelegate, MMMusicLiveCommentLikeOperationHandler, WCActionSheetDelegate, MMMusicViewSharingTransitionAdaptedViewController, IMusicMVPostDataServiceExt, WCFinderCommentDetailViewControllerDelegate, WCFinderFeedContentVMExt, MMMusicMVRecommendViewControllerDataSource, WCFinderDataItemExt, MMMVPlayerDelegate, MMMusicMVSwitchNewAnimatorDelegate, UIGestureRecognizerDelegate, MusicLinkServiceExtension, WCCommentDetailViewControllerDelegate, MMMusicVCCacheMgrProtocol>
{
    unsigned int m_uiCreateTime; // +0x68
    BOOL m_hasPushedSystemInfo; // +0x6c
    unsigned int m_currentAudienceCount; // +0x70
    MMMusicLiveCGIMgr * _cgiMgr; // +0x78
    BOOL m_isSliding; // +0x80
    double m_curMusicTimeInMs; // +0x88
    double m_curMusicTimeInMsWhenBeginDragging; // +0x90
    MMMusicVCOpenParams * _openParams; // +0x98
    BOOL _bResumeMusicAfterBackFrom3rdApp; // +0xa0
    MMMusicLiveBaseMsg * _tappedBaseMsg; // +0xa8
    BOOL _bAppear; // +0xb0
    BOOL _isLoadingRecommendedModels; // +0xb1
    WCFinderFeedContentVM * _commentFinderFeedContentVM; // +0xb8
    double _pauseAtPosWhenAppearInNestingFeature; // +0xc0
    UIPanGestureRecognizer * _switchMvGes; // +0xc8
    MMMusicMVSwitchNewAnimator * _switchAnimator; // +0xd0
    BOOL _isModelSwitchAnimating; // +0xd8
    BOOL _hasRequestedDataForEmptyMV; // +0xd9
    BOOL _hasRequestedPermissionAndJoin; // +0xda
    BOOL _hasRequestedDataAfterModelRequested; // +0xdb
    BOOL _hasFinishedMVModelRequest; // +0xdc
    BOOL _isOpeningCommentList; // +0xdd
    BOOL _hasGetSongStatusResponse; // +0xde
    BOOL _reqGetLyricFailOrTimeout; // +0xdf
    BOOL _hasRequestDurationRequiredData; // +0xe0
    BOOL _hasPouredMusicFeedStart; // +0xe1
    BOOL _hasRequestedGetBeatTrack; // +0xe2
    BOOL _markedVideoOffsetDirty; // +0xe3
    BOOL _wasConsumedEditor; // +0xe4
    BOOL _wasConsumedComment; // +0xe5
    BOOL _wasConsumedSlider; // +0xe6
    BOOL _notFirstReload; // +0xe7
    BOOL _isDragOrClickLyrics; // +0xe8
    BOOL _pausedManually; // +0xe9
    BOOL _isMinimized; // +0xea
    MMMusicInfo * _musicInfo; // +0xf0
    MinimizeNewTransitionController * _transitionController; // +0xf8
    NSString * _chatRoomSongId; // +0x100
    NSString * _songId; // +0x108
    UIViewController * _currentTopViewController; // +0x110
    NSMutableArray * _recommendedModels; // +0x118
    MMMusicLiveViewController * _liveViewController; // +0x120
    MMMusicMVEditorViewController * _editorViewController; // +0x128
    NSString * _curVideoUsrName; // +0x130
    MusicLiveGetSongStatusResp * _songStatusResponse; // +0x138
    NSString * _listenGetLyricResponseLyric; // +0x140
    NSMutableArray * _onlineCountInfos; // +0x148
    double _lastStartRecordOnlineCountTimestamp; // +0x150
    unsigned long long _maxOnlineCount; // +0x158
    unsigned long long _minOnlineCount; // +0x160
    double _lastTotalDuration; // +0x168
    double _lastStartTimestamp; // +0x170
    unsigned long long _clickCommentCount; // +0x178
    double _lastMVTotalDuration; // +0x180
    double _lastMVStartTimestamp; // +0x188
    unsigned long long _clickProfileCount; // +0x190
    unsigned long long _clickQuoteProfileCount; // +0x198
    unsigned long long _stopMusicCount; // +0x1a0
    unsigned long long _enterLyricsPageCount; // +0x1a8
    double _lyricsPageDuration; // +0x1b0
    double _lyricsPageStartTimestamp; // +0x1b8
    MMMVPlayer * _mvPlayer; // +0x1c0
    MMMusicMVRecommendViewController * _mvRecommendViewController; // +0x1c8
    UIView * _swipeAnimationToView; // +0x1d0
    long long _loopCount; // +0x1d8
    WCCommentObject * _commentObject; // +0x1e0
    id <MusicInteractionStatistics> _interactionStatistics; // +0x1e8
    unsigned long long _commentFetchSteps; // +0x1f0
    MusicLiveCheckPermissionResp * _checkPermissionResponse; // +0x1f8
    unsigned long long _interactionTarget; // +0x200
    NSArray * _getBeatTrackRespArrTrackItem; // +0x208
    NSArray * _getBeatTrackRespArrFlexBasicClipTrackItem; // +0x210
    NSString * _taskBizKey; // +0x218
    unsigned long long _exitType; // +0x220
}
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)handleMVEditorViewControllerCreatedMVFinished:(id)arg1 isDraft:(BOOL)arg2 fromOpenParams:(id)arg3;
- (void)transitToLiveViewController;
- (void)presentEditorViewControllerFromScene:(unsigned long long)arg1;
- (id)defaultTransitionAnimator;
- (void)setupLiveViewControllerIfNeeded;
- (void)transitToViewController:(id)arg1 animator:(id)arg2 beforeTransition:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)hideOrShowVisibleCellVideoPlayerView:(BOOL)arg1;
- (id)sessionID;
- (void)dealloc;
- (id)initWithOpenParams:(id)arg1;
- (double)totalDuration;
- (double)mvTotalDuration;
- (unsigned int)musicDurationInMs;
- (void)onStatEnterMVPlayer:(BOOL)arg1;
- (void)onStatExitMVPlayer;
- (void)viewDidLoad;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)initView;
- (void)initData;
- (BOOL)useTransparentNavibar;
- (void)playCurMusicWhenAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)handleErrorState:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)MVPlayer:(id)arg1 didUpdateEpisodeIndexFrom:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)MVPlayer:(id)arg1 onMusicDurationAvailable:(double)arg2;
- (BOOL)mvPlayerShouldPlayVideo:(id)arg1;
- (void)reqCheckPermissionAndJoin;
- (void)reqDataForEmptyMV;
- (double)currentMusicTimeOffsetInMs;
- (void)musicMVPlayerWillBeginDragging;
- (void)reqDataAfterGetMVModel;
- (BOOL)MVPlayer:(id)arg1 shouldForbidSetupLyricServiceWithSongid:(id)arg2;
- (void)MVPlayer:(id)arg1 onMusicProgressUpdate:(double)arg2 totalDuration:(double)arg3;
- (void)musicLinkService:(id)arg1 didGetLinkWithResults:(id)arg2;
- (void)musicLinkService:(id)arg1 onAudioTypeChangedWithpreviousInfo:(id)arg2 updatedInfo:(id)arg3;
- (void)startPlayWithModel:(id)arg1;
- (id)mvPlayer;
- (void)musicMVPlayerWillDisplayEpisodeView:(id)arg1 ofIndex:(unsigned long long)arg2;
- (void)muiscMVPlayerOnTryPostVideo;
- (void)musicMVPlayerOnVideoTogglePostOperation;
- (void)musicMVPlayerOnTappedVideo;
- (void)musicMVPlayerOnVideoToggleJumpFinderProfileOperation:(id)arg1;
- (void)musicMVPlayerOnClickMVNickname;
- (void)musicMVPlayerOnClickMVHeadImg;
- (void)pushFinderProfileWithUsername:(id)arg1;
- (BOOL)isEnterFromFinder;
- (void)onAuthorInfoViewClickMVAvatar;
- (void)onAuthorInfoViewClickMVNickName;
- (void)onAuthorInfoViewClickFinderHitLabel;
- (void)onAuthorInfoViewClickSwitch;
- (id)onLiveVCGetMusicShareItem;
- (BOOL)onShouldMenuShowComplain;
- (void)musicMVPlayerOnLikeOperation;
- (void)musicMVPlayerOnLikeWithGestureRecognizer:(id)arg1 inView:(id)arg2;
- (void)musicMVPlayerOnLongPress;
- (void)onClickOpenRecommendedMVList;
- (void)musicMVPlayerOnShowBufferingView;
- (void)musicMVPlayerOnHideBufferingView;
- (void)onPageScroll;
- (void)OnGetLyrics:(id)arg1 Lyrics:(id)arg2;
- (int)getFavSourceType;
- (void)onLiveVCMusicSliderProgressChanged:(double)arg1 isSliding:(BOOL)arg2;
- (void)onLiveVCMusicSliderDidSeek:(double)arg1;
- (void)onLiveVCMusicPause:(double)arg1;
- (void)onLiveVCMusicResume:(double)arg1;
- (void)onClickCreateMV:(unsigned long long)arg1;
- (void)onClickClearContent;
- (void)onClickDeleteMV;
- (void)onClickRetryPostMV;
- (void)openCommentListWithRefCommentID:(unsigned long long)arg1;
- (void)openCommonCommentListWithRefCommentId:(unsigned long long)arg1 commentObject:(id)arg2;
- (void)openCommonCommentList;
- (id)uniCommentOrLikeByPassBuffer;
- (void)onClickComment;
- (void)onToggleLikeMVStatus;
- (void)reportLikeEntity:(BOOL)arg1 isFromDoubleTap:(BOOL)arg2;
- (id)mvOperationUrlForStatistics;
- (void)onOpen3rdMusicAppWithType:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)onOpenStatusSettingWithSource:(unsigned long long)arg1;
- (void)onOpenMusicInfo;
- (void)onClickAudioTypeButton:(id)arg1;
- (void)onJumpMusician:(id)arg1;
- (void)onShareToWcWithSource:(unsigned long long)arg1;
- (void)onLiveVCAddFavWithSource:(unsigned long long)arg1;
- (void)onShareToFriends:(id)arg1 withSource:(unsigned long long)arg2;
- (void)onLiveVCSendCommentWithContent:(id)arg1;
- (void)onLiveVCSendCommentWithLocation:(id)arg1;
- (void)onLiveVCTransitToMVWithMsg:(id)arg1;
- (void)onShareActionSuccess;
- (void)onDeleteMVExposed;
- (void)onEnterLyricsPage;
- (void)onExitLyricsPage:(BOOL)arg1;
- (void)onClickLyricsViewAlbum:(BOOL)arg1;
- (void)onSlideLyricsViewAlbum:(BOOL)arg1;
- (void)onSlideLyricsPanel:(BOOL)arg1;
- (void)onLiveRoomLongPressAndCopy:(id)arg1;
- (void)onLiveRoomLongPressAndExpose:(id)arg1;
- (void)onLiveRoomClickLocation:(id)arg1;
- (void)onClickClose;
- (void)onClickMinimize;
- (BOOL)forbidShowMinimizeWhenExitVC;
- (void)onGetBeatTrackIfNeed;
- (unsigned long long)currentMusicPartListenStatus;
- (unsigned long long)currentMusicSongType;
- (int)currentMusicAudioType;
- (id)currentCachedGetLinkResponse;
- (id)onMusicLiveViewControllerRequestSourceViewInfo:(id)arg1;
- (id)onMusicliveViewControllerRequestGetSongStatusResponse:(id)arg1;
- (void)musicLiveViewController:(id)arg1 ringBackInfoDisplayViewShowingStatusChanged:(BOOL)arg2;
- (id)musicLiveViewControllerReqeustInteractionStatistics:(id)arg1;
- (void)onMusicLyricDidSeekToTime:(double)arg1;
- (id)onGetListenGetLyricResponseLyric;
- (BOOL)onReqGetLyricFailOrTimeout;
- (void)updateUIWhenBeginDragging;
- (void)updateUIWhenEndDragging;
- (BOOL)shouldPlayVideo;
- (void)checkVideoStatus:(unsigned int)arg1;
- (void)onMVEditorViewControllerCreatedMVFinished:(id)arg1 isDraft:(BOOL)arg2;
- (void)onMusicLiveJoinWithSongId:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onMusicLiveHeartBeatRespWithOnlineCount:(unsigned int)arg1 songId:(id)arg2 bSuccess:(BOOL)arg3;
- (void)updateOnlineCount:(unsigned int)arg1;
- (void)onMusicLiveGetHotMsgList:(id)arg1 songId:(id)arg2;
- (void)onMusicLivePostMsgIsSuccess:(BOOL)arg1 newMsg:(id)arg2 songId:(id)arg3 errMsg:(id)arg4;
- (void)onMusicLiveGetMVRecommentList:(id)arg1 continueFlag:(BOOL)arg2 requestId:(id)arg3;
- (void)fetchCommentObjectForSongWithoutMv:(id /* block */)arg1;
- (void)onMusicLiveGetBeatTracks:(id)arg1 arrFlexBasicClipTrack:(id)arg2;
- (void)reloadWithGetBeatTrackRespIfNeed;
- (void)getSongStatusIfNeeded;
- (void)getSongStatus;
- (void)setTransitionController:(id)arg1;
- (id)currUin;
- (id)currUinNickName;
- (void)setInteractivePopEnabled:(BOOL)arg1;
- (void)requestDurationRequiredDataIfAvailable;
- (void)reqListenLyric;
- (void)requestRecommendedList;
- (void)reqGetBeatTrackIfNeed;
- (void)reloadDataWithMVModel:(id)arg1 seekToStart:(BOOL)arg2 scene:(unsigned long long)arg3 showDefaultImage:(BOOL)arg4;
- (void)updateInteractionStatistics:(id)arg1;
- (void)reloadDataWithMVModel:(id)arg1 seekToStart:(BOOL)arg2 scene:(unsigned long long)arg3;
- (void)switchToMVModelAnimated:(id)arg1 directionIsLeft:(BOOL)arg2 scene:(unsigned long long)arg3;
- (void)updateCurrentVideoFinderAuthorInfo;
- (void)doLikeMVOperation:(BOOL)arg1;
- (void)handleLikeSong:(BOOL)arg1;
- (void)deleteCurrentMV;
- (void)handleFinishDeleteMv;
- (void)disableLiveViewControllerInteractions;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onMusicPlayStatusChanged;
- (void)onMusicMVCGISerivceGetMvInfoSuccessWithMVModel:(id)arg1 objectId:(unsigned long long)arg2;
- (void)onMusicMVCGISerivceGetMvInfoFailWithObjectId:(unsigned long long)arg1 failureType:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)onMusicLiveGetSongStatusWithIsSuccess:(BOOL)arg1 resp:(id)arg2;
- (void)fillCurrentSongStatusResponse;
- (void)onMusicLiveCheckPermissionRsp:(id)arg1 result:(id)arg2;
- (void)updateCommentFetchStep:(unsigned long long)arg1;
- (void)checkAndShowInteractionIfNeeded;
- (void)showMusicWithouMvCommentListWithJmpInfo:(id)arg1;
- (void)checkAndSetupLyricService;
- (void)setupLyricAfterCheckPermission;
- (void)setupLyricAfterListenGetLyric;
- (void)setupLyricWithLyrics:(id)arg1 songId:(id)arg2;
- (BOOL)mvPlayerBgViewCanPerformDoubletap:(id)arg1;
- (void)onMVPostDataServicePostMVSuccess:(id)arg1 svrDataItem:(id)arg2 localId:(id)arg3 relatedDraftId:(id)arg4;
- (void)onMVPostDataServicePostMVFailedWithLocalId:(id)arg1;
- (void)onStartFinishAnimBToNext:(BOOL)arg1 extDict:(id)arg2;
- (unsigned long long)totalMVModelsCountForMVRecommendedViewController;
- (id)mvModelsForMVRecommendedViewController;
- (BOOL)isMVRecommendListLoading;
- (unsigned long long)songLikeCount;
- (void)pourMusicFeedStartStat;
- (void)pourForwardStat;
- (void)reportFullStatsImmediately;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(BOOL)arg4 dataItem:(id)arg5;
- (void)setPushedFromType:(unsigned long long)arg1;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (void)onMusicLiveMVLikeWithMVModel:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onFinderDataItemPostComment:(id)arg1 tid:(id)arg2;
- (void)reportPostComment:(id)arg1;
- (void)onFinderDataItemDeleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 tid:(id)arg3;
- (void)reportDeleteComment:(id)arg1;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(BOOL)arg4;
- (void)reportCommentLikeWithComment:(id)arg1 isLike:(BOOL)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePanGes:(id)arg1;
- (void)onPanHorizontalWithPercent:(double)arg1 isFinish:(BOOL)arg2;
- (id)blurCoverViewWithModel:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleNestingFeatureWithState:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onDidStartAnim:(BOOL)arg1 extDict:(id)arg2;
- (void)commentDetailViewController:(id)arg1 onCommentObjectUpdate:(id)arg2;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(BOOL)arg4 commentObject:(id)arg5;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)transitionController;
- (id)chatRoomSongId;
- (void)setChatRoomSongId:(id)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)currentTopViewController;
- (void)setCurrentTopViewController:(id)arg1;
- (id)recommendedModels;
- (void)setRecommendedModels:(id)arg1;
- (id)liveViewController;
- (void)setLiveViewController:(id)arg1;
- (id)editorViewController;
- (void)setEditorViewController:(id)arg1;
- (BOOL)isModelSwitchAnimating;
- (void)setIsModelSwitchAnimating:(BOOL)arg1;
- (id)curVideoUsrName;
- (void)setCurVideoUsrName:(id)arg1;
- (BOOL)hasRequestedDataForEmptyMV;
- (void)setHasRequestedDataForEmptyMV:(BOOL)arg1;
- (BOOL)hasRequestedPermissionAndJoin;
- (void)setHasRequestedPermissionAndJoin:(BOOL)arg1;
- (BOOL)hasRequestedDataAfterModelRequested;
- (void)setHasRequestedDataAfterModelRequested:(BOOL)arg1;
- (BOOL)hasFinishedMVModelRequest;
- (void)setHasFinishedMVModelRequest:(BOOL)arg1;
- (BOOL)isOpeningCommentList;
- (void)setIsOpeningCommentList:(BOOL)arg1;
- (BOOL)hasGetSongStatusResponse;
- (void)setHasGetSongStatusResponse:(BOOL)arg1;
- (id)songStatusResponse;
- (void)setSongStatusResponse:(id)arg1;
- (id)listenGetLyricResponseLyric;
- (void)setListenGetLyricResponseLyric:(id)arg1;
- (BOOL)reqGetLyricFailOrTimeout;
- (void)setReqGetLyricFailOrTimeout:(BOOL)arg1;
- (BOOL)hasRequestDurationRequiredData;
- (void)setHasRequestDurationRequiredData:(BOOL)arg1;
- (BOOL)hasPouredMusicFeedStart;
- (void)setHasPouredMusicFeedStart:(BOOL)arg1;
- (BOOL)hasRequestedGetBeatTrack;
- (void)setHasRequestedGetBeatTrack:(BOOL)arg1;
- (BOOL)markedVideoOffsetDirty;
- (void)setMarkedVideoOffsetDirty:(BOOL)arg1;
- (id)onlineCountInfos;
- (void)setOnlineCountInfos:(id)arg1;
- (double)lastStartRecordOnlineCountTimestamp;
- (void)setLastStartRecordOnlineCountTimestamp:(double)arg1;
- (unsigned long long)maxOnlineCount;
- (void)setMaxOnlineCount:(unsigned long long)arg1;
- (unsigned long long)minOnlineCount;
- (void)setMinOnlineCount:(unsigned long long)arg1;
- (double)lastTotalDuration;
- (void)setLastTotalDuration:(double)arg1;
- (double)lastStartTimestamp;
- (void)setLastStartTimestamp:(double)arg1;
- (BOOL)wasConsumedEditor;
- (void)setWasConsumedEditor:(BOOL)arg1;
- (BOOL)wasConsumedComment;
- (void)setWasConsumedComment:(BOOL)arg1;
- (unsigned long long)clickCommentCount;
- (void)setClickCommentCount:(unsigned long long)arg1;
- (double)lastMVTotalDuration;
- (void)setLastMVTotalDuration:(double)arg1;
- (double)lastMVStartTimestamp;
- (void)setLastMVStartTimestamp:(double)arg1;
- (BOOL)wasConsumedSlider;
- (void)setWasConsumedSlider:(BOOL)arg1;
- (BOOL)notFirstReload;
- (void)setNotFirstReload:(BOOL)arg1;
- (unsigned long long)clickProfileCount;
- (void)setClickProfileCount:(unsigned long long)arg1;
- (unsigned long long)clickQuoteProfileCount;
- (void)setClickQuoteProfileCount:(unsigned long long)arg1;
- (unsigned long long)stopMusicCount;
- (void)setStopMusicCount:(unsigned long long)arg1;
- (unsigned long long)enterLyricsPageCount;
- (void)setEnterLyricsPageCount:(unsigned long long)arg1;
- (BOOL)isDragOrClickLyrics;
- (void)setIsDragOrClickLyrics:(BOOL)arg1;
- (double)lyricsPageDuration;
- (void)setLyricsPageDuration:(double)arg1;
- (double)lyricsPageStartTimestamp;
- (void)setLyricsPageStartTimestamp:(double)arg1;
- (void)setMvPlayer:(id)arg1;
- (id)mvRecommendViewController;
- (void)setMvRecommendViewController:(id)arg1;
- (id)swipeAnimationToView;
- (void)setSwipeAnimationToView:(id)arg1;
- (BOOL)pausedManually;
- (void)setPausedManually:(BOOL)arg1;
- (long long)loopCount;
- (void)setLoopCount:(long long)arg1;
- (id)commentObject;
- (void)setCommentObject:(id)arg1;
- (id)interactionStatistics;
- (void)setInteractionStatistics:(id)arg1;
- (unsigned long long)commentFetchSteps;
- (void)setCommentFetchSteps:(unsigned long long)arg1;
- (id)checkPermissionResponse;
- (void)setCheckPermissionResponse:(id)arg1;
- (unsigned long long)interactionTarget;
- (void)setInteractionTarget:(unsigned long long)arg1;
- (id)getBeatTrackRespArrTrackItem;
- (void)setGetBeatTrackRespArrTrackItem:(id)arg1;
- (id)getBeatTrackRespArrFlexBasicClipTrackItem;
- (void)setGetBeatTrackRespArrFlexBasicClipTrackItem:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (BOOL)isMinimized;
- (void)setIsMinimized:(BOOL)arg1;
- (unsigned long long)exitType;
- (void)setExitType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

