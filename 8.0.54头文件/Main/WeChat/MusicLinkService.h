@interface MusicLinkService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _checkUrlCacheList; // +0x8
    NSMutableDictionary * _checkUrlCacheTimeList; // +0x10
    long long _checkUrlResultExipredTimeInterval; // +0x18
    long long _checkUrlLimit; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned int)checkMusicUrlWithReqeuestInfo:(id)arg1 ignoreCache:(BOOL)arg2 completion:(id /* block */)arg3;
- (unsigned int)checkMusicUrls:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelCheckMusicUrl:(unsigned int)arg1;
- (id)cachedLinkInfoWithMid:(id)arg1;
- (id)checkUrlCacheList;
- (id)checkUrlCacheTimeList;
- (void)setCheckUrlCacheList:(id)arg1;
- (void)setCheckUrlCacheTimeList:(id)arg1;
- (long long)checkUrlResultExipredTimeInterval;
- (void)setCheckUrlResultExipredTimeInterval:(long long)arg1;
- (long long)checkUrlLimit;
- (void)setCheckUrlLimit:(long long)arg1;
- (void).cxx_destruct;
@end

