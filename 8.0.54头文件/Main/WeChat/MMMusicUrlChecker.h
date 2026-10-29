@interface MMMusicUrlChecker : MMObject <PBMessageObserverDelegate>
{
    id /* block */ _spamCheckCompleteHandler; // +0x8
    id /* block */ _shakeMusicCheckCompleteHandler; // +0x10
    NSString * m_nsMusicUrl; // +0x18
}
- (void)checkSpamMusicInfo:(id)arg1 completeHandler:(id /* block */)arg2;
- (void)checkSpamMusicInfo:(id)arg1 musicDataUrl:(id)arg2 completeHandler:(id /* block */)arg3;
- (void)cancelCheckSpam;
- (void)checkShakeMusicUrl:(id)arg1 completeHandler:(id /* block */)arg2;
- (void)cancelCheckShakeMusicUrl;
- (void)handleCheckMusicResponse:(id)arg1;
- (void)handleGetShakeMusicUrlResponse:(id)arg1;
- (unsigned int)checkMusicUrlWithAppId:(id)arg1 mid:(id)arg2 webUrl:(id)arg3 ignoreCache:(BOOL)arg4 completion:(id /* block */)arg5;
- (unsigned int)checkMusicUrlWithMusicInfo:(id)arg1 ignoreCache:(BOOL)arg2 completion:(id /* block */)arg3;
- (unsigned int)checkMusicUrlWithMusicInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelCheckMusicUrl:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end

