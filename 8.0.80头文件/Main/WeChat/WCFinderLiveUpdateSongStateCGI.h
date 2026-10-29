@interface WCFinderLiveUpdateSongStateCGI : WCFinderLiveBaseCgi
{
    BOOL _singing; // +0x8
    unsigned long long _seq; // +0x10
    NSString * _songName; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 songName:(id)arg2 isSinging:(BOOL)arg3 seq:(unsigned long long)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (BOOL)singing;
- (void)setSinging:(BOOL)arg1;
- (id)songName;
- (void)setSongName:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
