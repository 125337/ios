@interface CDNCheckHitFileInfo : NSObject
{
    int _hitType; // +0x8
    unsigned long long _fileType; // +0x10
    unsigned long long _fileSize; // +0x18
    unsigned long long _thumbSize; // +0x20
    NSString * _fileMD5; // +0x28
    NSString * _fileID; // +0x30
}
- (int)hitType;
- (void)setHitType:(int)arg1;
- (unsigned long long)fileType;
- (void)setFileType:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned long long)thumbSize;
- (void)setThumbSize:(unsigned long long)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (id)fileID;
- (void)setFileID:(id)arg1;
- (void).cxx_destruct;
@end
