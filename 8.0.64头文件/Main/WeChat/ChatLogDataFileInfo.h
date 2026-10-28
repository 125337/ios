@interface ChatLogDataFileInfo : NSObject <PBCoding>
{
    BOOL _hasScanned; // +0x8
    unsigned int _fileTime; // +0xc
    unsigned int _fileModifyTime; // +0x10
    unsigned long long _fileSize; // +0x18
    unsigned long long _iNodeNum; // +0x20
}
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileTime;
+ (void)PBArrayAdd_iNodeNum;
+ (void)PBArrayAdd_fileModifyTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned int)fileTime;
- (void)setFileTime:(unsigned int)arg1;
- (unsigned long long)iNodeNum;
- (void)setINodeNum:(unsigned long long)arg1;
- (BOOL)hasScanned;
- (void)setHasScanned:(BOOL)arg1;
- (unsigned int)fileModifyTime;
- (void)setFileModifyTime:(unsigned int)arg1;
@end
