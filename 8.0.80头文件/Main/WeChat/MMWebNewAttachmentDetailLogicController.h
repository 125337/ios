@interface MMWebNewAttachmentDetailLogicController : FileDetailLogicController <WKDownloadDelegate>
{
    BOOL _isObservingDownload; // +0x8
    unsigned int _currentDownloadState; // +0xc
    NSString * _filePath; // +0x10
    NSString * _fileName; // +0x18
    long long _navigationResponseContentLength; // +0x20
    NSURL * _requestUrl; // +0x28
    WKDownload * _downloadTask; // +0x30
    NSData * _lastResumeData; // +0x38
}
+ (id)attachmentPathForURLString:(id)arg1 andExtName:(id)arg2;
+ (id)fileNameFromURL:(id)arg1 fallback:(id)arg2;
- (id)initWithWKDownlad:(id)arg1;
- (void)initMembersWithDownload:(id)arg1;
- (void)stopDownload;
- (void)startDownload;
- (BOOL)isDownloading;
- (BOOL)autoDownload;
- (BOOL)isViewBePopedStopDownload;
- (BOOL)OnPreviewFile:(unsigned int)arg1;
- (id)GetFileName;
- (void)downloadFileProcessUpdatedOnMainThreadWithProgress:(double)arg1;
- (void)downloadFileSuccessOnMainThread;
- (void)downloadFileFailureOnMainThreadWithFailureStr:(id)arg1;
- (unsigned long long)GetTempSize;
- (id)GetTmpFilePath;
- (unsigned long long)GetFileSize;
- (unsigned int)getMsgUiDownloadStatus;
- (id)GetFilePath;
- (unsigned int)GetPreviewType;
- (void)onForwardToContact:(id)arg1;
- (void)OnFileDetailVCDidAppear;
- (void)checkStateAndCallDownloadFinish;
- (id)getMusicLocalFileDataUnit;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)download:(id)arg1 decideDestinationUsingResponse:(id)arg2 suggestedFilename:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didFailWithError:(id)arg2 resumeData:(id)arg3;
- (void)dealloc;
- (void)startObservingDownloadProgresss;
- (void)stopObservingDownloadProgresss;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (long long)navigationResponseContentLength;
- (void)setNavigationResponseContentLength:(long long)arg1;
- (unsigned int)currentDownloadState;
- (void)setCurrentDownloadState:(unsigned int)arg1;
- (id)requestUrl;
- (void)setRequestUrl:(id)arg1;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg1;
- (id)lastResumeData;
- (void)setLastResumeData:(id)arg1;
- (BOOL)isObservingDownload;
- (void)setIsObservingDownload:(BOOL)arg1;
- (void).cxx_destruct;
@end
