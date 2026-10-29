@interface WCFinderGetLiveMsgCGI : WCFinderLiveGetMsgBaseCGI
{
    BOOL _offline; // +0x8
    unsigned int _offlineScene; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    long long _scene; // +0x20
    NSData * _liveCookies; // +0x28
    FinderLiveClientStatus * _liveClientStatus; // +0x30
    FinderLiveSeiStatInfo * _seiStatInfo; // +0x38
    NSString * _streamId; // +0x40
    WCFinderGetLiveMsgRequestParams * _reqParams; // +0x48
}
+ (id)getDescriptionForMsgConfig:(id)arg1;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 offline:(BOOL)arg3 offlineScene:(unsigned int)arg4 liveClientStatus:(id)arg5 seiStatInfo:(id)arg6 streamId:(id)arg7 requestParams:(id)arg8 successBlock:(id /* block */)arg9 failBlock:(id /* block */)arg10;
- (void)createRequest;
- (void)fillAudienceStatusInfo:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (id)getCurrentBoxId;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (BOOL)offline;
- (void)setOffline:(BOOL)arg1;
- (unsigned int)offlineScene;
- (void)setOfflineScene:(unsigned int)arg1;
- (id)liveClientStatus;
- (void)setLiveClientStatus:(id)arg1;
- (id)seiStatInfo;
- (void)setSeiStatInfo:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)reqParams;
- (void)setReqParams:(id)arg1;
- (void).cxx_destruct;
@end
