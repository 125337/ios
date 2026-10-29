@interface CdnImageDetectMediaInfo : NSObject
{
    BOOL _enableHitCheck; // +0x8
    BOOL _trySafeCdn; // +0x9
    unsigned int _fileType; // +0xc
    NSString * _fileKey; // +0x10
    long long _fileSize; // +0x18
    NSString * _filePath; // +0x20
    NSString * _forwardFileID; // +0x28
    NSString * _forwardAesKey; // +0x30
}
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (BOOL)enableHitCheck;
- (void)setEnableHitCheck:(BOOL)arg1;
- (BOOL)trySafeCdn;
- (void)setTrySafeCdn:(BOOL)arg1;
- (unsigned int)fileType;
- (void)setFileType:(unsigned int)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)forwardFileID;
- (void)setForwardFileID:(id)arg1;
- (id)forwardAesKey;
- (void)setForwardAesKey:(id)arg1;
- (void).cxx_destruct;
@end

