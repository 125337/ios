@interface MJMusicDownloader : NSObject
{
    BOOL _isCancelled; // +0x8
    EditVideoBGMPlayer * _bgmPlayer; // +0x10
    id <MMBGMSelectedMusicDataProtocol> _firstMusicInfo; // +0x18
    id /* block */ _completionHandler; // +0x20
}
- (void)downloadFirstMusicWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)handleMusicRecommendResult:(id)arg1;
- (void)handleDownloadMusicResult:(BOOL)arg1;
- (void)cancel;
- (void)callCompletionOnSucceesWithMusicInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)callCompletionOnError:(id)arg1;
- (id)bgmPlayer;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (void)setBgmPlayer:(id)arg1;
- (id)firstMusicInfo;
- (void)setFirstMusicInfo:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
