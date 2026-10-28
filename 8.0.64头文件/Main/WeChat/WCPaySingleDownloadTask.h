@interface WCPaySingleDownloadTask : NSObject
{
    BOOL _isDownloading; // +0x8
    NSString * _downloadUrl; // +0x10
    NSURLSessionDownloadTask * _urlSessionDownloadTask; // +0x18
    NSString * _filePath; // +0x20
    id /* block */ _completionBlock; // +0x28
    id _extraInfo; // +0x30
}
- (id)initWithDownloadTask:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (id)urlSessionDownloadTask;
- (void)setUrlSessionDownloadTask:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (BOOL)isDownloading;
- (void)setIsDownloading:(BOOL)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
