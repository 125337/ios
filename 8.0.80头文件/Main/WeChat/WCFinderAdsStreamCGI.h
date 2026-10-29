@interface WCFinderAdsStreamCGI : WCFinderBaseCgi
{
    int _commentScene; // +0x8
    WCFinderAdsSteamRequestParams * _params; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithParams:(id)arg1 commentScene:(int)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)params;
- (void)setParams:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
