@interface WCFinderLiveKtvGetSongPlayInfoCGI : WCFinderLiveBaseCgi
{
    int _commentScene; // +0x8
    MMFinderLiveKTVSongItem * _songItem; // +0x10
    WCFinderDataItem * _finderDataItem; // +0x18
    long long _liveScene; // +0x20
    NSData * _liveCookies; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failureBlock; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 songItem:(id)arg2 liveScene:(long long)arg3 liveCookies:(id)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
- (id)initWithDataItem:(id)arg1 songItem:(id)arg2 liveScene:(long long)arg3 commentScene:(int)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)createRequestWithoutLiveTask;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)songItem;
- (void)setSongItem:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (long long)liveScene;
- (void)setLiveScene:(long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

