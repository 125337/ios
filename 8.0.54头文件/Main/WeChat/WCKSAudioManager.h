@interface WCKSAudioManager : MMUserService <MMServiceProtocol, KSAudioPlayerUserDefineProtocol>
{
    BOOL _useCronetDownloader; // +0x8
    NSMutableDictionary * _referrerDict; // +0x10
}
- (void)onServiceInit;
- (id)cacheRootPath;
- (void)makeSureCachePatchExist;
- (void)cleanUpCache;
- (BOOL)isNetOk;
- (id)createUserAudioProcessor:(id)arg1;
- (id)createAudioDownloader;
- (unsigned int)downloadRetryCnt;
- (id)limitNetParam;
- (void)setReferrer:(id)arg1 forUrl:(id)arg2;
- (id)getReferrerWithUrl:(id)arg1;
- (BOOL)useCronetDownloader;
- (void)setUseCronetDownloader:(BOOL)arg1;
- (id)referrerDict;
- (void)setReferrerDict:(id)arg1;
- (void).cxx_destruct;
@end

