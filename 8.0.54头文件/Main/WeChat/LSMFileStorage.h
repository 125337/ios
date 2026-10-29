@interface LSMFileStorage : NSObject
{
    NSRecursiveLock * m_lock; // +0x8
    NSString * m_root; // +0x10
    unsigned long long m_fileSizeLimit; // +0x18
    MMLRUCache * m_cache; // +0x20
    LSMFile * m_levelZeroFile; // +0x28
    LSMFile * m_levelOneFile; // +0x30
    BOOL m_isCompacting; // +0x38
    unsigned int m_intermediateNextID; // +0x3c
    NSMutableArray * m_intermediateFiles; // +0x40
    BOOL m_hasFinishFirstCheckCompact; // +0x48
}
+ (void)ReportOpenFail;
+ (void)ReportLoadFileFail;
+ (void)ReportRenameFail;
+ (void)ReportCloneFileFail;
+ (void)ReportCompactFileFail;
+ (void)ReportWriteItemFail;
+ (void)ReportReadItemFail;
- (id)initWithFolderPath:(id)arg1 cacheCapacity:(unsigned int)arg2;
- (id)initWithFolderPath:(id)arg1 cacheCapacity:(unsigned int)arg2 baseFileSize:(unsigned long long)arg3;
- (void)dealloc;
- (void)loadFromFile;
- (void)tryFinishFirstCheckCompactFiles;
- (void)checkExpandFile;
- (void)checkCompactFiles;
- (void)compactFiles:(id)arg1;
- (void)compactLevelOneWithHandledKeys:(id)arg1;
- (BOOL)doCompactLevelOne:(id)arg1 handledKeys:(id)arg2;
- (BOOL)writeData:(id)arg1 toFile:(id)arg2;
- (BOOL)writeDatas:(id)arg1 toFiles:(id)arg2;
- (BOOL)writeDatasAndFileNames:(id)arg1;
- (id)dataOfFile:(id)arg1;
- (id)dataOfFile:(id)arg1 modifyTimeInSeconds:(unsigned int *)arg2;
- (unsigned int)modifyTimeInSecondsOfFile:(id)arg1;
- (BOOL)containsFile:(id)arg1;
- (BOOL)deleteDataOfFile:(id)arg1;
- (id)allFileNames;
- (void).cxx_destruct;
@end

