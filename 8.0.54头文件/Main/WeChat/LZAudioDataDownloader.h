@interface LZAudioDataDownloader : NSObject
{
    id <LZAudioDataDownloadDelegate> _delegate; // +0x8
}
- (void)cancel;
- (BOOL)beginDownload:(id)arg1;
- (id)taskItem;
- (_NSRange)downloadRange;
- (long long)continuousLengh;
- (double)downloadSpeed;
- (double)downloadCostTime;
- (BOOL)isErrorCanRetry:(id)arg1;
- (id)downloadDetailInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

