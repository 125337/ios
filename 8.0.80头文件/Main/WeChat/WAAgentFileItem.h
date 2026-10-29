@interface WAAgentFileItem : NSObject
{
    NSString * _fileName; // +0x8
    NSString * _fileType; // +0x10
    NSString * _localID; // +0x18
    NSString * _appID; // +0x20
    unsigned long long _fileSize; // +0x28
}
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)fileType;
- (void)setFileType:(id)arg1;
- (id)localID;
- (void)setLocalID:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
