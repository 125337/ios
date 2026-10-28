@interface FTSWebSearchMgr : MMObject <WebSearchImageTaskDelegate, IStoreEmotionSingleDownloadMgrExt, WCFacadeExt, IHeadImageExt, PBMessageObserverDelegate, LocationRetrieveDelegate, MMResourceMgrExt, IMMLanguageMgrExt>
{
    BOOL _isActive; // +0x8
    BOOL _isWorkingForSuggestion; // +0x9
    unsigned int _lastEventID; // +0xc
    unsigned int _lastEventIDForSearchGuide; // +0x10
    unsigned int _lastEventIDForSuggestion; // +0x14
    unsigned int _fromCategoryId; // +0x18
    NSMutableDictionary * _dicSearchData; // +0x20
    NSMutableArray * _searchDataFIFO; // +0x28
    NSMutableDictionary * _retryParamsForWebSearch; // +0x30
    NSMutableDictionary * _retryParamsForSuggestion; // +0x38
    double _totalStayTimeSec; // +0x40
    double _totalWebViewTimeSec; // +0x48
    unsigned long long _bAction; // +0x50
    timeval _tvStart; // +0x58
    timeval _tvWebViewStart; // +0x68
    unsigned long long _eStatus; // +0x78
    ProtobufCGIWrap * _parallelRecommendMsg; // +0x80
    BOOL _isParallelReqRecommend; // +0x88
    NSString * _reqIdForWaitingRecommendData; // +0x90
    ProtobufCGIWrap * _parallelSearchMsg; // +0x98
    BOOL _isParallelReqSearch; // +0xa0
    NSString * _reqIdForWaitingSearchData; // +0xa8
    NSMutableDictionary * _wxamStreamMap; // +0xb0
    BOOL _hasLoadDownloadH5; // +0xb8
    unsigned int _preSearchPardusExpireTs; // +0xbc
    unsigned int _lastPreSearchTime; // +0xc0
    PardusSearchRequest * _pardusReq; // +0xc8
    PardusSearchResponse * _pardusResp; // +0xd0
    NSString * _queryOfpardusRespDone; // +0xd8
    BOOL _bForbidReportTime; // +0xe0
    BOOL _bForbidReportAction; // +0xe1
    BOOL _isParallFetchingRecmdData; // +0xe2
    id <WebSearchMgrDelegate> _delegate; // +0xe8
    NSString * _newestQueryText; // +0xf0
    NSString * _newestSearchText; // +0xf8
    NSString * _respJson; // +0x100
    unsigned long long _scene; // +0x108
    unsigned long long _localJSBizType; // +0x110
    WebSearchBoxCtrlInfo * _boxCtrlInfo; // +0x118
    NSString * _respDebugInfo; // +0x120
    NSMutableArray * _searchEventIDArray; // +0x128
    NSString * _trueRecmdDataRequestID; // +0x130
}
+ (id)getWKResourceTmpDir;
+ (BOOL)IsWebRecommendPublishId:(id)arg1;
- (id)dicHeadImgInfo;
- (id)dicSnsImgInfo;
- (id)dicCommonImgInfo;
- (id)dicEmotInfo;
- (void)clearResourceExtension;
- (void)cleanLocalResource;
- (id)getWKResourceTmpDir;
- (void)cleanWKTmpResourceIfNeeded;
- (id)makeWKCopyForRes:(id)arg1 fromFile:(id)arg2;
- (void)setImageResource:(id)arg1 toParams:(id)arg2 withSrcPath:(id)arg3 andBackUpUrl:(id)arg4;
- (BOOL)eableDowloadRawData;
- (void)pageRequestCommonImageList:(id)arg1;
- (void)pageRequestCommonImage:(id)arg1;
- (void)pageRequestSnsImageList:(id)arg1;
- (void)pageRequestSnsImage:(id)arg1;
- (void)pageRequestAvatarList:(id)arg1;
- (void)pageRequestAvatar:(id)arg1;
- (void)pageRequestEmot:(id)arg1;
- (void)downloadHeadImg:(id)arg1 withCategory:(unsigned char)arg2 withInfo:(id)arg3;
- (void)onHeadImageChange:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onImageReady:(id)arg1 forUrl:(id)arg2;
- (void)onImageFailForUrl:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)init;
- (id)getDetailSearchTips:(unsigned long long)arg1;
- (void)cancelSearch;
- (void)clearNetworkRequest;
- (void)sendVideoPlayInfoListToWeb:(id)arg1 searchId:(id)arg2;
- (BOOL)createEmoticonStream:(id)arg1;
- (BOOL)sendEmoticonStream:(id)arg1 images:(id)arg2;
- (id)endEmoticonStream:(id)arg1 duration:(long long)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)invalidSearchResultExceptRelatedSug;
- (BOOL)hasSearchSugResultFromHomePage:(id)arg1;
- (BOOL)shouldShowPardusWebview:(id)arg1;
- (BOOL)hasRelatedSearchSugResultFromHomePage:(id)arg1;
- (id)pardusRelatedSearchSugResultFor:(id)arg1 scene:(unsigned int)arg2;
- (id)pardusSearchResultFor:(id)arg1;
- (id)pardusWebJsonResultFor:(id)arg1;
- (id)pardusSearchIdFor:(id)arg1;
- (id)pardusRequestId:(id)arg1;
- (id)pardusWebSearchTips:(id)arg1;
- (id)pardusInfoData;
- (void)asyncWebRecommend:(id)arg1;
- (void)asyncSearchSimilarEmoticon:(id)arg1;
- (void)asyncSearchSuggest:(id)arg1;
- (void)hotSearchRequest:(id)arg1;
- (void)tryGetRecmdData:(id)arg1;
- (void)tryGetRecmdData:(id)arg1 isParallelRequest:(BOOL)arg2;
- (void)sendRequestForRemcdData:(id)arg1;
- (void)invalidateSuggestion;
- (void)asyncPardusSearchRequest:(id)arg1;
- (void)tryAsyncPardusPreSearchRequest:(id)arg1;
- (unsigned int)getVersion;
- (unsigned long long)getGuideParamFromConfig;
- (void)cacheRecmdData:(id)arg1 andScene:(unsigned int)arg2 andVersion:(unsigned int)arg3 andBusinessType:(unsigned long long)arg4;
- (void)onResetRecommendResource;
- (void)dealloc;
- (BOOL)isValidWebSearchLog:(id)arg1;
- (BOOL)isFromFuncQueryWithScene:(unsigned int)arg1 sceneActionType:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePardusSearch:(id)arg1;
- (void)handlePardusPreSearch:(id)arg1;
- (void)handleSearchSimilarEmoticon:(id)arg1;
- (void)handleSearchConfirm:(id)arg1;
- (void)handleWebRecommendCgi:(id)arg1 eventID:(unsigned int)arg2;
- (void)tryConsumeReddot:(unsigned int)arg1 redDotTimeStamp:(unsigned int)arg2;
- (void)handleGuideCgi:(id)arg1;
- (void)handleReportCgi:(id)arg1;
- (void)handleWebRecommendReportCgi:(id)arg1;
- (void)handleSuggestionCgi:(id)arg1;
- (void)addWebSearchLog:(id)arg1 forLogID:(unsigned int)arg2;
- (void)onLanguageChange;
- (void)sendWebRecommendRTReport:(id)arg1;
- (void)sendWebSearchRTReport:(id)arg1;
- (void)sendWebSearchRTReport:(id)arg1 cgi:(unsigned int)arg2;
- (void)sendWebSearchDataReport:(id)arg1 logid:(unsigned int)arg2 logstring:(id)arg3;
- (void)reportSimilarEmotClick:(id)arg1 requestMd5:(id)arg2 sessionId:(id)arg3 searchId:(id)arg4 requestId:(id)arg5 offset:(unsigned int)arg6 pos:(unsigned int)arg7;
- (void)reportSimilarEmotLongPress:(id)arg1 requestMd5:(id)arg2 sessionId:(id)arg3 searchId:(id)arg4 requestId:(id)arg5 offset:(unsigned int)arg6 pos:(unsigned int)arg7 actionType:(unsigned int)arg8;
- (void)reportSimilarEmotExpose:(id)arg1 requestMd5:(id)arg2 sessionId:(id)arg3 searchId:(id)arg4 requestId:(id)arg5 pos:(unsigned int)arg6;
- (void)reportSearchedEmotExpose:(id)arg1 content:(id)arg2 query:(id)arg3 sessionID:(id)arg4 requestID:(id)arg5 pageNumber:(long long)arg6;
- (void)reportSearchedEmotClick:(id)arg1 pageNumber:(unsigned int)arg2 query:(id)arg3 sessionID:(id)arg4 requestID:(id)arg5 position:(unsigned int)arg6 docID:(id)arg7 clickMd5Type:(unsigned int)arg8;
- (void)reportSimilarEmotSendClickSessionId:(id)arg1 searchId:(id)arg2 requestId:(id)arg3 clickedMd5:(id)arg4 actionType:(unsigned int)arg5;
- (void)reportVisit;
- (void)reportAction;
- (void)reportStayTime;
- (void)markResultValid:(BOOL)arg1 andQuery:(id)arg2 andType:(unsigned int)arg3;
- (void)markItemClicked;
- (void)onStartWebSearchFromCacheFFSee;
- (void)onPauseWebSearch;
- (void)onResumeWebSearch;
- (void)onEnterBackGround;
- (void)onEnterForeGround;
- (void)onCancel;
- (void)onWebRecommendInfoUpdate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)newestQueryText;
- (void)setNewestQueryText:(id)arg1;
- (id)newestSearchText;
- (void)setNewestSearchText:(id)arg1;
- (id)respJson;
- (void)setRespJson:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)localJSBizType;
- (void)setLocalJSBizType:(unsigned long long)arg1;
- (BOOL)bForbidReportTime;
- (void)setBForbidReportTime:(BOOL)arg1;
- (BOOL)bForbidReportAction;
- (void)setBForbidReportAction:(BOOL)arg1;
- (id)boxCtrlInfo;
- (void)setBoxCtrlInfo:(id)arg1;
- (id)respDebugInfo;
- (void)setRespDebugInfo:(id)arg1;
- (id)searchEventIDArray;
- (void)setSearchEventIDArray:(id)arg1;
- (BOOL)isParallFetchingRecmdData;
- (void)setIsParallFetchingRecmdData:(BOOL)arg1;
- (id)trueRecmdDataRequestID;
- (void)setTrueRecmdDataRequestID:(id)arg1;
- (void).cxx_destruct;
@end
