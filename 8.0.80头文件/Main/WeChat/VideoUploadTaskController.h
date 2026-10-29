@interface VideoUploadTaskController : NSObject <VideoUploadTaskDelegate>
{
    BOOL _bDisableHitCheck; // +0x8
    BOOL _isSendingMsg; // +0x9
    BOOL _bJustUploadDataWithoutMD5Hit; // +0xa
    BOOL _isUseCgiUpload; // +0xb
    BOOL _isRawDataUploadSucc; // +0xc
    BOOL _isCompressDataUploadSucc; // +0xd
    CMessageWrap * _msgWrap; // +0x10
    VideoSendReportInfo * _reportInfo; // +0x18
    id <VideoUploadTaskControllerDelegate> _delegate; // +0x20
    MMAsset * _mmAsset; // +0x28
    RawVideoUploadTask * _rawUploadTask; // +0x30
    CompressVideoUploadTask * _uploadTask; // +0x38
    ThumbImageUploader * _thumbImageUploader; // +0x40
    unsigned long long _taskStartTimeMs; // +0x48
}
- (id)initWithMsgWrap:(id)arg1;
- (id)generateCompressUploadTask;
- (id)generateRawUploadTask;
- (id)thumbImageUploader;
- (void)stopTask;
- (BOOL)isHitMD5;
- (void)startTask;
- (BOOL)tryProcessFavVideo;
- (void)startCompressVideo:(id)arg1;
- (void)startDataUploadTask;
- (void)startDataUploadTaskWithThumbReady;
- (void)asyncUploadAsset;
- (void)reportExifLogInfoIfNeededWithAsset:(id)arg1 url:(id)arg2;
- (void)caculateOriginSourceMD5WithUrl:(id)arg1;
- (id)genUploadVideoRequest;
- (void)sendFinishMessageRequest;
- (void)makeUploadFail:(int)arg1;
- (void)onExportAssetSuccess:(id)arg1;
- (BOOL)isAllDataUploadFinish;
- (void)onUploadTaskSuccess:(id)arg1;
- (void)onAllTaskUploadDataSucc;
- (void)onUploadTaskFail:(id)arg1 errorType:(int)arg2;
- (void)onUploadProgressUpdate;
- (void)onCompressProgressUpdate:(id)arg1 progress:(double)arg2;
- (void)updateUploadPercent;
- (id)getReportInfo;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (BOOL)bDisableHitCheck;
- (void)setBDisableHitCheck:(BOOL)arg1;
- (BOOL)isSendingMsg;
- (void)setIsSendingMsg:(BOOL)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mmAsset;
- (void)setMmAsset:(id)arg1;
- (id)rawUploadTask;
- (void)setRawUploadTask:(id)arg1;
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (void)setThumbImageUploader:(id)arg1;
- (BOOL)isUseCgiUpload;
- (void)setIsUseCgiUpload:(BOOL)arg1;
- (BOOL)isRawDataUploadSucc;
- (void)setIsRawDataUploadSucc:(BOOL)arg1;
- (BOOL)isCompressDataUploadSucc;
- (void)setIsCompressDataUploadSucc:(BOOL)arg1;
- (unsigned long long)taskStartTimeMs;
- (void)setTaskStartTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
