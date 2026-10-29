@interface RecordGroupCdn : NSObject <YYModel, NSCopying>
{
    unsigned int _duration; // +0x8
    unsigned int _fileType; // +0xc
    unsigned int _midFileType; // +0x10
    unsigned int _thumbFileType; // +0x14
    NSString * _fileId; // +0x18
    NSString * _aesKey; // +0x20
    unsigned long long _fileSize; // +0x28
    NSString * _fileMD5; // +0x30
    NSString * _sourceFilePath; // +0x38
    NSString * _midFileId; // +0x40
    NSString * _midAesKey; // +0x48
    unsigned long long _midFileSize; // +0x50
    NSString * _midFileMD5; // +0x58
    NSString * _sourceMiddlePath; // +0x60
    NSString * _thumbFileId; // +0x68
    NSString * _thumbAesKey; // +0x70
    unsigned long long _thumbFileSize; // +0x78
    NSString * _thumbFileMD5; // +0x80
    NSString * _sourceThumbPath; // +0x88
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getMediaMD5;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (unsigned int)fileType;
- (void)setFileType:(unsigned int)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (id)sourceFilePath;
- (void)setSourceFilePath:(id)arg1;
- (id)midFileId;
- (void)setMidFileId:(id)arg1;
- (id)midAesKey;
- (void)setMidAesKey:(id)arg1;
- (unsigned int)midFileType;
- (void)setMidFileType:(unsigned int)arg1;
- (unsigned long long)midFileSize;
- (void)setMidFileSize:(unsigned long long)arg1;
- (id)midFileMD5;
- (void)setMidFileMD5:(id)arg1;
- (id)sourceMiddlePath;
- (void)setSourceMiddlePath:(id)arg1;
- (id)thumbFileId;
- (void)setThumbFileId:(id)arg1;
- (id)thumbAesKey;
- (void)setThumbAesKey:(id)arg1;
- (unsigned int)thumbFileType;
- (void)setThumbFileType:(unsigned int)arg1;
- (unsigned long long)thumbFileSize;
- (void)setThumbFileSize:(unsigned long long)arg1;
- (id)thumbFileMD5;
- (void)setThumbFileMD5:(id)arg1;
- (id)sourceThumbPath;
- (void)setSourceThumbPath:(id)arg1;
- (void).cxx_destruct;
@end
