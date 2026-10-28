@interface GroupNoticeDataUploader : NSObject
{
    BOOL _isUploading; // +0x8
    id <GroupNoticeDataUploadDelegate> _delegate; // +0x10
    GroupNoticeUploadInfo * _uploadInfo; // +0x18
    GroupNoticeUploadTask * _currentTask; // +0x20
}
+ (id)uploaderWithUploadInfo:(id)arg1;
- (void)startUpload;
- (BOOL)isUploading;
- (void)stopUpload;
- (void)clearUploadStatus;
- (void)startUploadThumb:(id /* block */)arg1;
- (void)startUploadData:(id /* block */)arg1;
- (void)startTask:(id)arg1;
- (void)notifyTaskProgress:(id)arg1;
- (void)notifyTaskComplete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uploadInfo;
- (void)setUploadInfo:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (void)setIsUploading:(BOOL)arg1;
- (void).cxx_destruct;
@end
