@interface TextStateMgr : MMUserService <TextStatePublishLogicDelegate, TextStateDataLogicDelegate, TextStateNewXMLLogicDelegate, TextStateTopicLogicDelegate, TextStateLikeLogicDelegate, TextStateRedDotLogicDelegate, TextStateReadLogicDelegate, MMConfigMgrExt, WCTextStateDBExt, IMsgExt, IContactMgrExt, IUpdateProfileMgrExt, IExptServiceExt, IMMLanguageMgrExt, MMServiceProtocol>
{
    BOOL _bShowTextState; // +0x8
    BOOL _bShowTextStateIconInTimelineCommentsAndLike; // +0x9
    BOOL _bSortTopicWithFriendScore; // +0xa
    BOOL _usePublishNewStyle; // +0xb
    BOOL _showRecentUseInPublish; // +0xc
    BOOL _forbid3rdBuffer; // +0xd
    BOOL _updateNearbyEnteringForeground; // +0xe
    BOOL _bSupportBrowseMultiStatus; // +0xf
    BOOL _bSupportPublishMultiStatus; // +0x10
    BOOL _isCustomBlurEffectSwitchOpen; // +0x11
    BOOL _enableStatusIconStyleUpgrade; // +0x12
    BOOL _enableClickSnsAlbumProfileIcon; // +0x13
    BOOL _enableShowPostEntryOnStatusCardDialog; // +0x14
    BOOL _enableProfileMarkReadAfterPullDown; // +0x15
    BOOL _enableMarkReadReport; // +0x16
    BOOL _enableFlutterPublishPage; // +0x17
    BOOL _enableModifyStatus; // +0x18
    BOOL _enableFriendsViewCount; // +0x19
    BOOL _enableTextOnlyStatusPublish; // +0x1a
    BOOL _useFlutterPublishPageForEdit; // +0x1b
    unsigned int _maxTextStateCount; // +0x1c
    unsigned int _tempTextStateValidDuration; // +0x20
    unsigned int _messageChannel; // +0x24
    unsigned int _nearbyExperiment; // +0x28
    int _flutterPublishPageStyleVersion; // +0x2c
    NSMutableDictionary * _commentDrafts; // +0x30
    NSMutableDictionary * _sessionIdDict; // +0x38
    TextStatePublishLogic * _publishLogic; // +0x40
    TextStateDataLogic * _dataLogic; // +0x48
    TextStateNewXMLLogic * _systemNewXMLLogic; // +0x50
    TextStateTopicLogic * _topicLogic; // +0x58
    TextStateLikeLogic * _doLikeLogic; // +0x60
    TextStateIconLogic * _iconLogic; // +0x68
    TextStateReadLogic * _readLogic; // +0x70
    TextStateRedDotLogic * _redDotLogic; // +0x78
    _TtC6WeChat18DoNotDisturbManger * _doNotDisturbManager; // +0x80
    TextStatePublishIconRecentUseCache * _recentUseIconCache; // +0x88
    NSString * _clusterPresentType; // +0x90
    NSString * _showRedEnvelopeButtonIconIds; // +0x98
    NSSet * _showRedEnvelopeButtonIconIdSet; // +0xa0
    NSMutableArray * _cachedLikeItems; // +0xa8
    NSMutableArray * _cachedCommentItems; // +0xb0
    NSString * _currentBackgroundId; // +0xb8
    UIImage * _defaultImage; // +0xc0
    unsigned long long _recentFetchWeAppTime; // +0xc8
    MemoryMappedKV * _autoExpiredKV; // +0xd0
    MemoryMappedKV * _defaultKV; // +0xd8
    id /* block */ _publishCallback; // +0xe0
}
- (id)squareStatusTypeItemForTopic:(id)arg1 ownTopicId:(id)arg2;
- (id)getSessionIDWithTextStateID:(id)arg1 scene:(unsigned int)arg2;
- (id)genNewSessionIDWithTextStateID:(id)arg1 scene:(unsigned int)arg2;
- (void)reportTextStateOperateWithSessionID:(id)arg1 actionCode:(unsigned int)arg2 actionResult:(id)arg3;
- (void)reportWhenReceiveLikeNotify:(id)arg1;
- (void)reportWhenSelectedMeTab;
- (void)reportWhenShowMsgNotifyView;
- (void)reportWhenClickMsgNotifyView;
- (void)reportWhenClickShowMoreNotifyMsg;
- (void)reportWithActionType:(unsigned int)arg1;
- (void)reportWithActionType:(unsigned int)arg1 textStateId:(id)arg2;
- (void)reportWithActionType:(unsigned int)arg1 actionResult:(id)arg2;
- (void)reportWithActionType:(unsigned int)arg1 actionResult:(id)arg2 btnStyle:(long long)arg3;
- (void)reportWithActionType:(unsigned int)arg1 actionResult:(id)arg2 btnStyle:(long long)arg3 textStateId:(id)arg4;
- (void)reportMixButtonActionType:(unsigned int)arg1 interactionCount:(unsigned int)arg2 notifyCount:(unsigned int)arg3 isShowReddot:(BOOL)arg4;
- (void)reportWithActionType:(unsigned int)arg1 actionResult:(id)arg2 btnStyle:(long long)arg3 textStateId:(id)arg4 sceneSessionId:(id)arg5 cardListId:(id)arg6;
- (unsigned long long)friendTextStateCount;
- (void)reportFriendStateExposeWithBtnStyle:(long long)arg1 firstHeadImageUsername:(id)arg2;
- (void)reportFriendStateClickWithBtnStyle:(long long)arg1;
- (void)reportWhenLeftSlideInteractiveMessage:(id)arg1;
- (void)reportWhenDeleteInteractiveMessage:(id)arg1;
- (void)reportWhenClearInteractiveMessages;
- (void)reportWhenClickShowMoreInteractiveMessages;
- (void)reportMeTabPublishButtonExpose:(id)arg1;
- (void)reportMeTabPublishButtonTap:(id)arg1;
- (void)reportCardListFooterPublishButtonExposeWithSceneSessionId:(id)arg1 cardListId:(id)arg2;
- (void)reportCardListFooterPublishButtonTapWithSceneSessionId:(id)arg1 cardListId:(id)arg2;
- (void)reportPublishEntranceEventWithEventId:(id)arg1 reportObj:(id)arg2;
- (void)configPublishEntranceViewReport:(id)arg1 reportPolicy:(unsigned long long)arg2 reportObj:(id)arg3;
- (void)configStatusIconViewReport:(id)arg1 viewId:(id)arg2 reportPolicy:(unsigned long long)arg3 contact:(id)arg4 viewUniqueId:(id)arg5 useNewIconStyle:(BOOL)arg6 customParams:(id)arg7;
- (id)getCurrentTextStateId;
- (void)onServiceInit;
- (void)onServiceAfterInit;
- (void)onServiceClearData;
- (id)publishLogic;
- (BOOL)shouldShowTextState;
- (BOOL)shouldShowTextStateIconInContactsList;
- (BOOL)shouldShowTextStateIconInGroupChat;
- (BOOL)shouldShowTextStateIconInTimelineFeed;
- (BOOL)shouldShowTextStateIconInTimelineCommentsAndLike;
- (BOOL)shouldShowTextStateIconInTimelineNotifications;
- (BOOL)shouldSortTopicWithFriendScore;
- (unsigned long long)emoticonSwitch;
- (BOOL)enableLikeVersionAndFetchBlackList;
- (void)initMainExperiment;
- (BOOL)enableUseStatusIconStyleUpgrade;
- (BOOL)enableSnsAlbumProfileIconClick;
- (BOOL)enableStatusMuteButton;
- (BOOL)enableStatusCardDialogShowPostEntry;
- (BOOL)enableStatusProfileMarkReadAfterPullDown;
- (BOOL)enableStatusMarkReadReport;
- (BOOL)enableUseFlutterPublishPage;
- (int)flutterPublishPageStyleVersion;
- (BOOL)useFlutterPublishPageForEdit;
- (BOOL)enableModifyStatus;
- (BOOL)enableUseFriendsViewCount;
- (BOOL)enableDoNotDisturbMode;
- (BOOL)shouldUseCustomBlurEffect;
- (void)initOtherExperiment;
- (void)initOtherConfiguration;
- (BOOL)hasShownTextStatePublish;
- (void)onShowTextStatePublish;
- (BOOL)shouldShowRedDot:(unsigned int)arg1;
- (void)disposeRedDot:(unsigned int)arg1;
- (BOOL)shouldShowRedPointOnMeTab;
- (unsigned int)getRedPointCount;
- (void)disposeRedPointOnMeTab;
- (unsigned int)getTotalUnreadMessageCount;
- (id)createOrGetBackgroundId;
- (void)clearBackgroundId;
- (BOOL)isDataLoaded;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (id)textStateListForUsername:(id)arg1;
- (id)textStateListMultipleForUsername:(id)arg1;
- (id)textStateForId:(id)arg1;
- (void)updateTextStateByBackLocgic:(id)arg1;
- (void)initIconResource;
- (id)iconWrapForId:(id)arg1;
- (id)publishIconList;
- (id)customIconBoardIconList;
- (id)recentUseIconList;
- (BOOL)removeRecentUseIcon:(id)arg1;
- (id)activePassthroughIcon;
- (void)expirePassthroughIcon;
- (void)forceUpdateIconWithFlags:(unsigned int)arg1;
- (BOOL)shouldShowRedEnvelopeButtonForIconId:(id)arg1;
- (id)getExperimentForKey:(id)arg1 defaultValue:(id)arg2;
- (void)showDNDModeEducatePageIfNeed:(id)arg1;
- (unsigned long long)topicUsernameCount;
- (id)allTopicUsernameList;
- (id)topUnreadTopicUsernameList;
- (id)topicForId:(id)arg1;
- (id)friendTopicList;
- (void)refreshFriendTopicList;
- (BOOL)isPositionAuthorized;
- (BOOL)checkShouldAuthorizePositionOnceAndSetShown;
- (void)clearPositionAuthorizationOnce;
- (BOOL)isAvailableAfterPublish;
- (BOOL)isTextStateSameTopicAsCurrentUser:(id)arg1;
- (void)clearKeyValueFromOldExperiment:(unsigned int)arg1 toNewExperiment:(unsigned int)arg2;
- (void)updateNearbyExperimentFromValue:(id)arg1;
- (void)updateNearbyIfNeeded;
- (id)newTextStateSquarePagePath;
- (BOOL)prefetchNewTextStateSquareWeApp;
- (void)openNewTextStateSquareWeApp;
- (void)postDataLoadedEventToNewSquare;
- (void)postPublishedEventToNewSquareWithTextState:(id)arg1;
- (void)postNotifyChangeEventToNewSquare;
- (void)postTextStateLikeEventToNewSquareWithLike:(BOOL)arg1 textStateId:(id)arg2;
- (void)publishTextState:(id)arg1 withCallback:(id /* block */)arg2;
- (void)publishTextState:(id)arg1 associateMediaItem:(id)arg2;
- (void)publishTextState:(id)arg1 associateMediaItem:(id)arg2 parameter:(id)arg3;
- (BOOL)canPublishNewTextState;
- (id)nonNetworkErrorPublishingTextState;
- (void)deleteTextStateForId:(id)arg1;
- (void)deletePublishedTextState:(id)arg1 completion:(id /* block */)arg2;
- (void)deletePublishedTextStateWithId:(id)arg1 completion:(id /* block */)arg2;
- (id)tempMostRecentTextState;
- (BOOL)isLikeForTextStateWithId:(id)arg1;
- (void)setLike:(BOOL)arg1 forTextState:(id)arg2;
- (void)setLike:(BOOL)arg1 source:(unsigned int)arg2 forTextState:(id)arg3;
- (void)handleLikeDataItem:(id)arg1;
- (void)handleCommentDataItem:(id)arg1;
- (id)getCacheSelfLikeData;
- (BOOL)affStatusMainDBTransferFinish;
- (BOOL)useAffDB;
- (void)setUsername:(id)arg1 withFriendScore:(double)arg2;
- (double)friendScoreForUser:(id)arg1;
- (BOOL)isTextStateReadWithUsername:(id)arg1;
- (BOOL)isReadForTextStateId:(id)arg1;
- (void)setReadForTextState:(id)arg1;
- (void)setReadForTextStateOnlyLocal:(id)arg1;
- (BOOL)hasUnreadTextStateContact;
- (id)viewedFriendsUserNames:(id)arg1;
- (void)refreshReadUserRecords:(id)arg1;
- (void)onTextStateTopicUpdate;
- (void)onTextStateTopicConstruct;
- (void)onRedDotDisposed:(unsigned int)arg1;
- (void)onLike:(BOOL)arg1 success:(BOOL)arg2 textStateId:(id)arg3;
- (void)onTextStateSubmitToPublish:(id)arg1;
- (void)onTextState:(id)arg1 publishSuccess:(BOOL)arg2;
- (void)onTextStateDeleteFromPublishingQueue:(id)arg1;
- (BOOL)shouldModifySelfContact;
- (void)onTextStateDataLoaded;
- (void)onTextStateUpdateForUsername:(id)arg1;
- (unsigned int)activeMessageChannel;
- (void)onGetModTextStatusDataItem:(id)arg1 checkSeqence:(BOOL)arg2;
- (void)onGetTextStatusLikeDataItem:(id)arg1;
- (void)onGetTextStatusCommentDataItem:(id)arg1;
- (void)onShouldRefreshIconConfig;
- (void)onGetStatusDeleteDataItem:(id)arg1;
- (void)onParseAffModTextStatueFinish:(id)arg1;
- (void)onGetTextStatusReadDataItem:(id)arg1;
- (id)getUsernameToMostRecentTextState;
- (id)getMostRecentTextStateForUsername:(id)arg1;
- (void)willEnterForeground;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onNewContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onProfileChange;
- (void)onLanguageChange;
- (void)onExptItemListChange;
- (void)onMMDynamicConfigUpdated;
- (void)onReceiveInteractionCount:(unsigned int)arg1 withTextStateId:(id)arg2;
- (void)onReceiveViewCount:(unsigned int)arg1 withTextStateId:(id)arg2;
- (BOOL)isSupportBrowseMultiStatus;
- (BOOL)isSupportPublishMultiStatus;
- (BOOL)isMultiStatusNumReachCeiling;
- (BOOL)enableTextOnlyStatusPublish;
- (id)commentDrafts;
- (void)setCommentDrafts:(id)arg1;
- (id)sessionIdDict;
- (void)setSessionIdDict:(id)arg1;
- (void)setPublishLogic:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)systemNewXMLLogic;
- (void)setSystemNewXMLLogic:(id)arg1;
- (id)topicLogic;
- (void)setTopicLogic:(id)arg1;
- (id)doLikeLogic;
- (void)setDoLikeLogic:(id)arg1;
- (id)iconLogic;
- (void)setIconLogic:(id)arg1;
- (id)readLogic;
- (void)setReadLogic:(id)arg1;
- (id)redDotLogic;
- (void)setRedDotLogic:(id)arg1;
- (id)doNotDisturbManager;
- (void)setDoNotDisturbManager:(id)arg1;
- (id)recentUseIconCache;
- (void)setRecentUseIconCache:(id)arg1;
- (id)clusterPresentType;
- (void)setClusterPresentType:(id)arg1;
- (BOOL)bShowTextState;
- (void)setBShowTextState:(BOOL)arg1;
- (BOOL)bShowTextStateIconInTimelineCommentsAndLike;
- (void)setBShowTextStateIconInTimelineCommentsAndLike:(BOOL)arg1;
- (BOOL)bSortTopicWithFriendScore;
- (void)setBSortTopicWithFriendScore:(BOOL)arg1;
- (unsigned int)maxTextStateCount;
- (void)setMaxTextStateCount:(unsigned int)arg1;
- (unsigned int)tempTextStateValidDuration;
- (void)setTempTextStateValidDuration:(unsigned int)arg1;
- (BOOL)usePublishNewStyle;
- (void)setUsePublishNewStyle:(BOOL)arg1;
- (BOOL)showRecentUseInPublish;
- (void)setShowRecentUseInPublish:(BOOL)arg1;
- (BOOL)forbid3rdBuffer;
- (void)setForbid3rdBuffer:(BOOL)arg1;
- (unsigned int)messageChannel;
- (void)setMessageChannel:(unsigned int)arg1;
- (unsigned int)nearbyExperiment;
- (void)setNearbyExperiment:(unsigned int)arg1;
- (BOOL)updateNearbyEnteringForeground;
- (void)setUpdateNearbyEnteringForeground:(BOOL)arg1;
- (id)showRedEnvelopeButtonIconIds;
- (void)setShowRedEnvelopeButtonIconIds:(id)arg1;
- (id)showRedEnvelopeButtonIconIdSet;
- (void)setShowRedEnvelopeButtonIconIdSet:(id)arg1;
- (id)cachedLikeItems;
- (void)setCachedLikeItems:(id)arg1;
- (id)cachedCommentItems;
- (void)setCachedCommentItems:(id)arg1;
- (id)currentBackgroundId;
- (void)setCurrentBackgroundId:(id)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (unsigned long long)recentFetchWeAppTime;
- (void)setRecentFetchWeAppTime:(unsigned long long)arg1;
- (id)autoExpiredKV;
- (void)setAutoExpiredKV:(id)arg1;
- (id)defaultKV;
- (void)setDefaultKV:(id)arg1;
- (id /* block */)publishCallback;
- (void)setPublishCallback:(id /* block */)arg1;
- (BOOL)bSupportBrowseMultiStatus;
- (void)setBSupportBrowseMultiStatus:(BOOL)arg1;
- (BOOL)bSupportPublishMultiStatus;
- (void)setBSupportPublishMultiStatus:(BOOL)arg1;
- (BOOL)isCustomBlurEffectSwitchOpen;
- (void)setIsCustomBlurEffectSwitchOpen:(BOOL)arg1;
- (BOOL)enableStatusIconStyleUpgrade;
- (void)setEnableStatusIconStyleUpgrade:(BOOL)arg1;
- (BOOL)enableClickSnsAlbumProfileIcon;
- (void)setEnableClickSnsAlbumProfileIcon:(BOOL)arg1;
- (BOOL)enableShowPostEntryOnStatusCardDialog;
- (void)setEnableShowPostEntryOnStatusCardDialog:(BOOL)arg1;
- (BOOL)enableProfileMarkReadAfterPullDown;
- (void)setEnableProfileMarkReadAfterPullDown:(BOOL)arg1;
- (BOOL)enableMarkReadReport;
- (void)setEnableMarkReadReport:(BOOL)arg1;
- (BOOL)enableFlutterPublishPage;
- (void)setEnableFlutterPublishPage:(BOOL)arg1;
- (void)setEnableModifyStatus:(BOOL)arg1;
- (BOOL)enableFriendsViewCount;
- (void)setEnableFriendsViewCount:(BOOL)arg1;
- (void)setEnableTextOnlyStatusPublish:(BOOL)arg1;
- (void)setFlutterPublishPageStyleVersion:(int)arg1;
- (void)setUseFlutterPublishPageForEdit:(BOOL)arg1;
- (void).cxx_destruct;
@end
