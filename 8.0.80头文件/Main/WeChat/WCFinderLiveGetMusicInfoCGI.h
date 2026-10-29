@interface WCFinderLiveGetMusicInfoCGI : WCFinderLiveBaseCgi
{
    NSMutableArray * _songIdList; // +0x8
    NSMutableArray * _briefMusicInfos; // +0x10
    NSData * _liveCookies; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 songIdList:(id)arg2 briefMusicInfos:(id)arg3 liveCookies:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)convertMusicItemList:(id)arg1;
- (id)songIdList;
- (id)briefMusicInfos;
- (id)finderLiveTask;
- (void)setSongIdList:(id)arg1;
- (void)setBriefMusicInfos:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
