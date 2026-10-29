@interface LiteAppJsApiShareMediaToTimeline : LiteAppJsApi <MMLiteAppDownloadMgrDelegate, WCCommitViewResultDelegate>
{
    BOOL _isImage; // +0x20
    BOOL _useCDN; // +0x21
    MMLiteAppDownloadMgr * _downloadMgr; // +0x28
    NSDictionary * _tailInfo; // +0x30
    NSString * _thumbUri; // +0x38
    NSString * _videoPath; // +0x40
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)getValidPath:(id)arg1 isImage:(BOOL)arg2;
- (id)loadFilePath:(id)arg1 isImage:(BOOL)arg2;
- (id)getFileDataFromCDN:(id)arg1 url:(id)arg2 isImage:(BOOL)arg3;
- (void)shareMediaToTimeLine:(id)arg1 withThumbPath:(id)arg2;
- (id)genUploadTaskWithImagePath:(id)arg1;
- (id)genUploadTaskWithVideoPath:(id)arg1 withThumbPath:(id)arg2;
- (void)shareVideoToTimeLineWithThumb:(id)arg1;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)tailInfo;
- (void)setTailInfo:(id)arg1;
- (BOOL)isImage;
- (void)setIsImage:(BOOL)arg1;
- (BOOL)useCDN;
- (void)setUseCDN:(BOOL)arg1;
- (id)thumbUri;
- (void)setThumbUri:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (void).cxx_destruct;
@end
