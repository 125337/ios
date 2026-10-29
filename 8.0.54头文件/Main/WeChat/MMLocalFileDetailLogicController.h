@interface MMLocalFileDetailLogicController : FileDetailLogicController
{
    unsigned long long _fileSize; // +0x8
    NSURL * _fileURL; // +0x10
}
- (id)initWithFileURL:(id)arg1;
- (unsigned int)GetPreviewType;
- (id)GetFileName;
- (id)GetFilePath;
- (unsigned long long)GetFileSize;
- (id)getMusicLocalFileDataUnit;
- (BOOL)isDownloading;
- (BOOL)autoDownload;
- (BOOL)isViewBePopedStopDownload;
- (BOOL)forbidOperation;
- (void)startDownload;
- (void)stopDownload;
- (BOOL)OnPreviewFile:(unsigned int)arg1;
- (void)didFinish;
- (void)didFail;
- (id)fileURL;
- (void).cxx_destruct;
@end

