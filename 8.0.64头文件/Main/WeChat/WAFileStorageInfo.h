@interface WAFileStorageInfo : NSObject
{
    BOOL _isScannedStoreFile; // +0x8
    unsigned int _storeFileCount; // +0xc
    NSString * _appID; // +0x10
    unsigned long long _storeFileSize; // +0x18
    unsigned long long _configMaxStoreFileSize; // +0x20
    NSRecursiveLock * _lock; // +0x28
}
- (id)initWithAppID:(id)arg1;
- (void)updateConfigMaxStoreFileSize;
- (void)setStoreFileCount:(unsigned int)arg1 fileSize:(unsigned long long)arg2;
- (void)addFileWithSize:(unsigned long long)arg1;
- (void)removeFileWithSize:(unsigned long long)arg1;
- (void)checkScanStoreFile;
- (void)scanStoreFile;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)storeFileCount;
- (void)setStoreFileCount:(unsigned int)arg1;
- (unsigned long long)storeFileSize;
- (void)setStoreFileSize:(unsigned long long)arg1;
- (BOOL)isScannedStoreFile;
- (void)setIsScannedStoreFile:(BOOL)arg1;
- (unsigned long long)configMaxStoreFileSize;
- (void)setConfigMaxStoreFileSize:(unsigned long long)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
