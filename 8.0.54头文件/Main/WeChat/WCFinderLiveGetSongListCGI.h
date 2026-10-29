@interface WCFinderLiveGetSongListCGI : WCFinderLiveBaseCgi
{
    BOOL _isAudience; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    MMFinderLiveSongItem * _singingSongItem; // +0x20
}
- (id)initWithFinderTaskId:(id)arg1 audience:(BOOL)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)transferToSongItemList:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)singingSongItem;
- (void)setSingingSongItem:(id)arg1;
- (void).cxx_destruct;
@end

