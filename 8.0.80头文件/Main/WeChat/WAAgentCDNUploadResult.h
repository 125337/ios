@interface WAAgentCDNUploadResult : NSObject
{
    unsigned int _fileType; // +0x8
    unsigned int _appType; // +0xc
    NSString * _cdnUrl; // +0x10
    NSString * _fileId; // +0x18
    NSString * _aesKey; // +0x20
}
- (BOOL)success;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (unsigned int)fileType;
- (void)setFileType:(unsigned int)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
