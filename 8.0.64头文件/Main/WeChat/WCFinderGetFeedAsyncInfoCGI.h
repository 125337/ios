@interface WCFinderGetFeedAsyncInfoCGI : WCFinderBaseCgi
{
    int _asyncLoadInfoScene; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSMutableArray * _scenesArray; // +0x20
    WCFinderGetFeedAsyncInfoCGIConfig * _config; // +0x28
}
- (id)initWithObjectUidList:(id)arg1 scene:(int)arg2 commentScene:(int)arg3 config:(id)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (id)initWithObjectUidList:(id)arg1 scenes:(id)arg2 commentScene:(int)arg3 config:(id)arg4 triggerScene:(int)arg5 location:(id)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (id)additionalUdfKVInfo;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (int)asyncLoadInfoScene;
- (void)setAsyncLoadInfoScene:(int)arg1;
- (id)scenesArray;
- (void)setScenesArray:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
