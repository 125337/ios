@interface WCFinderLiveRelateListCGI : WCFinderBaseCgi
{
    int _commentScene; // +0x8
    NSData * _lastBuff; // +0x10
    NSString * _tid; // +0x18
    NSString * _nonceID; // +0x20
    NSString * _sessionID; // +0x28
    id /* block */ _successful; // +0x30
    id /* block */ _failure; // +0x38
    NSData * _liveRelatedLastBuff; // +0x40
    NSData * _liveCookies; // +0x48
}
- (id)initWithLastBuff:(id)arg1 tid:(id)arg2 nonceID:(id)arg3 sessionID:(id)arg4 location:(id)arg5 scene:(long long)arg6 commentScene:(int)arg7 clientStatus:(id)arg8 liveClientStatus:(id)arg9 lbsTabTipsInfo:(id)arg10 liveRelatedLastBuff:(id)arg11 commByPass:(id)arg12 pullType:(int)arg13 readStats:(id)arg14 curObjectIndex:(long long)arg15 liveCookies:(id)arg16 successful:(id /* block */)arg17 failure:(id /* block */)arg18;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)getRoomStateWithAvgSpeed:(unsigned int)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)liveRelatedLastBuff;
- (void)setLiveRelatedLastBuff:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (void).cxx_destruct;
@end

