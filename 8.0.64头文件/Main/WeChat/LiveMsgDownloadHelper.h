@interface LiveMsgDownloadHelper : NSObject
{
    BOOL _isTryShow; // +0x8
    unsigned int _imageFinishLength; // +0xc
    unsigned int _imageTotalSize; // +0x10
    unsigned int _liveVideoFinishLength; // +0x14
    unsigned int _liveTotalSize; // +0x18
    NSString * _taskID; // +0x20
    CdnTaskInfo * _taskInfo; // +0x28
    CMessageWrap * _msgWrap; // +0x30
    id /* block */ _progressCallback; // +0x38
    id /* block */ _downloadRetCallback; // +0x40
    CdnDownloadTaskInfo * _imageTaskInfo; // +0x48
}
- (id)initWithTaskInfo:(id)arg1;
- (BOOL)isNeedDownloadImage;
- (BOOL)isNeedDownloadVideo;
- (BOOL)startDownloadImageData:(id /* block */)arg1 downloadRet:(id /* block */)arg2;
- (void)onProgressChange;
- (void)onImageDownloadComplete:(id)arg1;
- (void)onVideoDownloadComplete:(id)arg1;
- (BOOL)startDownloadImageData;
- (BOOL)startDownloadVideoData;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)taskInfo;
- (void)setTaskInfo:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id /* block */)progressCallback;
- (void)setProgressCallback:(id /* block */)arg1;
- (id /* block */)downloadRetCallback;
- (void)setDownloadRetCallback:(id /* block */)arg1;
- (BOOL)isTryShow;
- (void)setIsTryShow:(BOOL)arg1;
- (unsigned int)imageFinishLength;
- (void)setImageFinishLength:(unsigned int)arg1;
- (unsigned int)imageTotalSize;
- (void)setImageTotalSize:(unsigned int)arg1;
- (unsigned int)liveVideoFinishLength;
- (void)setLiveVideoFinishLength:(unsigned int)arg1;
- (unsigned int)liveTotalSize;
- (void)setLiveTotalSize:(unsigned int)arg1;
- (id)imageTaskInfo;
- (void)setImageTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end
