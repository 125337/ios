@interface WCFinderLiveKtvSongScoreReportCGI : WCFinderLiveBaseCgi
{
    BOOL _isFinish; // +0x8
    MMFinderLiveKTVSongItem * _songItem; // +0x10
    FinderLiveKtvSongScoreReportRequest_ScoreInfo * _scoreInfo; // +0x18
    long long _liveScene; // +0x20
    NSData * _liveCookies; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failureBlock; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 songItem:(id)arg2 scoreInfo:(id)arg3 finish:(BOOL)arg4 liveScene:(long long)arg5 liveCookies:(id)arg6 successBlock:(id /* block */)arg7 failureBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)songItem;
- (void)setSongItem:(id)arg1;
- (id)scoreInfo;
- (void)setScoreInfo:(id)arg1;
- (BOOL)isFinish;
- (void)setIsFinish:(BOOL)arg1;
- (long long)liveScene;
- (void)setLiveScene:(long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

