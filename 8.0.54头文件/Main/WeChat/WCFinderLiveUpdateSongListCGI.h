@interface WCFinderLiveUpdateSongListCGI : WCFinderLiveBaseCgi
{
    unsigned long long _seq; // +0x8
    NSMutableArray * _songNameList; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithFinderTaskId:(id)arg1 songList:(id)arg2 seq:(unsigned long long)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)transferToSongNameList:(id)arg1;
- (id)transferToSongItemList:(id)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (id)songNameList;
- (void)setSongNameList:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

