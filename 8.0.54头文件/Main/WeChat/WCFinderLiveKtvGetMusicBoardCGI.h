@interface WCFinderLiveKtvGetMusicBoardCGI : WCFinderLiveBaseCgi
{
    unsigned int _boardType; // +0x8
    unsigned int _subBoardType; // +0xc
    unsigned int _scene; // +0x10
    NSData * _lastBuffer; // +0x18
    NSData * _liveCookies; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failureBlock; // +0x30
}
- (id)initWithLiveTaskId:(id)arg1 boardType:(unsigned int)arg2 subBoardType:(unsigned int)arg3 lastBuffer:(id)arg4 liveCookies:(id)arg5 scene:(unsigned int)arg6 successBlock:(id /* block */)arg7 failureBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (id)parseBoardTypeList:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (unsigned int)subBoardType;
- (void)setSubBoardType:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

