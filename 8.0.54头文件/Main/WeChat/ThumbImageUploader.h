@interface ThumbImageUploader : NSObject <MMCommonCgiUploaderDelegate>
{
    BOOL _enableHitCheck; // +0x8
    BOOL _isUseCgi; // +0x9
    NSString * _fileKey; // +0x10
    NSString * _fileID; // +0x18
    NSString * _aesk; // +0x20
    NSString * _filePath; // +0x28
    long long _scene; // +0x30
    MMCommonCgiUploader * _cgiUploader; // +0x38
    id /* block */ _completeBlock; // +0x40
}
- (id)init;
- (id)cgiUploader;
- (void)startUploadWithComplete:(id /* block */)arg1;
- (void)startUploadToCdn;
- (void)onUploadSuccess:(id)arg1;
- (void)onUploadFail:(id)arg1;
- (void)onUploadSuccess:(id)arg1 result:(id)arg2;
- (void)onUploadFail:(id)arg1 uploadId:(id)arg2 retCode:(long long)arg3;
- (void)onUploadProgress:(id)arg1 uploadProgress:(double)arg2;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (id)fileID;
- (void)setFileID:(id)arg1;
- (id)aesk;
- (void)setAesk:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (BOOL)enableHitCheck;
- (void)setEnableHitCheck:(BOOL)arg1;
- (BOOL)isUseCgi;
- (void)setIsUseCgi:(BOOL)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void)setCgiUploader:(id)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

