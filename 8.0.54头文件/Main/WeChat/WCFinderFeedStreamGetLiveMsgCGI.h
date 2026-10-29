@interface WCFinderFeedStreamGetLiveMsgCGI : WCFinderLiveGetMsgBaseCGI
{
    BOOL _offline; // +0x8
    int _commentScene; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    long long _scene; // +0x20
    NSData * _liveCookies; // +0x28
    unsigned long long _liveId; // +0x30
    unsigned long long _objectID; // +0x38
    NSString * _objectNonceID; // +0x40
    NSString * _sessionExtraKey; // +0x48
    FinderLiveClientStatus * _liveClientStatus; // +0x50
}
- (id)initWithFinderDataItem:(id)arg1 liveCookies:(id)arg2 offline:(BOOL)arg3 scene:(long long)arg4 commentScene:(int)arg5 sessionExtraKey:(id)arg6 liveTaskId:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
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
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (id)objectNonceID;
- (void)setObjectNonceID:(id)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (id)liveClientStatus;
- (void)setLiveClientStatus:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end

