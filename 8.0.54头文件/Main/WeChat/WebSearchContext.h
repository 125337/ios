@interface WebSearchContext : NSObject <NSCopying>
{
    BOOL _isSubSearch; // +0x8
    BOOL _isFromDiscoverSearch; // +0x9
    BOOL _forbidNavCancelButton; // +0xa
    BOOL _forceShowNavCancelButton; // +0xb
    BOOL _forbidNavBackButton; // +0xc
    BOOL _enableRestoreEducatePage; // +0xd
    BOOL _enableParallelRequest; // +0xe
    BOOL _enableParallelSearchGuideRequest; // +0xf
    BOOL _isImageSearch; // +0x10
    BOOL _isFromFinder; // +0x11
    unsigned int _mpSubscene; // +0x14
    unsigned long long _actionType; // +0x18
    unsigned long long _searchEditState; // +0x20
    unsigned long long _searchBarType; // +0x28
    long long _cursorIndex; // +0x30
    TagCtrlInfo * _tagCtrlInfo; // +0x38
    double _delayShowTimeForWebviewDidFinishLoad; // +0x40
    NSMutableDictionary * _map; // +0x48
    NSMutableDictionary * _customNavBarParams; // +0x50
}
- (id)init;
- (void)urlParamsSelfComplement;
- (BOOL)isEmoticonSearchController;
- (BOOL)isChatSearch;
- (BOOL)isImageSearchScene;
- (BOOL)isFromTopicSearch;
- (unsigned long long)searchBarType;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void)updateSessionId;
- (id)thirdExtParam;
- (void)setThirdExtParam:(id)arg1;
- (BOOL)isFromVoice;
- (void)setIsFromVoice:(BOOL)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (id)reqkey;
- (void)setReqkey:(id)arg1;
- (id)cacheImageSrc;
- (void)setCacheImageSrc:(id)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (BOOL)isHomePage;
- (void)setIsHomePage:(BOOL)arg1;
- (id)recommendSearchQuery;
- (void)setRecommendSearchQuery:(id)arg1;
- (id)cachePageResult;
- (void)setCachePageResult:(id)arg1;
- (id)toViewType;
- (void)setToViewType:(id)arg1;
- (BOOL)forbidLiteapp;
- (void)setForbidLiteapp:(BOOL)arg1;
- (id)searchPlaceHolder;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)searchEditState;
- (void)setSearchEditState:(unsigned long long)arg1;
- (BOOL)isSubSearch;
- (void)setIsSubSearch:(BOOL)arg1;
- (BOOL)isFromDiscoverSearch;
- (void)setIsFromDiscoverSearch:(BOOL)arg1;
- (BOOL)forbidNavCancelButton;
- (void)setForbidNavCancelButton:(BOOL)arg1;
- (BOOL)forceShowNavCancelButton;
- (void)setForceShowNavCancelButton:(BOOL)arg1;
- (BOOL)forbidNavBackButton;
- (void)setForbidNavBackButton:(BOOL)arg1;
- (BOOL)enableRestoreEducatePage;
- (void)setEnableRestoreEducatePage:(BOOL)arg1;
- (void)setSearchBarType:(unsigned long long)arg1;
- (BOOL)enableParallelRequest;
- (void)setEnableParallelRequest:(BOOL)arg1;
- (BOOL)enableParallelSearchGuideRequest;
- (void)setEnableParallelSearchGuideRequest:(BOOL)arg1;
- (BOOL)isImageSearch;
- (void)setIsImageSearch:(BOOL)arg1;
- (long long)cursorIndex;
- (void)setCursorIndex:(long long)arg1;
- (id)tagCtrlInfo;
- (void)setTagCtrlInfo:(id)arg1;
- (unsigned int)mpSubscene;
- (void)setMpSubscene:(unsigned int)arg1;
- (double)delayShowTimeForWebviewDidFinishLoad;
- (void)setDelayShowTimeForWebviewDidFinishLoad:(double)arg1;
- (id)map;
- (void)setMap:(id)arg1;
- (id)customNavBarParams;
- (void)setCustomNavBarParams:(id)arg1;
- (BOOL)isFromFinder;
- (void)setIsFromFinder:(BOOL)arg1;
- (void).cxx_destruct;
@end

