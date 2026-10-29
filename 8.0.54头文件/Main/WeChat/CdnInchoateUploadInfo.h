@interface CdnInchoateUploadInfo : NSObject
{
    int _filetype; // +0x8
    unsigned int _crc32; // +0xc
    NSString * _clientMsgID; // +0x10
    NSString * _fileID; // +0x18
    NSString * _aeskey; // +0x20
    NSString * _fileMD5; // +0x28
    NSString * _middleFileMD5; // +0x30
    NSString * _thumbFileMD5; // +0x38
    NSString * _videoNewMD5; // +0x40
    unsigned long long _fileSize; // +0x48
    unsigned long long _middleFileSize; // +0x50
    unsigned long long _thumbFileSize; // +0x58
}
- (int)filetype;
- (void)setFiletype:(int)arg1;
- (id)clientMsgID;
- (void)setClientMsgID:(id)arg1;
- (id)fileID;
- (void)setFileID:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (id)middleFileMD5;
- (void)setMiddleFileMD5:(id)arg1;
- (id)thumbFileMD5;
- (void)setThumbFileMD5:(id)arg1;
- (id)videoNewMD5;
- (void)setVideoNewMD5:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned long long)middleFileSize;
- (void)setMiddleFileSize:(unsigned long long)arg1;
- (unsigned long long)thumbFileSize;
- (void)setThumbFileSize:(unsigned long long)arg1;
- (unsigned int)crc32;
- (void)setCrc32:(unsigned int)arg1;
- (void).cxx_destruct;
@end

