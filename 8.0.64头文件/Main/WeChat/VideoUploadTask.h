@interface VideoUploadTask : NSObject <MMCommonCgiUploaderDelegate>
{
    BOOL _isSlowMotion; // +0x8
    BOOL _isUseCgi; // +0x9
    BOOL _isRawTask; // +0xa
    BOOL _bCheckExistOnly; // +0xb
    BOOL _enableHitCheck; // +0xc
    BOOL _bJustUploadDataWithoutMD5Hit; // +0xd
    int _taskState; // +0x10
    int _retryMaxCount; // +0x14
    id <VideoUploadTaskDelegate> _delegate; // +0x18
    NSString * _fileID; // +0x20
    NSString * _aesKey; // +0x28
    NSString * _thumbFileID; // +0x30
    NSString * _thumbAeskey; // +0x38
    unsigned long long _uploadDataStartTimeMs; // +0x40
    NSURL * _url; // +0x48
    AVAsset * _asset; // +0x50
    NSString * _videoPath; // +0x58
    CdnProgressInfo * _progressInfo; // +0x60
    MMCommonCgiUploader * _cgiUploader; // +0x68
    unsigned long long _startTime; // +0x70
    NSString * _fileKey; // +0x78
    CMessageWrap * _msgWrap; // +0x80
    CdnUploadTaskInfo * _taskInfo; // +0x88
}
- (id)initWithMsgWrap:(id)arg1;
- (id)cgiUploader;
- (void)setEnableHitCheck:(BOOL)arg1;
- (void)setThumbFileID:(id)arg1 Aesk:(id)arg2;
- (void)startTask;
- (void)onUploadSuccess:(id)arg1;
- (BOOL)isHitMD5;
- (id)progressInfo;
- (void)restartTaskWithoutHitCheck;
- (void)setVideoAsset:(id)arg1 url:(id)arg2;
- (void)stopTask;
- (void)startForwardMsgTask;
- (BOOL)changeToState:(int)arg1;
- (void)taskFailWithErrorType:(int)arg1;
- (void)changeToHardLink:(id)arg1;
- (void)onUploadSuccess:(id)arg1 result:(id)arg2;
- (void)onUploadFail:(id)arg1 uploadId:(id)arg2 retCode:(long long)arg3;
- (void)onUploadProgress:(id)arg1 uploadProgress:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fileID;
- (void)setFileID:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)thumbFileID;
- (void)setThumbFileID:(id)arg1;
- (id)thumbAeskey;
- (void)setThumbAeskey:(id)arg1;
- (unsigned long long)uploadDataStartTimeMs;
- (void)setUploadDataStartTimeMs:(unsigned long long)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (BOOL)isSlowMotion;
- (void)setIsSlowMotion:(BOOL)arg1;
- (void)setProgressInfo:(id)arg1;
- (void)setCgiUploader:(id)arg1;
- (int)taskState;
- (void)setTaskState:(int)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (BOOL)isUseCgi;
- (void)setIsUseCgi:(BOOL)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)taskInfo;
- (void)setTaskInfo:(id)arg1;
- (BOOL)isRawTask;
- (void)setIsRawTask:(BOOL)arg1;
- (BOOL)bCheckExistOnly;
- (void)setBCheckExistOnly:(BOOL)arg1;
- (BOOL)enableHitCheck;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (int)retryMaxCount;
- (void)setRetryMaxCount:(int)arg1;
- (void).cxx_destruct;
@end
