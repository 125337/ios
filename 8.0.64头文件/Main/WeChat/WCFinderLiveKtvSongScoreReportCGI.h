@interface WCFinderLiveKtvSongScoreReportCGI : WCFinderLiveBaseCgi
{
    BOOL _isFinish; // +0x8
    MMFinderLiveKTVSongItem * _songItem; // +0x10
    FinderLiveKtvSongScoreReportRequest_ScoreInfo * _scoreInfo; // +0x18
    FinderLiveKtvSongScoreReportRequest_ExtReportInfo * _singExtReportInfo; // +0x20
    long long _liveScene; // +0x28
    NSData * _liveCookies; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failureBlock; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1 songItem:(id)arg2 scoreInfo:(id)arg3 extReportInfo:(id)arg4 finish:(BOOL)arg5 liveScene:(long long)arg6 liveCookies:(id)arg7 successBlock:(id /* block */)arg8 failureBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)songItem;
- (void)setSongItem:(id)arg1;
- (id)scoreInfo;
- (void)setScoreInfo:(id)arg1;
- (id)singExtReportInfo;
- (void)setSingExtReportInfo:(id)arg1;
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
