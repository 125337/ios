@interface WCFinderSearchCGI : WCFinderBaseCgi
{
    int _scene; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSString * _queryText; // +0x20
    NSData * _lastBuffer; // +0x28
    NSString * _requestID; // +0x30
}
+ (id)hotwordSessionBufferKey;
- (id)initWithQueryText:(id)arg1 requestID:(id)arg2 scene:(int)arg3 lastBuffer:(id)arg4 objHotwordInfoBuff:(id)arg5 optionalParams:(id)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (id)initWithQueryText:(id)arg1 requestID:(id)arg2 scene:(int)arg3 lastBuffer:(id)arg4 optionalParams:(id)arg5 commentScene:(int)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (id)initWithSearchUGCParams:(id)arg1 lastBuffer:(id)arg2 requestID:(id)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)queryText;
- (void)setQueryText:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (void).cxx_destruct;
@end
