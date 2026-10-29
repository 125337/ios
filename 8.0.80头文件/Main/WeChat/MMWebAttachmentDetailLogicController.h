@interface MMWebAttachmentDetailLogicController : FileDetailLogicController <NSURLSessionDataDelegate>
{
    NSURL * _fileURL; // +0x8
    NSString * _filePath; // +0x10
    NSString * _fileName; // +0x18
    NSString * _fileExtensionName; // +0x20
    unsigned long long _navigationResponseContentLength; // +0x28
    NSURLSession * _session; // +0x30
    unsigned long long _targetSize; // +0x38
    unsigned long long _downloadedSize; // +0x40
}
+ (id)localFilePathForFileURL:(id)arg1 fileExtName:(id)arg2;
- (void)dealloc;
- (BOOL)isDownloading;
- (BOOL)autoDownload;
- (BOOL)isViewBePopedStopDownload;
- (void)startDownload;
- (void)stopDownload;
- (BOOL)OnPreviewFile:(unsigned int)arg1;
- (void)onForwardToContact:(id)arg1;
- (id)GetFileName;
- (unsigned long long)GetFileSize;
- (unsigned long long)GetTempSize;
- (unsigned int)GetPreviewType;
- (id)GetTmpFilePath;
- (id)GetFilePath;
- (unsigned int)getMsgUiDownloadStatus;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)downloadFileProcessUpdatedOnMainThread;
- (void)downloadFileSuccessOnMainThread;
- (void)downloadFileFailureOnMainThread;
- (void)downloadFileFailureOnMainThreadWithFailureStr:(id)arg1;
- (id)fileURL;
- (void)setFileURL:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)fileExtensionName;
- (void)setFileExtensionName:(id)arg1;
- (unsigned long long)navigationResponseContentLength;
- (void)setNavigationResponseContentLength:(unsigned long long)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (unsigned long long)targetSize;
- (void)setTargetSize:(unsigned long long)arg1;
- (unsigned long long)downloadedSize;
- (void)setDownloadedSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
