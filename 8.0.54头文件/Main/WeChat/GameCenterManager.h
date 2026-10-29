@interface GameCenterManager : MMUserService <MMWebViewDelegate, MMServiceProtocol, MMKernelExt, IAppDataExt, PBMessageObserverDelegate, IAPExt, IMMLanguageMgrExt>
{
    NSMutableArray * _gameIntroList; // +0x8
    NSMutableDictionary * _gameDetailDict; // +0x10
    NSMutableDictionary * _subscribeInfoDict; // +0x18
    BOOL _gameIntroLoaded; // +0x20
    NSMutableArray * _allGameList; // +0x28
    NSMutableArray * _allMiniGameList; // +0x30
    NSMutableDictionary * _appid2UrlInGlobalSearch; // +0x38
    unsigned int _lastFetchCountryTime; // +0x40
    GameSearchRecommendList * _searchRecommendList; // +0x48
    GetGameCenterGlobalSettingResponse * _gameGlobalSetting; // +0x50
    NSMutableDictionary * _h5GameAppid2Menu; // +0x58
    unsigned int _lastFetchGlobalSettingTime; // +0x60
    GetGameIndex4TabNavResponse * _tabNavDataV5; // +0x68
    GetGameIndex4Response * _homeDataV5; // +0x70
    BOOL _isRecommendGroupCellThinStyle; // +0x78
    BOOL _useWXGWidget; // +0x79
    BOOL _isWeakNet; // +0x7a
    int _curCancellationState; // +0x7c
    int _netDetailFlag; // +0x80
    NSString * _appStoreCountryCode; // +0x88
    NSString * _iapProductID; // +0x90
    MMWebViewController * _floatLayerWebViewController; // +0x98
    EntranceRedDot * _entranceRedDot; // +0xa0
    NSMutableDictionary * _productId2AppStoreViewController; // +0xa8
    WAAppIdToUsernameTransfer * _weAppIDTransfer; // +0xb0
    GameLifeFindMoreFriendEntranceInfo * _entranceInfo; // +0xb8
    MemoryMappedKV * _gameCenterMappedKV; // +0xc0
    JumpInfo * _cancellationJumpInfo; // +0xc8
    NSMutableDictionary * _webVCKey2PrloadUrl; // +0xd0
    NSMutableDictionary * _url2PreloadWebVC; // +0xd8
    NSMutableSet * _preloadingWebVCSet; // +0xe0
    unsigned long long _userClickGameCenterTime; // +0xe8
}
- (BOOL)preloadAppStoreViewController;
- (id)getPreloadAppStoreViewController:(id)arg1;
- (void)preloadOneAppStoreViewController:(id)arg1 AppStoreUrl:(id)arg2;
- (void)refreshAppStoreViewControllerWhenDismiss:(id)arg1 AppStoreViewController:(id)arg2;
- (id)getProductIdFrom:(id)arg1;
- (BOOL)preloadUrl:(id)arg1 ForWebVC:(id)arg2;
- (id)getUniqueKeyForWebViewController:(id)arg1;
- (BOOL)_preloadlGameUrl:(id)arg1 EntryScene:(id)arg2 FromJspi:(BOOL)arg3 ExtraInfo:(id)arg4;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)tryDeleteIfExceedPreloadMaxCount;
- (id)getWebViewControllerWithPreload:(id)arg1 Url:(id)arg2;
- (id)checkIfUrlHasPreloadWebVC:(id)arg1;
- (id)getPreloadWebViewControllerWithFullUrl:(id)arg1;
- (id)getPreloadWebViewControllerWithOnlyPrefix:(id)arg1;
- (id)_getValidPreloadWebViewController:(id)arg1;
- (void)prefetchGameIndexPageCgiWithUrl:(id)arg1 andCompletionBlock:(id /* block */)arg2;
- (id)getPreloadCgiJsonStringFromRespStr:(id)arg1 andTimeStampMill:(id)arg2 andCostTime:(id)arg3 isFail:(BOOL)arg4;
- (void)attachToDataCleaner:(id)arg1;
- (void)report16171WithOpt:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (void)reportGameHomeABTestForSourceScene:(unsigned int)arg1;
- (id)abtestItemForHomePageWriteJumpType:(long long *)arg1 andUrl:(id *)arg2;
- (int)viewTypeForDetailView;
- (int)viewTypeForLibrary;
- (int)viewTypeForMessageCenter;
- (id)urlForGameDetailView;
- (id)urlForGameLibraryView;
- (id)urlForGameMessageCenter;
- (id)getExpArgFromAbtestForLayerId:(id)arg1 andKey:(id)arg2;
- (void)openGameCenterDetailView:(id)arg1 appId:(id)arg2 sourceScene:(unsigned int)arg3 webviewInfo:(id)arg4;
- (long long)openGameDetailViewWithGameInfo:(id)arg1 navigationController:(id)arg2 NeedUpdateLocalDetailInfo:(BOOL)arg3 sourceScene:(unsigned int)arg4;
- (void)setPreloadHomeWebVc:(id)arg1;
- (id)preloadHomeWebVc;
- (void)preloadHomeWebViewControllerIfNeed;
- (void)releasePreloadHomeWebVcIfNeed;
- (BOOL)checkPreloadHomeCondition;
- (id)getFindFrindRedDotMsg;
- (id)popHomeViewController:(unsigned int)arg1 EntranceRedDot:(id)arg2 Extra:(id)arg3;
- (id)createHomeViewController:(unsigned int)arg1 EntranceRedDot:(id)arg2 Extra:(id)arg3;
- (void)handleGameLifeInfoChatRoom:(id)arg1;
- (void)openHomeWithNavigationViewController:(id)arg1 SourceScene:(unsigned int)arg2 Extra:(id)arg3;
- (void)clearReddotData:(id)arg1;
- (id)getAdvanceRenderVisibleView:(id)arg1;
- (void)reportGameEntrnace:(BOOL)arg1 sourceScene:(unsigned int)arg2 gameCenterVC:(id)arg3;
- (void)downloadAuxiliaryWepkgForFloatLayer:(id)arg1 andBanner:(id)arg2;
- (id)entranceRedDotFromEntryNotify:(id)arg1 andFloatNotify:(id)arg2;
- (void)trackEventForEnterGameHomeWithNotify:(id)arg1 gameCenterVC:(id)arg2 msg:(id)arg3;
- (void)trackEventForOpenFloatLayerWithNotify:(id)arg1 SourceScene:(unsigned int)arg2;
- (id)getGameCenterHomeViewController:(unsigned int)arg1 EntranceRedDot:(id)arg2;
- (id)getGameCenterNativeHomeViewControllerV5:(unsigned int)arg1 EntranceRedDot:(id)arg2;
- (void)setRedDotBeforeHomeCgi:(id)arg1;
- (id)getGameCenterHomeWebViewController:(id)arg1 SourceScene:(unsigned int)arg2 HasFloatLayer:(BOOL)arg3;
- (id)buildHomePageURLWithOriginUrl:(id)arg1 SourceScene:(unsigned int)arg2 HasFloatLayer:(BOOL)arg3;
- (id)urlAppending:(id)arg1 AppendingStr:(id)arg2;
- (BOOL)splitInteractNoticeViewController;
- (id)getSplitNativeMsgCenterViewController:(unsigned int)arg1 msgId:(id)arg2 msgTabType:(unsigned int)arg3;
- (id)getGameNativeMsgCenterViewController:(unsigned int)arg1 msgId:(id)arg2 msgTabType:(unsigned int)arg3;
- (BOOL)isfromChatOfType:(int)arg1;
- (id)getGameInfoWebController:(id)arg1 chatType:(int)arg2;
- (int)getGameDetailJumpTypeAndUrl:(id)arg1 DetailUrl:(id *)arg2;
- (id)jumpToWebView:(id)arg1 JumpUrl:(id)arg2 Title:(id)arg3;
- (BOOL)launchGameWithFailProcess:(id)arg1 Message:(id)arg2 AppStoreUrl:(id)arg3 LauchGameResultBlock:(id /* block */)arg4;
- (int)reportLaunchGameSuccess:(id)arg1;
- (BOOL)launchGameWithFailProcess:(id)arg1 AppStoreUrl:(id)arg2 LauchGameResultBlock:(id /* block */)arg3;
- (BOOL)tryLaunchGameOrJumpUrl:(id)arg1 AppID:(id)arg2 MessageExt:(id)arg3 UrlString:(id)arg4 ExtraInfo:(id)arg5 LaunchGameResultBlock:(id /* block */)arg6;
- (BOOL)tryLaunchGameOrJumpAppStore:(id)arg1 AppId:(id)arg2 AppMessage:(id)arg3 DowLoadUrl:(id)arg4 LaunchGameResultBlock:(id /* block */)arg5;
- (BOOL)tryLaunchGameOrJumpAppStore:(id)arg1 AppId:(id)arg2 MessageExt:(id)arg3 DowLoadUrl:(id)arg4 LaunchGameResultBlock:(id /* block */)arg5;
- (BOOL)tryLaunchGameOrJumpDetail:(id)arg1 GameInfo:(id)arg2 AppMessage:(id)arg3 SourceScene:(unsigned int)arg4 NeedUpdateLocalDetailInfo:(BOOL)arg5 LaunchGameResultBlock:(id /* block */)arg6;
- (long long)tryJumpWeAppOrH5:(id)arg1 Url:(id)arg2 H5EntryScene:(id)arg3;
- (long long)tryJumpWeAppOrH5:(id)arg1 Url:(id)arg2 H5EntryScene:(id)arg3 animated:(BOOL)arg4;
- (void)jumpLiteAppWithUrl:(id)arg1 navigationController:(id)arg2 extraInfo:(id)arg3;
- (id)tryJumpLiteAppWithUrl:(id)arg1 NavigationController:(id)arg2 liteVcPtr:(id *)arg3 extraInfo:(id)arg4;
- (id)tryJumpLiteAppWithUrl:(id)arg1 NavigationController:(id)arg2 liteVcPtr:(id *)arg3 extraInfo:(id)arg4 animated:(BOOL)arg5;
- (void)processLiteExtraInfo:(id)arg1 extraInfo:(id)arg2;
- (BOOL)tryJumpWeapp:(id)arg1 NavigationController:(id)arg2;
- (BOOL)launchWeAppWithAppId:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 NavigationController:(id)arg4 CompleteBlock:(id /* block */)arg5;
- (BOOL)launchWeAppWithAppId:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 debugModeType:(unsigned long long)arg4 NavigationController:(id)arg5 CompleteBlock:(id /* block */)arg6;
- (void)launchWeApp:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 debugModeType:(unsigned long long)arg4 NavigationController:(id)arg5 CompleteBlock:(id /* block */)arg6;
- (BOOL)jumpToAppstoreWithUrl:(id)arg1;
- (void)markHasPageCache:(id)arg1;
- (void)setPageCacheMark:(id)arg1;
- (BOOL)removePageCacheMark:(id)arg1;
- (id)getPageCacheMarks;
- (int)getPageCacheEnabledValue;
- (void)attachPageCacheCleaner:(id)arg1;
- (void)jumpGameCenter:(id)arg1 mainVC:(id)arg2;
- (BOOL)jumpExternPage:(id)arg1 mainPage:(id)arg2;
- (id)getReddotMsgUrl:(id)arg1;
- (id)openGameCenterViewController:(id)arg1 H5EntryScene:(id)arg2;
- (id)openLiteAppViewController:(id)arg1 scene:(id)arg2;
- (id)openGameWebViewController:(id)arg1 scene:(id)arg2;
- (id)getTabSettingControl;
- (id)getProfileUrl;
- (BOOL)shouldShowGameLifeHistroyItem;
- (id)getHistroyMsgJumpUrl;
- (void)deleteGameLifeHistroyMsg;
- (BOOL)disAbleJsApi;
- (void)startChatWithSelfUsername:(id)arg1 talker:(id)arg2 scene:(unsigned int)arg3 extInfo:(id)arg4 extra:(id)arg5 fromNav:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)startChatWithSessionId:(id)arg1 fromNav:(id)arg2 extra:(id)arg3;
- (void)getBlackList:(id)arg1;
- (void)setBlackList:(id)arg1 switchB:(BOOL)arg2 associateWxGameAccount:(BOOL)arg3;
- (void)getEntranceInfo:(id /* block */)arg1;
- (void)updateLastMsgUpdateTime;
- (id)getGameLifeAppPanelControl;
- (id)getGameLifeSettingControl;
- (BOOL)shouldShowEmotionBoard;
- (void)preloadUrl:(id)arg1 entryScene:(id)arg2 UIView:(id)arg3;
- (id)popWebViewControllerWithUrl:(id)arg1 entryScene:(id)arg2;
- (void)clearAllPreloadWebView;
- (void)fetchCurrentGameAccountState;
- (void)handleFetchedGameAccountState:(int)arg1 execTimeSec:(unsigned long long)arg2;
- (void)handleAccountStateChanged:(long long)arg1;
- (BOOL)handleApplyChatroomWhenAccountIsCancellation;
- (void)recoverAccount;
- (void)doGameAccountCancellationWithCanRevoke:(BOOL)arg1;
- (void)deleteAllGameRoleConversationInBackground;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)loadJsCommonLib;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)registerUpdateGameConfigNotification;
- (void)registerClearGameConfigNotification;
- (void)showSimpleAlert:(id)arg1;
- (void)onManulLoginOK;
- (void)onMainControllStart;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onLanguageChange;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (BOOL)saveDataToCacheFile:(id)arg1 Path:(id)arg2;
- (void)saveHomeDataToFileV5;
- (void)saveGameGlobalSettingToFile;
- (void)clearGameGlobalSettingFile;
- (BOOL)loadDataFromFile:(id)arg1 ToClass:(Class)arg2 ToData:(id *)arg3;
- (void)loadGameGlobalSettingFetchInfoFromeFile;
- (void)saveGlobalSettingFetchInfoToFile;
- (void)loadGameGlobalSettingDataFromFile;
- (void)loadCachedTabNavData;
- (void)loadCachedHomeDataV5;
- (id)getLocalHomeDataV5;
- (id)getLocalHomeTabNavV5;
- (void)forceUpdateNewGameAppInfo;
- (void)loadSubscribeDataFromFile;
- (void)handleGameReportResponse:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)isGameSubscribedWithAppID:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getDetailUrlGlobalSearch:(id)arg1;
- (id)globalStatusBarStyle;
- (id)topBackgroundColor;
- (BOOL)isDarkMode;
- (BOOL)isDisableWepkgRetryDownload;
- (BOOL)isDisableCommonLibPreload;
- (void)setDisableWepkgRetryDownload:(BOOL)arg1;
- (void)setDisableCommonLibPreload:(BOOL)arg1;
- (id)topBackgroundColorDynamic;
- (id)getA8KeyCookieKeyPairs;
- (unsigned int)a8KeyCookieExpireTime;
- (id)getGameCenterEntryInfo;
- (BOOL)shouldPrefetchGameIndexPageCgi;
- (id)getGameSimpleDnsControl;
- (id)getGameBannerControl;
- (id)gameWebVideoCacheIdentifyArray;
- (BOOL)isPreloadControlDisable;
- (unsigned int)getWebPreloadVideoMaxCount;
- (unsigned int)getGameVideoCacheDiskLimitTime;
- (id)getResourcePreloadControl;
- (id)getAtInfo;
- (id)getTickleInfo;
- (void)pushFullScreenH5FloatLayer:(id)arg1 HomeViewController:(id)arg2;
- (void)addTransparentH5FloatLayer:(id)arg1 HomeViewController:(id)arg2;
- (id)getAppStoreCountryCode;
- (void)setIapProductID:(id)arg1;
- (void)loadCountryInfoFromFile;
- (void)saveCountryInfoToFile;
- (void)fetchAppStoreRegion;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (id)getGameTailButton:(id)arg1;
- (BOOL)jumpToCanvasView:(id)arg1 NavigationController:(id)arg2;
- (void)onGameActionJump:(int)arg1 DataItem:(id)arg2 NavigationController:(id)arg3 QuitFullScreenBlock:(id /* block */)arg4;
- (void)onActionJumpReport:(int)arg1 DataItem:(id)arg2 DefinitelyOptype:(int)arg3 StatAction:(long long)arg4 NeverNoticeAgain:(BOOL)arg5;
- (void)getAllGameList:(BOOL)arg1;
- (BOOL)fetchHomeTabNavV5;
- (BOOL)fetchGameGlobalSettingIfNeeded;
- (void)markNeedFetchGlobalSettingForeground;
- (void)fetchGameGlobalSettingWithin:(unsigned int)arg1;
- (void)fetchGameGlobalSettingInstantly:(id)arg1;
- (void)fetchH5GameCustomMenu:(id)arg1;
- (id)getH5GameCustomMenuList:(id)arg1 IsShowOnSessionTop:(BOOL)arg2;
- (id)transformStandardWebViewMenuList:(id)arg1;
- (void)pullNewHomeDataFromServerV5:(BOOL)arg1;
- (void)handlePullNewHomeDataResponseV5:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePullFeedsListResponse:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)pullGameGlobalSetting:(unsigned int)arg1;
- (void)handlePullGameGlobalSetting:(id)arg1 Event:(unsigned int)arg2;
- (void)handleWepkgUpdateForExistList:(id)arg1 forceList:(id)arg2;
- (void)handlePullH5GameMenu:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePullGameTabNav:(id)arg1 Event:(unsigned int)arg2;
- (void)closeH5FloatLayerForJsApi:(id)arg1;
- (void)closeH5FloatLayer:(id)arg1;
- (void)setGameDetailTypeViaSearch:(id)arg1;
- (id)setAppStoreCountryCodeForTest:(id)arg1;
- (BOOL)isEnabledGameEntry;
- (id)getGameMsgSubScribeManagerUrl;
- (id)getPreInjectDataFromFindEnteryResource;
- (id)getGameAlbumInfoList;
- (id)getAlbumPublishUrl;
- (BOOL)wePkgGlobalConfigDisabled;
- (id)getGameGlobalSetting;
- (double)gameVideoEditMaxDuration;
- (BOOL)checkInsideRedpointExposureSilent;
- (id)gameVcClsNameSet;
- (BOOL)isLiteAppBanned:(id)arg1;
- (id)gameGlobalSetting;
- (void)setGameGlobalSetting:(id)arg1;
- (id)appStoreCountryCode;
- (void)setAppStoreCountryCode:(id)arg1;
- (id)iapProductID;
- (id)floatLayerWebViewController;
- (void)setFloatLayerWebViewController:(id)arg1;
- (id)entranceRedDot;
- (void)setEntranceRedDot:(id)arg1;
- (id)productId2AppStoreViewController;
- (void)setProductId2AppStoreViewController:(id)arg1;
- (id)weAppIDTransfer;
- (void)setWeAppIDTransfer:(id)arg1;
- (BOOL)isRecommendGroupCellThinStyle;
- (void)setIsRecommendGroupCellThinStyle:(BOOL)arg1;
- (id)entranceInfo;
- (void)setEntranceInfo:(id)arg1;
- (BOOL)useWXGWidget;
- (void)setUseWXGWidget:(BOOL)arg1;
- (id)gameCenterMappedKV;
- (void)setGameCenterMappedKV:(id)arg1;
- (int)curCancellationState;
- (void)setCurCancellationState:(int)arg1;
- (id)cancellationJumpInfo;
- (void)setCancellationJumpInfo:(id)arg1;
- (id)webVCKey2PrloadUrl;
- (void)setWebVCKey2PrloadUrl:(id)arg1;
- (id)url2PreloadWebVC;
- (void)setUrl2PreloadWebVC:(id)arg1;
- (id)preloadingWebVCSet;
- (void)setPreloadingWebVCSet:(id)arg1;
- (BOOL)isWeakNet;
- (void)setIsWeakNet:(BOOL)arg1;
- (int)netDetailFlag;
- (void)setNetDetailFlag:(int)arg1;
- (unsigned long long)userClickGameCenterTime;
- (void)setUserClickGameCenterTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

