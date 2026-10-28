@interface _TtC6WeChat28WSNativeHotListHotSearchData : NSObject <WebSearchMgrDelegate>
{
     hotSearchCompletion; // +0x8
     webSearchMgr; // +0x18
     title; // +0x20
     refreshTitle; // +0x30
     refreshDocInfo; // +0x40
     refreshCanShow; // +0x50
     pos; // +0x58
     list; // +0x60
     canShow; // +0x68
     isLoading; // +0x69
     hasLoaded; // +0x6a
     isCurrentSearchFromRefresh; // +0x6b
     requestId; // +0x70
     session; // +0x80
     ctx; // +0x88
     searchID; // +0x98
     hotSearchReqCacheKey; // +0xa8
     clientExpireTime; // +0xb8
     lastRefreshTime; // +0xc0
     hasHotSearchData; // +0xc8
     hotSearchDataStatusChanged; // +0xc9
     hasReportExpose; // +0xca
}
- (void)onSearchRecmdDataSuccess:(id)arg1;
- (void)onSearchRecmdDataFail:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
