@interface UniversalUploadResult : NSObject
{
    BOOL _isSucc; // +0x8
    int _fileType; // +0xc
    int _middleFileType; // +0x10
    int _thumbFileType; // +0x14
    NSString * _fileId; // +0x18
    NSString * _aesKey; // +0x20
    NSString * _fileMd5; // +0x28
    NSString * _imgInfo; // +0x30
    NSString * _middleFileId; // +0x38
    NSString * _middleAesKey; // +0x40
    NSString * _middleFileMd5; // +0x48
    NSString * _thumbFileId; // +0x50
    NSString * _thumbAesKey; // +0x58
    NSString * _thumbFileMd5; // +0x60
}
- (BOOL)isSucc;
- (void)setIsSucc:(BOOL)arg1;
- (int)fileType;
- (void)setFileType:(int)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (id)imgInfo;
- (void)setImgInfo:(id)arg1;
- (int)middleFileType;
- (void)setMiddleFileType:(int)arg1;
- (id)middleFileId;
- (void)setMiddleFileId:(id)arg1;
- (id)middleAesKey;
- (void)setMiddleAesKey:(id)arg1;
- (id)middleFileMd5;
- (void)setMiddleFileMd5:(id)arg1;
- (int)thumbFileType;
- (void)setThumbFileType:(int)arg1;
- (id)thumbFileId;
- (void)setThumbFileId:(id)arg1;
- (id)thumbAesKey;
- (void)setThumbAesKey:(id)arg1;
- (id)thumbFileMd5;
- (void)setThumbFileMd5:(id)arg1;
- (void).cxx_destruct;
@end

