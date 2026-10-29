@interface WCFinderFetchEnhanceCGI : WCFinderBaseCgi
{
    int _viewScene; // +0x8
    int _eventType; // +0xc
    int _streamType; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
    NSString * _tid; // +0x28
    NSString * _nonceID; // +0x30
    WCFinderFetchEnhanceCgiStreamParams * _streamParams; // +0x38
    WCFinderFetchEnhanceCgiStatusParams * _statusParams; // +0x40
    WCFinderFetchEnhanceCgiParams * _optionalParams; // +0x48
}
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 viewerScene:(int)arg3 eventType:(int)arg4 enhanceStreamType:(int)arg5 streamParams:(id)arg6 statusParams:(id)arg7 optionalParams:(id)arg8 successful:(id /* block */)arg9 failure:(id /* block */)arg10;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (int)viewScene;
- (void)setViewScene:(int)arg1;
- (int)eventType;
- (void)setEventType:(int)arg1;
- (int)streamType;
- (void)setStreamType:(int)arg1;
- (id)streamParams;
- (void)setStreamParams:(id)arg1;
- (id)statusParams;
- (void)setStatusParams:(id)arg1;
- (id)optionalParams;
- (void)setOptionalParams:(id)arg1;
- (void).cxx_destruct;
@end
