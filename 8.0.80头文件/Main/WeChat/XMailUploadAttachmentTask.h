@interface XMailUploadAttachmentTask : NSObject
{
    int _errorCode; // +0x8
    NSString * _fileName; // +0x10
    NSString * _filePath; // +0x18
    NSString * _clientMediaID; // +0x20
    NSString * _fileId; // +0x28
    NSString * _errMsg; // +0x30
}
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)clientMediaID;
- (void)setClientMediaID:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end
