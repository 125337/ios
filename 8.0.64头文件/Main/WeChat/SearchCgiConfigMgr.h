@interface SearchCgiConfigMgr : MMUserService <PBMessageObserverDelegate, MMKernelExt, IMsgExt, MMLimitedModeExt, MMServiceProtocol>
{
    SearchCgiConfigData * _cgiConfig; // +0x8
    BOOL _bProtectRequst; // +0x10
    unsigned int _lastFailRequstTime; // +0x14
    SearchCgiConfigData * _dicDefaultConfig; // +0x18
    BOOL _isUpdatingCgiConfig; // +0x20
}
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (id)getValidConfig;
- (id)getWebSearchBarWording;
- (id)getSearchBarConfig;
- (id)getGlobalSearchInputConfig;
- (id)getAISearchInnerInputConfig;
- (id)getAISearchWithAdInnerInputConfig;
- (id)getAdYBInnerInputConfig;
- (id)getHotSearchConfig;
- (id)getAISearchConfig;
- (id)getChatSearchPatternConfig;
- (BOOL)shouldHideKeyboardIn:(unsigned long long)arg1 bizType:(unsigned long long)arg2;
- (BOOL)isSugOpenForBrandArticleSearch;
- (BOOL)isSugOpenForGlobalMix;
- (BOOL)isSugOpenForGlobalSnsMore;
- (BOOL)isSugOpenForGlobalBizMore;
- (BOOL)isSugOpenForGlobalWeAppMore;
- (BOOL)isSugOpenForGlobalMusicMore;
- (BOOL)isSugOpenForGlobalEmotMore;
- (BOOL)isSugOpenForGlobalNovelMore;
- (BOOL)isSugOpenForTabBiz;
- (BOOL)isSugOpenForTabBizServiceMore;
- (BOOL)isSugOpenForTabArticle;
- (BOOL)isSugOpenForTabArticleLocal;
- (BOOL)isSugOpenForTabSns;
- (BOOL)isSugOpenForTabSnsLocal;
- (BOOL)isSugOpenForTabMusic;
- (BOOL)isSugOpenForTabEmot;
- (BOOL)isSugOpenForTabNovel;
- (BOOL)isSugOpenForMFSBiz;
- (id)aiSummaryMPPrefixes;
- (id)getDiscoverSearchGuideConfigForH5;
- (id)getSearchGuideConfig:(long long)arg1;
- (BOOL)isFFWebSearchEntryOpen;
- (id)getFFWebSearchTitle;
- (id)getWebSearchIconUrlInLabDetailView;
- (id)getFFBrowseEntryTitle;
- (id)routeExptItemFor:(unsigned long long)arg1;
- (id)getFFBrowseIconUrl;
- (id)getBrowseIconUrlInLabDetailView;
- (unsigned long long)getFFWebSearchGuideParam;
- (BOOL)isSnsContactsMatchOpen;
- (unsigned long long)getSnsContactMatchQueryLenLimit;
- (id)getSearchId;
- (id)getTopstoryTabParam;
- (id)getConfigStringFor:(id)arg1;
- (id)getConfigDictFor:(id)arg1;
- (void)initData;
- (void)writeDataToFile;
- (void)removeFile;
- (id)dataPath;
- (BOOL)tryRequest;
- (void)cleanAllCache;
- (void)resetData;
- (id)getDefaultConfig;
- (id)getDefaultConfigPathForLang:(id)arg1;
- (id)getGuideConfigTilte:(unsigned long long)arg1;
- (id)getBizTopSearchPlaceHolder;
- (void)doRequestByJSApi;
- (void)doRequest;
- (void)doRequestWithScene:(unsigned long long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleLogicError;
- (void)handleResp:(id)arg1 andRequest:(id)arg2;
- (void)parseDic:(id)arg1 requestKeys:(id)arg2;
- (void)onAuthOK;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (BOOL)isUpdatingCgiConfig;
- (void)setIsUpdatingCgiConfig:(BOOL)arg1;
- (void).cxx_destruct;
@end
