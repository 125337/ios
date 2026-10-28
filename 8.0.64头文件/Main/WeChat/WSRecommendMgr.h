@interface WSRecommendMgr : WSTemplateBaseMgr <IFunctionMsgExt, PBMessageObserverDelegate, NewLifeManagerExt, IMMLanguageMgrExt, IMinimizeTaskDelegateInterface>
{
    BOOL _isAuthOK; // +0x8
    BOOL _isRequestingOpenIdForOpenProfile; // +0x9
    BOOL _hasRetryGetColikeBlockList; // +0xa
    BOOL _hasRetryGetColikeHideList; // +0xb
    BOOL _isRequestingGetColikeBlockList; // +0xc
    BOOL _isRequestingGetColikeHideList; // +0xd
    WSRecommendSetting * _setting; // +0x10
    NSDictionary * _tabsInfo; // +0x18
    _TtC6WeChat26WeSeePageRecoverController * _pageRecoverController; // +0x20
    WSTabInfoList * _tabsInfoModel; // +0x28
    NSMutableDictionary * _dicWrdCache; // +0x30
    NSMutableArray * _colikeHideList; // +0x38
    NSMutableArray * _colikeBlockList; // +0x40
    NSMutableArray * _colikeRequestList; // +0x48
    NSMutableArray * _colikeSucList; // +0x50
    NSMutableArray * _colikeFailList; // +0x58
    NSMutableDictionary * _tempSaveDic; // +0x60
    NSMutableDictionary * _tempVideoCacheTimeDic; // +0x68
    WSRecommendColikeStorage * _colikeLocalStorage; // +0x70
    WSRecommendColikeTempModel * _colikeHideTempModel; // +0x78
    WSRecommendColikeTempModel * _colikeBlockTempModel; // +0x80
    NSRecursiveLock * _lock; // +0x88
    UIImage * _mVideoFlowIcon; // +0x90
    NSDictionary * _from3rdAppShareParams; // +0x98
    WSTabRedDotInfoCollector * _tabRedDotInfoCollector; // +0xa0
}
+ (BOOL)IsSupportTopStoryPlugin;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (id)defaultTemplateZipPath;
- (unsigned int)defaultTemplateZipVersion;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned long long)localJSBizType;
- (void)reloadPackageConfig:(unsigned long long)arg1;
- (id)fileDir;
- (id)settingPath;
- (id)filePath;
- (void)loadCache;
- (BOOL)saveCache;
- (void)loadColikeCache;
- (BOOL)saveSetting;
- (void)outsideSetString:(id)arg1 forKey:(id)arg2;
- (id)outsideGetStringforKey:(id)arg1;
- (void)outsideSetVideoCacheTime:(unsigned int)arg1 forKey:(id)arg2;
- (unsigned int)outsideGetVideoCacheTimeFor:(id)arg1;
- (void)outsideSetFrom3rdAppShareParams:(id)arg1;
- (id)outsideGetFrom3rdAppShareParams;
- (id)tabsInfo;
- (id)tabsInfoModel;
- (void)updateTabsInfo;
- (id)tabParamsText;
- (id)tabListInfo;
- (id)generateBaseSharedPage:(unsigned long long)arg1;
- (id)generatePushingSharedPage:(unsigned long long)arg1 reddotId:(id)arg2 useLocalCache:(BOOL *)arg3 useParallel:(BOOL *)arg4;
- (void)preloadSharedPageWebViewIfNeeded:(id)arg1;
- (id)generatePluginMsgRequestBuffer:(id)arg1;
- (void)onFunctionMsgRequest:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (void)logCacheInfo;
- (BOOL)isFFWebRecommendOpen;
- (BOOL)isFFWebRecommendOpenForGlobalSearch;
- (BOOL)confirmFullDragTips;
- (BOOL)confirmVideoGoodLookEducateAlertFlag;
- (BOOL)resetVideoGoodLookEducateAlertFlag;
- (BOOL)confirmVideoGoodLookTipEducateToastFlag;
- (BOOL)resetVideoGoodLookTipEducateToastFlag;
- (BOOL)updateContainWowContent:(BOOL)arg1 timestamp:(unsigned int)arg2;
- (void)asyncPostCommentWithContent:(id)arg1 toDoc:(id)arg2 withReplyId:(id)arg3 subReplyId:(id)arg4 docUrl:(id)arg5 requestId:(id)arg6 title:(id)arg7 searchId:(id)arg8 scene:(unsigned int)arg9 subScene:(unsigned int)arg10 byPass:(id)arg11 source:(unsigned int)arg12;
- (void)asyncSetCommentWithDocId:(id)arg1 commentId:(id)arg2 opType:(unsigned int)arg3 requestId:(id)arg4 content:(id)arg5 scene:(unsigned int)arg6 subScene:(unsigned int)arg7 searchId:(id)arg8 vid:(id)arg9 byPass:(id)arg10 source:(unsigned int)arg11;
- (void)asyncGetWowHideList;
- (void)asyncGetWowBlockList;
- (void)asyncGetWowBlackFriendListWith:(int)arg1;
- (void)onGetColikeListDataReturn:(BOOL)arg1 type:(unsigned int)arg2 list:(id)arg3;
- (void)asyncStepGetWowBlackFriendListWith:(int)arg1 offset:(unsigned int)arg2 version:(unsigned long long)arg3;
- (void)asyncColikeWithActionItems:(id)arg1;
- (id)devideAsyncColikeWithActionItems:(id)arg1;
- (void)asyncRequestPostColikeToWow:(id)arg1 objectBuffer:(id)arg2 appInfo:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetColikeListCGI:(id)arg1;
- (void)handleGetColikeBlockListResp:(id)arg1 oriRequest:(id)arg2;
- (void)handleGetColikeHideListResp:(id)arg1 oriRequest:(id)arg2;
- (void)mergeBlockList;
- (void)mergeHideList;
- (void)handleColikeBlockCGI:(id)arg1;
- (id)outsideGetWowHideList;
- (id)outsideGetWowBlockList;
- (BOOL)isFirstTimeGetColikeListWithType:(unsigned int)arg1;
- (BOOL)isInK1kFlow;
- (void)preloadContactAuthorityData;
- (void)outsideModLocalColikeDataWithType:(unsigned int)arg1 list:(id)arg2;
- (void)handlePostCommentCGI:(id)arg1;
- (void)handleSetCommentCGI:(id)arg1;
- (void)handleColikePostCGI:(id)arg1;
- (void)onNewLifeMainSwtichValueChanged;
- (void)onSearchConfigDataUpdated;
- (long long)categoryIdForTab:(unsigned long long)arg1;
- (long long)topStoriesCategoryIdForTab:(unsigned long long)arg1;
- (BOOL)hasTwoRecommendTab;
- (BOOL)hasThreeRecommendTab;
- (id)setting;
- (void)setTabsInfo:(id)arg1;
- (id)pageRecoverController;
- (void)setPageRecoverController:(id)arg1;
- (void)setTabsInfoModel:(id)arg1;
- (id)dicWrdCache;
- (void)setDicWrdCache:(id)arg1;
- (BOOL)isAuthOK;
- (void)setIsAuthOK:(BOOL)arg1;
- (BOOL)isRequestingOpenIdForOpenProfile;
- (void)setIsRequestingOpenIdForOpenProfile:(BOOL)arg1;
- (id)colikeHideList;
- (void)setColikeHideList:(id)arg1;
- (id)colikeBlockList;
- (void)setColikeBlockList:(id)arg1;
- (id)colikeRequestList;
- (void)setColikeRequestList:(id)arg1;
- (id)colikeSucList;
- (void)setColikeSucList:(id)arg1;
- (id)colikeFailList;
- (void)setColikeFailList:(id)arg1;
- (id)tempSaveDic;
- (void)setTempSaveDic:(id)arg1;
- (id)tempVideoCacheTimeDic;
- (void)setTempVideoCacheTimeDic:(id)arg1;
- (id)colikeLocalStorage;
- (void)setColikeLocalStorage:(id)arg1;
- (id)colikeHideTempModel;
- (void)setColikeHideTempModel:(id)arg1;
- (id)colikeBlockTempModel;
- (void)setColikeBlockTempModel:(id)arg1;
- (BOOL)hasRetryGetColikeBlockList;
- (void)setHasRetryGetColikeBlockList:(BOOL)arg1;
- (BOOL)hasRetryGetColikeHideList;
- (void)setHasRetryGetColikeHideList:(BOOL)arg1;
- (BOOL)isRequestingGetColikeBlockList;
- (void)setIsRequestingGetColikeBlockList:(BOOL)arg1;
- (BOOL)isRequestingGetColikeHideList;
- (void)setIsRequestingGetColikeHideList:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)mVideoFlowIcon;
- (void)setMVideoFlowIcon:(id)arg1;
- (id)from3rdAppShareParams;
- (void)setFrom3rdAppShareParams:(id)arg1;
- (id)tabRedDotInfoCollector;
- (void)setTabRedDotInfoCollector:(id)arg1;
- (void).cxx_destruct;
@end
