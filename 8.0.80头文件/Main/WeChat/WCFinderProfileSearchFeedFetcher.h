@interface WCFinderProfileSearchFeedFetcher : NSObject <WCFinderProfileDataFetcher>
{
    BOOL _firstPageFetched; // +0x8
    int _commentScene; // +0xc
    WCFinderStreamLoadingState * _profileLoadingState; // +0x10
    WCFinderStreamLoadingState * _profilePullingState; // +0x18
    WCFinderGetRelatedListParams * _params; // +0x20
}
- (id)initWithSessionId:(id)arg1 encryptTid:(id)arg2 nonceId:(id)arg3 scene:(int)arg4 reportModel:(id)arg5 topHasMore:(BOOL)arg6;
- (id)createParams:(id)arg1 encryptTid:(id)arg2 nonceId:(id)arg3 reportModel:(id)arg4;
- (void)profileRequestFirstPage:(id)arg1 complete:(id /* block */)arg2;
- (void)profileRequestNextPage:(id)arg1 complete:(id /* block */)arg2;
- (void)profileRequestPrePage:(id)arg1 complete:(id /* block */)arg2;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)profileLoadingState;
- (void)setProfileLoadingState:(id)arg1;
- (id)profilePullingState;
- (void)setProfilePullingState:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (BOOL)firstPageFetched;
- (void)setFirstPageFetched:(BOOL)arg1;
- (void).cxx_destruct;
@end
