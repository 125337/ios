@interface MMLocalFileDetailLogicController : FileDetailLogicController
{
    unsigned long long _fileSize; // +0x8
    NSURL * _fileURL; // +0x10
    NSString * _displayFileName; // +0x18
}
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 fileName:(id)arg2;
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
- (id)displayFileName;
- (void)setDisplayFileName:(id)arg1;
- (void).cxx_destruct;
@end
