@interface WCWebSearchService : WSTemplateBaseMgr <MMMenuControllerExt, IWSSearchUtilExtension, YYWebviewProtectorExtension>
{
    CMessageWrap * _sessionMsgWrap; // +0x8
    WCFingertipSearchReportModel * _fingertipSearchReportModel; // +0x10
    WCTextSearchEntity * _sessionTextSearchEntity; // +0x18
    WCImageSearchEntity * _sessionImageSearchEntity; // +0x20
    WCImageSearchEntity * _originImageSearchEntity; // +0x28
    _TtC6WeChat19ReusablePageManager * _reusableWebPageManager; // +0x30
    NSArray * _blackListHostForSearch; // +0x38
    NSMutableDictionary * _liteAppSessionIdDict; // +0x40
    WCWebSearchSyncLogic * _searchSyncLogic; // +0x48
}
+ (id)FingertipSearchExpressHintWord;
+ (BOOL)IsFingertipSearchScene:(unsigned long long)arg1;
+ (BOOL)IsImageSearchScene:(unsigned long long)arg1;
- (id)init;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (id)reusableWebPageManager;
- (id)blackListHostForSearch;
- (id)exptBlackListHostForSearch;
- (id)defaultBlackListHostForSearch;
- (BOOL)shouldShowTimelineResult;
- (BOOL)shouldShowSearchEntryInDiscover;
- (id)searchSyncLogic;
- (BOOL)shouldEnableSearchSync;
- (void)syncForEnterWebSearch;
- (void)syncForExposeReplace;
- (void)syncWithActionNotifyData:(id)arg1;
- (void)syncForEnterDiscovery;
- (id)defaultTemplateZipPath;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned int)packageResouceSubType;
- (unsigned long long)localJSBizType;
- (void)reloadPackageConfig:(unsigned long long)arg1;
- (void)onMenuControllerDidShow;
- (void)onCloseSearchPreloadWebview;
- (void)appDidTerminateWKWebviewNetworkProcess;
- (id)sessionMsgWrap;
- (void)setSessionMsgWrap:(id)arg1;
- (id)fingertipSearchReportModel;
- (void)setFingertipSearchReportModel:(id)arg1;
- (id)sessionTextSearchEntity;
- (void)setSessionTextSearchEntity:(id)arg1;
- (id)sessionImageSearchEntity;
- (void)setSessionImageSearchEntity:(id)arg1;
- (id)originImageSearchEntity;
- (void)setOriginImageSearchEntity:(id)arg1;
- (void)setReusableWebPageManager:(id)arg1;
- (void)setBlackListHostForSearch:(id)arg1;
- (id)liteAppSessionIdDict;
- (void)setLiteAppSessionIdDict:(id)arg1;
- (void)setSearchSyncLogic:(id)arg1;
- (void).cxx_destruct;
@end
