@interface MJServerAIComposingComposer : NSObject
{
    NSURLSessionDownloadTask * _musicDownloadTask; // +0x8
}
+ (void)cleanupMusicCache;
- (void)composeWithTaskResult:(id)arg1 selectedBGM:(id)arg2 progressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)recomposeWithSelectedBGM:(id)arg1 progressBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)composeWithDefaultTemplate:(id)arg1 musicInfo:(id)arg2 progressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)composeWithDefaultTemplate:(id)arg1 musicInfo:(id)arg2 musicFilePath:(id)arg3 progressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (void)composeWithoutMusicWithDefaultTemplate:(id)arg1 progressBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (id)replaceMusicForCandidateComposingSession:(id)arg1 musicInfo:(id)arg2 musicFilePath:(id)arg3;
- (void)createComposingSessionWithSelectedBGM:(id)arg1 progressBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (id)effectiveMusicInfoWithMusicInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)createComposingSessionWithTemplateData:(id)arg1 musicInfo:(id)arg2 musicFilePath:(id)arg3 logMusicID:(id)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (id)validateSelectedBGM:(id)arg1;
- (id)validateTemplateData:(id)arg1 context:(id)arg2;
- (id)sessionDescJSONForTemplateData:(id)arg1;
- (id)musicURLForBGM:(id)arg1;
- (void)downloadMusicForMusicInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadMusicForBGM:(id)arg1 completion:(id /* block */)arg2;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (id)musicDownloadTask;
- (void)setMusicDownloadTask:(id)arg1;
- (void).cxx_destruct;
@end
