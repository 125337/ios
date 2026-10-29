@interface WAReportPackageCheckAction : WAReportBaseItem
{
    BOOL _stopByEnterForeground; // +0x8
    unsigned int _allPackageSize; // +0xc
    unsigned int _allPackageClientStoragePercent; // +0x10
    unsigned int _clientStorageFreePercent; // +0x14
    unsigned int _abtestStatus; // +0x18
    unsigned int _weappCountThatHasPackage; // +0x1c
    unsigned int _costTime; // +0x20
    unsigned int _publibCount; // +0x24
    unsigned long long _jsCodeCacheSizeInBytes; // +0x28
    unsigned long long _costTimeInMs; // +0x30
}
- (id)reportString;
- (unsigned int)allPackageSize;
- (void)setAllPackageSize:(unsigned int)arg1;
- (unsigned int)allPackageClientStoragePercent;
- (void)setAllPackageClientStoragePercent:(unsigned int)arg1;
- (unsigned int)clientStorageFreePercent;
- (void)setClientStorageFreePercent:(unsigned int)arg1;
- (unsigned int)abtestStatus;
- (void)setAbtestStatus:(unsigned int)arg1;
- (unsigned int)weappCountThatHasPackage;
- (void)setWeappCountThatHasPackage:(unsigned int)arg1;
- (unsigned int)costTime;
- (void)setCostTime:(unsigned int)arg1;
- (BOOL)stopByEnterForeground;
- (void)setStopByEnterForeground:(BOOL)arg1;
- (unsigned int)publibCount;
- (void)setPublibCount:(unsigned int)arg1;
- (unsigned long long)jsCodeCacheSizeInBytes;
- (void)setJsCodeCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned long long)costTimeInMs;
- (void)setCostTimeInMs:(unsigned long long)arg1;
@end

