@interface _TtC6WeChat28WSNativeHotListHotSearchData : NSObject <WebSearchMgrDelegate>
{
     hotSearchCompletion; // +0x8
     webSearchMgr; // +0x18
     isHotRankMode; // +0x20
     title; // +0x28
     refreshTitle; // +0x38
     refreshDocInfo; // +0x48
     refreshCanShow; // +0x58
     pos; // +0x60
     list; // +0x68
     canShow; // +0x70
     serverHideHotSearch; // +0x71
     isLoading; // +0x72
     isInterventionChecking; // +0x73
     hasLoaded; // +0x74
     optimisticSnapshots; // +0x78
     isCurrentSearchFromRefresh; // +0x80
     requestId; // +0x88
     session; // +0x98
     ctx; // +0xa0
     searchID; // +0xb0
     hotSearchReqCacheKey; // +0xc0
     clientExpireTime; // +0xd0
     lastRefreshTime; // +0xd8
     hasHotSearchData; // +0xe0
     hotSearchDataStatusChanged; // +0xe1
     hasReportExpose; // +0xe2
     hasTitleExposed; // +0xe3
     respType; // +0xe8
     hasNoCache; // +0xf0
}
+ (void)setHotSearchFromPage:(long long)arg1;
+ (long long)getHotSearchFromPage;
+ (long long)getHotSearchBusinessType;
+ (void)markHotSearchReappear;
+ (void)resetHotSearchFromPage;
+ (void)setHotSearchFromScene:(long long)arg1 fromSessionId:(id)arg2;
+ (long long)getHotSearchFromScene;
+ (id)getHotSearchFromSessionId;
+ (void)setHotSearchClickPosition:(long long)arg1;
+ (long long)getHotSearchClickPosition;
- (void)onOptimisticUpdateApply:(id)arg1;
- (void)onSearchRecmdDataSuccess:(id)arg1;
- (void)onSearchRecmdDataFail:(id)arg1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end
