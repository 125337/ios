@interface WCFinderFavPostPlayCGI : WCFinderBaseCgi
{
    BOOL _isFavFlag; // +0x8
    unsigned long long _playId; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
}
- (id)initWithPlayID:(unsigned long long)arg1 favFlag:(BOOL)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)playId;
- (void)setPlayId:(unsigned long long)arg1;
- (BOOL)isFavFlag;
- (void)setIsFavFlag:(BOOL)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
