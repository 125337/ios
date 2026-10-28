@interface WCMegaVideoGetRelatedListCGI : WCFinderBaseCgi
{
    int _scene; // +0x8
    NSData * _lastBuff; // +0x10
    NSString * _videoId; // +0x18
    NSString * _videoNonceId; // +0x20
    WCMegaVideoLocation * _location; // +0x28
    MegaVideoClientStatus * _clientStatus; // +0x30
    NSString * _fromUsername; // +0x38
    NSString * _toUsername; // +0x40
    NSData * _objectSessionInfo; // +0x48
    id /* block */ _successful; // +0x50
    id /* block */ _failure; // +0x58
}
- (id)initWithLastBuff:(id)arg1 videoId:(id)arg2 videoNonceId:(id)arg3 scene:(int)arg4 fromUsername:(id)arg5 toUsername:(id)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (id)initWithLastBuff:(id)arg1 videoId:(id)arg2 videoNonceId:(id)arg3 location:(id)arg4 scene:(int)arg5 clientStatus:(id)arg6 fromUsername:(id)arg7 toUsername:(id)arg8 objectSectionInfo:(id)arg9 successful:(id /* block */)arg10 failure:(id /* block */)arg11;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (id)videoNonceId;
- (void)setVideoNonceId:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)objectSessionInfo;
- (void)setObjectSessionInfo:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
