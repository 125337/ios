@interface ChatBotShareHistoryCDNInfo : NSObject
{
    BOOL _isSafe; // +0x8
    unsigned int _fileType; // +0xc
    unsigned int _appType; // +0x10
    unsigned int _createTime; // +0x14
    NSString * _fileId; // +0x18
    NSString * _aesKey; // +0x20
    NSString * _md5; // +0x28
    unsigned long long _fileSize; // +0x30
    NSString * _title; // +0x38
    NSString * _desc; // +0x40
    NSString * _summary; // +0x48
}
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned int)fileType;
- (void)setFileType:(unsigned int)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (BOOL)isSafe;
- (void)setIsSafe:(BOOL)arg1;
- (void).cxx_destruct;
@end
