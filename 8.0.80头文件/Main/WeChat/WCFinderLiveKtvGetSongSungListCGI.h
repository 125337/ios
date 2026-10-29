@interface WCFinderLiveKtvGetSongSungListCGI : WCFinderLiveBaseCgi
{
    BOOL _onlyMysong; // +0x8
    BOOL _isReverseOrder; // +0x9
    unsigned int _scene; // +0xc
    unsigned int _status; // +0x10
    NSData * _liveCookies; // +0x18
    NSData * _lastBuffer; // +0x20
    unsigned long long _songListVersion; // +0x28
    NSString * _targetSongUniqueId; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failureBlock; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 onlyMysong:(BOOL)arg4 isReverseOrder:(BOOL)arg5 lastBuffer:(id)arg6 songListVersion:(unsigned long long)arg7 targetSongUniqueId:(id)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (BOOL)onlyMysong;
- (void)setOnlyMysong:(BOOL)arg1;
- (BOOL)isReverseOrder;
- (void)setIsReverseOrder:(BOOL)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)songListVersion;
- (void)setSongListVersion:(unsigned long long)arg1;
- (id)targetSongUniqueId;
- (void)setTargetSongUniqueId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
