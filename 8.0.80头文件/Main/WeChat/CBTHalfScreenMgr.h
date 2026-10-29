@interface CBTHalfScreenMgr : NSObject <MMPageSheetAdapterDelegate>
{
    BOOL _pendingTingPlayerReverse; // +0x8
    BOOL _pendingChatHistoryAuthRequired; // +0x9
    long long _pendingAskXiaoWeiDisplayType; // +0x10
    NSMutableDictionary * _halfScreenVCCache; // +0x18
    NSMutableDictionary * _instanceKeyByBusinessReuseKey; // +0x20
    NSMutableDictionary * _delayedHangupTimerCache; // +0x28
    NSMutableDictionary * _delayedHangupSceneCache; // +0x30
    NSMutableDictionary * _roomIdToCacheKeyMap; // +0x38
    NSMutableDictionary * _lastRouteTypeCache; // +0x40
    NSMutableDictionary * _lastPendingMsgContentCache; // +0x48
    NSMutableDictionary * _lastMusicWrapDataCache; // +0x50
    NSMutableDictionary * _lastTingTextModeCache; // +0x58
    NSMutableSet * _bizArticleSeenCacheKeys; // +0x60
    NSMutableDictionary * _lastModifyIdCache; // +0x68
    CBTReceivedFileBypassMsg * _pendingReceivedFileBypass; // +0x70
    NSArray * _pendingLocalShortcutItems; // +0x78
    NSString * _pendingScanReportScene; // +0x80
    NSMutableSet * _tempAuthChatIds; // +0x88
    CBTHalfScreenLaunchCPP2NativeCallerCallback * _zidlLaunchCallback; // +0x90
    UserLocationInfo * _pendingUserLocation; // +0x98
    NSMutableSet * _detachedHalfScreenVCs; // +0xa0
}
+ (BOOL)shouldUseTransparentBarrierForFinderWithUIState:(int)arg1 enterScene:(int)arg2;
+ (id)sharedInstance;
+ (void)destroyWithBusinessId:(id)arg1 reuseKey:(id)arg2;
+ (id)generateAskXiaoweiClkId;
+ (BOOL)isFlutterHalfScreenAliveWithBusinessId:(id)arg1 reuseKey:(id)arg2;
+ (void)cacheInstanceKey:(id)arg1 forBusinessId:(id)arg2 reuseKey:(id)arg3;
+ (void)clearInstanceKeyForInstanceKey:(id)arg1;
+ (void)dismissFlutterHalfScreenWithBusinessId:(id)arg1 reuseKey:(id)arg2;
+ (int)lastEnterSceneForBusinessId:(id)arg1 reuseKey:(id)arg2;
+ (id)allInstanceKeys;
+ (void)closeAllForegroundInstances;
+ (id)localShortcutPBItemsFromItems:(id)arg1;
+ (id)halfScreenPresentFromVC;
+ (BOOL)isValidHalfScreenPresentHostVC:(id)arg1;
- (id)pendingForwardXml;
- (void)setPendingForwardXml:(id)arg1;
- (id)lastEnterSceneCache;
- (id)init;
- (void)cbt_dispatchEventBlockOnMainThread:(id /* block */)arg1;
- (void)notifyHalfScreenFrameDidChange:(CGRect)arg1 sourceType:(unsigned long long)arg2 sourceId:(id)arg3;
- (void)notifyHalfScreenViewWillAppearWithSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)notifyHalfScreenViewDidAppearWithSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)notifyHalfScreenViewWillDisappearWithSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)notifyHalfScreenViewDidDisappearWithSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)notifyHalfScreenDidDismissWithSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)notifyHalfScreenTTSReadEnabledChanged:(BOOL)arg1 sourceType:(unsigned long long)arg2 sourceId:(id)arg3;
- (void)updatePageExposeCallback:(id /* block */)arg1 forCacheKey:(id)arg2;
- (void)updatePageExitCallback:(id /* block */)arg1 forCacheKey:(id)arg2;
- (void)triggerNativePageExposeForSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)triggerNativePageExitForSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (BOOL)isHalfScreenEntryEnabled;
- (BOOL)isXiaoWeiVCInCurrentStack;
- (void)dismissVisibleHalfScreenIfNeeded;
- (BOOL)shouldUseFlutterHalfScreen;
- (BOOL)shouldUseFlutterHalfScreenWithOptions:(id)arg1;
- (id)findAsstVCInCurrentStack;
- (void)showHalfScreenWithBypassInfo:(id)arg1 fromVC:(id)arg2 multimodalXml:(id)arg3 multimodalType:(int)arg4 multimodalWrapData:(id)arg5 sourceType:(unsigned long long)arg6 sourceId:(id)arg7 skipFinderCheck:(BOOL)arg8 dismissCallback:(id /* block */)arg9 imagePaths:(id)arg10 showTempChatTips:(BOOL)arg11 pendingSendMsgContent:(id)arg12 pendingTimelineFeedId:(id)arg13 routeType:(long long)arg14 askXiaoweiSrcInfo:(id)arg15;
- (void)showHalfScreenWithBypassInfo:(id)arg1 fromVC:(id)arg2 multimodalXml:(id)arg3 multimodalType:(int)arg4 multimodalWrapData:(id)arg5 sourceType:(unsigned long long)arg6 sourceId:(id)arg7 skipFinderCheck:(BOOL)arg8 dismissCallback:(id /* block */)arg9 imagePaths:(id)arg10 showTempChatTips:(BOOL)arg11 pendingSendMsgContent:(id)arg12 pendingTimelineFeedId:(id)arg13 routeType:(long long)arg14 didAppearCallback:(id /* block */)arg15 askXiaoweiSrcInfo:(id)arg16;
- (void)showHalfScreenWithBypassInfo:(id)arg1 fromVC:(id)arg2 multimodalXml:(id)arg3 multimodalType:(int)arg4 multimodalWrapData:(id)arg5 sourceType:(unsigned long long)arg6 sourceId:(id)arg7 skipFinderCheck:(BOOL)arg8 dismissCallback:(id /* block */)arg9 imagePaths:(id)arg10 showTempChatTips:(BOOL)arg11 pendingSendMsgContent:(id)arg12 pendingTimelineFeedId:(id)arg13 routeType:(long long)arg14 didAppearCallback:(id /* block */)arg15 pendingSendImagePath:(id)arg16 askXiaoweiSrcInfo:(id)arg17;
- (void)showHalfScreenWithBypassInfo:(id)arg1 fromVC:(id)arg2 multimodalXml:(id)arg3 multimodalType:(int)arg4 multimodalWrapData:(id)arg5 sourceType:(unsigned long long)arg6 sourceId:(id)arg7 skipFinderCheck:(BOOL)arg8 dismissCallback:(id /* block */)arg9 imagePaths:(id)arg10 showTempChatTips:(BOOL)arg11 pendingSendMsgContent:(id)arg12 pendingTimelineFeedId:(id)arg13 routeType:(long long)arg14 didAppearCallback:(id /* block */)arg15 reverse:(BOOL)arg16;
- (void)showBannerLocateHalfScreenWithLocalId:(int)arg1 fromVC:(id)arg2;
- (void)showBannerLocateHalfScreenWithLocalId:(int)arg1 fromVC:(id)arg2 enterSceneType:(int)arg3;
- (void)showBannerLocateHalfScreenWithSvrId:(long long)arg1 fromVC:(id)arg2;
- (void)showBannerLocateHalfScreenWithSvrId:(long long)arg1 fromVC:(id)arg2 enterSceneType:(int)arg3 enableFlutterHalfScreen:(BOOL)arg4;
- (void)showBannerLocateHalfScreenWithSvrId:(long long)arg1 fromVC:(id)arg2 enterSceneType:(int)arg3 enableFlutterHalfScreen:(BOOL)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)showBannerLocateHalfScreenWithLocalId:(int)arg1 svrId:(long long)arg2 fromVC:(id)arg3 enterSceneType:(int)arg4 enableFlutterHalfScreen:(BOOL)arg5 options:(id)arg6 completion:(id /* block */)arg7;
- (void)presentBannerLocateHalfScreenFromVC:(id)arg1 localId:(int)arg2 svrId:(long long)arg3 enterSceneType:(int)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)destroyBannerLocateHalfScreenIfNeeded;
- (void)destroyBannerLocateHalfScreenIfNeededWithCompletion:(id /* block */)arg1;
- (id)showHalfScreenWithLaunchConfigFromVC:(id)arg1 launchConfigBytes:(id)arg2 presentCallback:(id /* block */)arg3 dismissCallback:(id /* block */)arg4;
- (id)showHalfScreenWithLaunchConfigFromVC:(id)arg1 launchConfigBytes:(id)arg2 dismissCallback:(id /* block */)arg3;
- (void)onLaunchAction:(id)arg1 launchRevision:(unsigned long long)arg2 action:(int)arg3 routeUrl:(id)arg4;
- (void)onLaunchDismissed:(id)arg1 launchRevision:(unsigned long long)arg2;
- (void)onSessionDestroyed:(id)arg1;
- (void)setCallback:(id)arg1;
- (void)onTTSReadEnabledChangedAsync:(unsigned long long)arg1 enabled:(BOOL)arg2;
- (void)onHalfScreenHeightChangedAsync:(unsigned long long)arg1 instanceKey:(id)arg2 height:(double)arg3 screenHeight:(double)arg4;
- (void)createEngineAndPresentWithInstanceKey:(id)arg1 routeUrl:(id)arg2;
- (void)reopenCachedVCWithInstanceKey:(id)arg1;
- (void)showHalfScreenFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
- (void)showNativeHalfScreenFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
- (void)injectCachedAskXiaoWeiClkIdIntoOptions:(id)arg1;
- (void)continueShowHalfScreenWithBypassInfo:(id)arg1 fromVC:(id)arg2 multimodalXml:(id)arg3 multimodalType:(int)arg4 multimodalWrapData:(id)arg5 sourceType:(unsigned long long)arg6 sourceId:(id)arg7 contextFeedId:(id)arg8 skipFinderCheck:(BOOL)arg9 dismissCallback:(id /* block */)arg10 imagePaths:(id)arg11 showTempChatTips:(BOOL)arg12 pendingSendMsgContent:(id)arg13 pendingTimelineFeedId:(id)arg14 routeType:(long long)arg15 didAppearCallback:(id /* block */)arg16 pendingSendImagePath:(id)arg17 askXiaoweiSrcInfo:(id)arg18;
- (void)doShowHalfScreenWithBypassInfo:(id)arg1 fromVC:(id)arg2 multimodalXml:(id)arg3 multimodalType:(int)arg4 multimodalWrapData:(id)arg5 sourceType:(unsigned long long)arg6 sourceId:(id)arg7 contextFeedId:(id)arg8 skipFinderCheck:(BOOL)arg9 dismissCallback:(id /* block */)arg10 imagePaths:(id)arg11 showTempChatTips:(BOOL)arg12 pendingSendMsgContent:(id)arg13 pendingTimelineFeedId:(id)arg14 routeType:(long long)arg15 didAppearCallback:(id /* block */)arg16 pendingSendImagePath:(id)arg17 askXiaoweiSrcInfo:(id)arg18 enterSceneOverride:(int)arg19;
- (void)pageSheetWillBePresentFrom:(id)arg1 inContainer:(id)arg2;
- (void)uploadImagesToCDN:(id)arg1 completion:(id /* block */)arg2;
- (void)uploadPathsToCDN:(id)arg1 completion:(id /* block */)arg2;
- (id)createHalfScreenVCWithSourceType:(unsigned long long)arg1 sourceId:(id)arg2 scene:(unsigned int)arg3 skipFinderCheck:(BOOL)arg4 enterSceneType:(long long)arg5;
- (void)cancelDelayedHangupForSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)clearCachedVCForSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (id)getCachedVCForCacheKey:(id)arg1;
- (id)findCachedVCByVoipSessionID:(id)arg1;
- (void)clearCachedVCForCacheKey:(id)arg1;
- (void)clearAllHalfScreenVCCache;
- (id)headlessHalfScreenVCWithAppUiState:(int)arg1 enterSceneType:(int)arg2;
- (id)headlessHalfScreenVCWithAppUiState:(int)arg1 enterSceneType:(int)arg2 options:(id)arg3;
- (id)configHalfScreenAdapterForVC:(id)arg1 fromVC:(id)arg2 sheetHeight:(double)arg3;
- (void)presentHeadlessHalfScreenVC:(id)arg1 fromVC:(id)arg2 dismissCallback:(id /* block */)arg3;
- (BOOL)presentHeadlessHalfScreenVC:(id)arg1 fromVC:(id)arg2 keepAliveAfterDismiss:(BOOL)arg3 dismissCallback:(id /* block */)arg4;
- (void)scheduleDelayedDestroyForKeptHeadlessHalfScreenVC:(id)arg1;
- (BOOL)representHeadlessHalfScreenVCWithAppUiState:(int)arg1 fromVC:(id)arg2 dismissCallback:(id /* block */)arg3;
- (void)destroyHeadlessHalfScreenVCImmediately:(id)arg1;
- (void)detachHeadlessHalfScreenVCAndScheduleDelayedDestroy:(id)arg1;
- (void)evictHeadlessHalfScreenVCWithAppUiState:(int)arg1;
- (void)registerRoomID:(unsigned long long)arg1 cacheKey:(id)arg2;
- (void)clearHalfScreenVCCacheByRoomID:(unsigned long long)arg1;
- (void)startDelayedHangupForSourceType:(unsigned long long)arg1 sourceId:(id)arg2 openScene:(int)arg3;
- (void)onMultiVCDelayedHangupTimer:(id)arg1;
- (BOOL)isHalfScreenPresentingForSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (BOOL)isNeedReleaseForSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)closeAllEmojiHalfScreens;
- (void)closeAllForegroundHalfScreens;
- (void)showFlutterHalfScreenWithBypassInfo:(id)arg1 fromVC:(id)arg2 multimodalXml:(id)arg3 multimodalType:(int)arg4 multimodalWrapData:(id)arg5 sourceType:(unsigned long long)arg6 sourceId:(id)arg7 skipFinderCheck:(BOOL)arg8 dismissCallback:(id /* block */)arg9 imagePaths:(id)arg10 showTempChatTips:(BOOL)arg11 pendingSendMsgContent:(id)arg12 pendingTimelineFeedId:(id)arg13 routeType:(long long)arg14;
- (void)presentFlutterBannerLocateHalfScreenWithLocalId:(int)arg1 svrId:(long long)arg2 fromVC:(id)arg3 completion:(id /* block */)arg4 options:(id)arg5;
- (id)usageNoticeKVKey;
- (void)checkShouldShowUsageNoticeWithCompletion:(id /* block */)arg1;
- (void)showUsageNoticeWithConfirmCallback:(id /* block */)arg1;
- (void)markUsageNoticeReadWithCompletion:(id /* block */)arg1;
- (void)clearUsageNoticeReadFlag;
- (void)setUsageNoticeReadValue:(int)arg1 completion:(id /* block */)arg2;
- (int)mapRouteTypeToEnterScene:(long long)arg1 bypassInfo:(id)arg2;
- (long long)pendingAskXiaoWeiDisplayType;
- (void)setPendingAskXiaoWeiDisplayType:(long long)arg1;
- (id)halfScreenVCCache;
- (void)setHalfScreenVCCache:(id)arg1;
- (id)instanceKeyByBusinessReuseKey;
- (void)setInstanceKeyByBusinessReuseKey:(id)arg1;
- (id)delayedHangupTimerCache;
- (void)setDelayedHangupTimerCache:(id)arg1;
- (id)delayedHangupSceneCache;
- (void)setDelayedHangupSceneCache:(id)arg1;
- (id)roomIdToCacheKeyMap;
- (void)setRoomIdToCacheKeyMap:(id)arg1;
- (id)lastRouteTypeCache;
- (void)setLastRouteTypeCache:(id)arg1;
- (id)lastPendingMsgContentCache;
- (void)setLastPendingMsgContentCache:(id)arg1;
- (id)lastMusicWrapDataCache;
- (void)setLastMusicWrapDataCache:(id)arg1;
- (id)lastTingTextModeCache;
- (void)setLastTingTextModeCache:(id)arg1;
- (id)bizArticleSeenCacheKeys;
- (void)setBizArticleSeenCacheKeys:(id)arg1;
- (id)lastModifyIdCache;
- (void)setLastModifyIdCache:(id)arg1;
- (BOOL)pendingTingPlayerReverse;
- (void)setPendingTingPlayerReverse:(BOOL)arg1;
- (id)pendingReceivedFileBypass;
- (void)setPendingReceivedFileBypass:(id)arg1;
- (id)pendingLocalShortcutItems;
- (void)setPendingLocalShortcutItems:(id)arg1;
- (id)pendingScanReportScene;
- (void)setPendingScanReportScene:(id)arg1;
- (BOOL)pendingChatHistoryAuthRequired;
- (void)setPendingChatHistoryAuthRequired:(BOOL)arg1;
- (id)tempAuthChatIds;
- (void)setTempAuthChatIds:(id)arg1;
- (id)zidlLaunchCallback;
- (void)setZidlLaunchCallback:(id)arg1;
- (id)pendingUserLocation;
- (void)setPendingUserLocation:(id)arg1;
- (id)detachedHalfScreenVCs;
- (void)setDetachedHalfScreenVCs:(id)arg1;
- (void).cxx_destruct;
@end
