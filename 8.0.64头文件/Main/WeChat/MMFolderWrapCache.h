@interface MMFolderWrapCache : NSObject <PBCoding>
{
    BOOL _isIgnoreCowFile; // +0x8
    unsigned int _fileNum; // +0xc
    unsigned int _puffyFileNum; // +0x10
    NSString * _folderName; // +0x18
    long long _lastScanTime; // +0x20
    unsigned long long _fileSize; // +0x28
    NSMutableDictionary * _dicBizStat; // +0x30
    NSMutableDictionary * _dicFileTypeInUseStat; // +0x38
    NSMutableDictionary * _dicWechatFileClassStat; // +0x40
    NSMutableSet * _fileNameSet; // +0x48
    unsigned long long _logicFileSize; // +0x50
    unsigned long long _puffyFileSize; // +0x58
    unsigned long long _puffyLogicFileSize; // +0x60
    long long _cacheTime; // +0x68
}
+ (void)PBArrayAdd_lastScanTime;
+ (void)PBArrayAdd_fileNum;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_dicBizStat;
+ (void)PBArrayAdd_dicFileTypeInUseStat;
+ (void)PBArrayAdd_dicWechatFileClassStat;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_folderName;
+ (void)PBArrayAdd_logicFileSize;
+ (void)PBArrayAdd_puffyFileNum;
+ (void)PBArrayAdd_puffyFileSize;
+ (void)PBArrayAdd_puffyLogicFileSize;
+ (void)PBArrayAdd_isIgnoreCowFile;
+ (void)PBArrayAdd_fileNameSet;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)folderName;
- (void)setFolderName:(id)arg1;
- (long long)lastScanTime;
- (void)setLastScanTime:(long long)arg1;
- (unsigned int)fileNum;
- (void)setFileNum:(unsigned int)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)dicBizStat;
- (void)setDicBizStat:(id)arg1;
- (id)dicFileTypeInUseStat;
- (void)setDicFileTypeInUseStat:(id)arg1;
- (id)dicWechatFileClassStat;
- (void)setDicWechatFileClassStat:(id)arg1;
- (id)fileNameSet;
- (void)setFileNameSet:(id)arg1;
- (unsigned long long)logicFileSize;
- (void)setLogicFileSize:(unsigned long long)arg1;
- (unsigned int)puffyFileNum;
- (void)setPuffyFileNum:(unsigned int)arg1;
- (unsigned long long)puffyFileSize;
- (void)setPuffyFileSize:(unsigned long long)arg1;
- (unsigned long long)puffyLogicFileSize;
- (void)setPuffyLogicFileSize:(unsigned long long)arg1;
- (long long)cacheTime;
- (void)setCacheTime:(long long)arg1;
- (BOOL)isIgnoreCowFile;
- (void)setIsIgnoreCowFile:(BOOL)arg1;
- (void).cxx_destruct;
@end
