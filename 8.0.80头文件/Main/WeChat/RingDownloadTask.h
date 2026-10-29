@interface RingDownloadTask : NSObject <ICdnComMgrExt>
{
    BOOL _isDownloading; // +0x8
    RingDownloadInfo * _info; // +0x10
    id /* block */ _resolve; // +0x18
    NSObject * _selfHolder; // +0x20
}
- (id)initWithDownloadInfo:(id)arg1;
- (id)startdownloadRingFile;
- (void)OnCdnDownload:(id)arg1;
- (void)cancelTask;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)isDownloading;
- (void)setIsDownloading:(BOOL)arg1;
- (id /* block */)resolve;
- (void)setResolve:(id /* block */)arg1;
- (id)selfHolder;
- (void)setSelfHolder:(id)arg1;
- (void).cxx_destruct;
@end
