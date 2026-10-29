@interface MMCommonCgiUploader : NSObject <MMCommonCgiUploadTaskDelegate>
{
    BOOL _isRunning; // +0x8
    unsigned int _sectionLength; // +0xc
    NSString * _uploadFilePath; // +0x10
    long long _scene; // +0x18
    long long _fileType; // +0x20
    long long _maxConcurrentCount; // +0x28
    NSString * _lastUploadId; // +0x30
    NSString * _thumbFileId; // +0x38
    NSString * _thumbAesKey; // +0x40
    NSString * _midFileId; // +0x48
    NSString * _midAesKey; // +0x50
    long long _midType; // +0x58
    long long _liveType; // +0x60
    NSString * _liveImageFileId; // +0x68
    NSString * _bigFileSignature; // +0x70
    NSString * _bigFileAesKey; // +0x78
    NSString * _customRequestHeader; // +0x80
    unsigned long long _fileSize; // +0x88
    NSString * _uploadFileMd5; // +0x90
    MMCommonUploadResult * _result; // +0x98
    id <MMCommonCgiUploaderDelegate> _delegate; // +0xa0
    NSString * _currUploadId; // +0xa8
    NSMutableArray * _waitingTasks; // +0xb0
    NSMutableDictionary * _runningTasks; // +0xb8
    long long _sectionIndexLimit; // +0xc0
    long long _sectionCount; // +0xc8
    long long _successCount; // +0xd0
}
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)startUpload;
- (void)stopUpload;
- (void)uploadSingleSection;
- (void)uploadInnerSections;
- (void)onTaskSuccess:(id)arg1 response:(id)arg2;
- (void)onTaskFailure:(id)arg1 canRetry:(BOOL)arg2 retCode:(long long)arg3;
- (id)createSectionTasks;
- (id)createInitialParam;
- (id)uploadFilePath;
- (void)setUploadFilePath:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)fileType;
- (void)setFileType:(long long)arg1;
- (long long)maxConcurrentCount;
- (void)setMaxConcurrentCount:(long long)arg1;
- (unsigned int)sectionLength;
- (void)setSectionLength:(unsigned int)arg1;
- (id)lastUploadId;
- (void)setLastUploadId:(id)arg1;
- (id)thumbFileId;
- (void)setThumbFileId:(id)arg1;
- (id)thumbAesKey;
- (void)setThumbAesKey:(id)arg1;
- (id)midFileId;
- (void)setMidFileId:(id)arg1;
- (id)midAesKey;
- (void)setMidAesKey:(id)arg1;
- (long long)midType;
- (void)setMidType:(long long)arg1;
- (long long)liveType;
- (void)setLiveType:(long long)arg1;
- (id)liveImageFileId;
- (void)setLiveImageFileId:(id)arg1;
- (id)bigFileSignature;
- (void)setBigFileSignature:(id)arg1;
- (id)bigFileAesKey;
- (void)setBigFileAesKey:(id)arg1;
- (id)customRequestHeader;
- (void)setCustomRequestHeader:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)uploadFileMd5;
- (void)setUploadFileMd5:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (id)currUploadId;
- (void)setCurrUploadId:(id)arg1;
- (id)waitingTasks;
- (void)setWaitingTasks:(id)arg1;
- (id)runningTasks;
- (void)setRunningTasks:(id)arg1;
- (long long)sectionIndexLimit;
- (void)setSectionIndexLimit:(long long)arg1;
- (long long)sectionCount;
- (void)setSectionCount:(long long)arg1;
- (long long)successCount;
- (void)setSuccessCount:(long long)arg1;
- (void).cxx_destruct;
@end
