@interface WCFinderGetHistoryCGI : WCFinderBaseCgi
{
    int _tabType; // +0x8
    int _commentscene; // +0xc
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSString * _username; // +0x20
    NSString * _fluencyReportSceneKey; // +0x28
}
- (id)initWithLastBuff:(id)arg1 clientStatus:(id)arg2 username:(id)arg3 tabType:(int)arg4 commentscene:(int)arg5 fluencyReportSceneKey:(id)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)reportCGIStart;
- (void)reportCGIFinish;
- (void)reportCGIFail;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)commentscene;
- (void)setCommentscene:(int)arg1;
- (id)fluencyReportSceneKey;
- (void)setFluencyReportSceneKey:(id)arg1;
- (void).cxx_destruct;
@end
