@interface UniversalC2CDataUploader : NSObject <MMCommonCgiUploaderDelegate>
{
    BOOL _isUseCgi; // +0x8
    BOOL _enableHitCheck; // +0x9
    int _thumbFileType; // +0xc
    int _middleFileType; // +0x10
    int _fileType; // +0x14
    NSString * _taskId; // +0x18
    NSString * _thumbFilePath; // +0x20
    NSString * _middleFilePath; // +0x28
    NSString * _filePath; // +0x30
    NSString * _thumbFileID; // +0x38
    NSString * _thumbAesKey; // +0x40
    NSString * _middleFileID; // +0x48
    NSString * _middleAesKey; // +0x50
    NSString * _fileID; // +0x58
    NSString * _aeskey; // +0x60
    NSString * _bigFileSignature; // +0x68
    NSString * _bigFileAesKey; // +0x70
    MMCommonCgiUploader * _thumbUploader; // +0x78
    MMCommonCgiUploader * _middleDataUploader; // +0x80
    MMCommonCgiUploader * _dataUploader; // +0x88
    MMCommonUploadResult * _thumbResult; // +0x90
    MMCommonUploadResult * _middleResult; // +0x98
    MMCommonUploadResult * _dataResult; // +0xa0
    long long _scene; // +0xa8
    id /* block */ _progressBlock; // +0xb0
    id /* block */ _completeBlock; // +0xb8
    UniversalUploadResult * _result; // +0xc0
    unsigned long long _totalFileSize; // +0xc8
    unsigned long long _haveUploadSize; // +0xd0
    NSString * _downloadingKey; // +0xd8
}
- (id)initWithScene:(long long)arg1;
- (long long)getCgiUploadScene:(long long)arg1;
- (id)thumbUploader;
- (id)middleDataUploader;
- (id)dataUploader;
- (void)startUploadWithProgress:(id /* block */)arg1 complete:(id /* block */)arg2;
- (void)stopUpload;
- (void)tryStartUpload;
- (BOOL)checkLocalResource:(BOOL)arg1;
- (BOOL)startCgiUploadTask;
- (BOOL)tryStartNextCgiUploadTask;
- (void)startCdnUpload;
- (void)onUploadFail:(id)arg1 uploadId:(id)arg2 retCode:(long long)arg3;
- (void)onUploadProgress:(id)arg1 uploadProgress:(double)arg2;
- (void)onUploadSuccess:(id)arg1 result:(id)arg2;
- (id)downloadDataWithFileId:(id)arg1 aeskey:(id)arg2 filePath:(id)arg3 fileType:(int)arg4 complete:(id /* block */)arg5;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)thumbFilePath;
- (void)setThumbFilePath:(id)arg1;
- (id)middleFilePath;
- (void)setMiddleFilePath:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (int)thumbFileType;
- (void)setThumbFileType:(int)arg1;
- (id)thumbFileID;
- (void)setThumbFileID:(id)arg1;
- (id)thumbAesKey;
- (void)setThumbAesKey:(id)arg1;
- (int)middleFileType;
- (void)setMiddleFileType:(int)arg1;
- (id)middleFileID;
- (void)setMiddleFileID:(id)arg1;
- (id)middleAesKey;
- (void)setMiddleAesKey:(id)arg1;
- (int)fileType;
- (void)setFileType:(int)arg1;
- (id)fileID;
- (void)setFileID:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (id)bigFileSignature;
- (void)setBigFileSignature:(id)arg1;
- (id)bigFileAesKey;
- (void)setBigFileAesKey:(id)arg1;
- (BOOL)isUseCgi;
- (void)setIsUseCgi:(BOOL)arg1;
- (BOOL)enableHitCheck;
- (void)setEnableHitCheck:(BOOL)arg1;
- (void)setThumbUploader:(id)arg1;
- (void)setMiddleDataUploader:(id)arg1;
- (void)setDataUploader:(id)arg1;
- (id)thumbResult;
- (void)setThumbResult:(id)arg1;
- (id)middleResult;
- (void)setMiddleResult:(id)arg1;
- (id)dataResult;
- (void)setDataResult:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (unsigned long long)totalFileSize;
- (void)setTotalFileSize:(unsigned long long)arg1;
- (unsigned long long)haveUploadSize;
- (void)setHaveUploadSize:(unsigned long long)arg1;
- (id)downloadingKey;
- (void)setDownloadingKey:(id)arg1;
- (void).cxx_destruct;
@end

