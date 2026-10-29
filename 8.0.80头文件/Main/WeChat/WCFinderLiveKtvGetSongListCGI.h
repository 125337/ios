@interface WCFinderLiveKtvGetSongListCGI : WCFinderLiveBaseCgi
{
    BOOL _onlyMysong; // +0x8
    unsigned int _scene; // +0xc
    int _commentScene; // +0x10
    unsigned int _status; // +0x14
    unsigned int _requestCnt; // +0x18
    WCFinderDataItem * _finderDataItem; // +0x20
    NSData * _liveCookies; // +0x28
    unsigned long long _songListVersion; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failureBlock; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 status:(unsigned int)arg4 onlyMysong:(BOOL)arg5 songListVersion:(unsigned long long)arg6 successBlock:(id /* block */)arg7 failureBlock:(id /* block */)arg8;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 status:(unsigned int)arg4 onlyMysong:(BOOL)arg5 requestCnt:(unsigned int)arg6 songListVersion:(unsigned long long)arg7 successBlock:(id /* block */)arg8 failureBlock:(id /* block */)arg9;
- (id)initWithDataItem:(id)arg1 scene:(unsigned int)arg2 commentScene:(int)arg3 status:(unsigned int)arg4 onlyMysong:(BOOL)arg5 requestCnt:(unsigned int)arg6 songListVersion:(unsigned long long)arg7 successBlock:(id /* block */)arg8 failureBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)createRequestWithoutTask;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)updatePendingSongsAndVersion:(id)arg1;
- (id)transferToSongItemsFromSongInfos:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (BOOL)onlyMysong;
- (void)setOnlyMysong:(BOOL)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)requestCnt;
- (void)setRequestCnt:(unsigned int)arg1;
- (unsigned long long)songListVersion;
- (void)setSongListVersion:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
