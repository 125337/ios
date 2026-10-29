@interface ZipDownLoadFileInfo : NSObject
{
    NSString * _fileId; // +0x8
    NSString * _fileKey; // +0x10
    NSString * _fileName; // +0x18
    long long _progress; // +0x20
    long long _status; // +0x28
    NSString * _errMsg; // +0x30
}
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (long long)progress;
- (void)setProgress:(long long)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end
