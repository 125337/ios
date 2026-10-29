@interface MBBizPermissionConfigInfo : NSObject
{
    unsigned int _maxNetWorkConcurrent; // +0x8
    unsigned int _defaultTimeOut; // +0xc
    unsigned long long _maxStorageSize; // +0x10
    unsigned long long _maxNetWorkFileSizeLimit; // +0x18
    unsigned long long _maxTempFileTotalSize; // +0x20
    unsigned long long _maxTempFileSize; // +0x28
    unsigned long long _minTempFileSize; // +0x30
    unsigned long long _maxUsrFileSize; // +0x38
}
- (id)initWithDic:(id)arg1;
- (void)loadPermissionConfig:(id)arg1;
- (unsigned long long)maxStorageSize;
- (void)setMaxStorageSize:(unsigned long long)arg1;
- (unsigned long long)maxNetWorkFileSizeLimit;
- (void)setMaxNetWorkFileSizeLimit:(unsigned long long)arg1;
- (unsigned int)maxNetWorkConcurrent;
- (void)setMaxNetWorkConcurrent:(unsigned int)arg1;
- (unsigned int)defaultTimeOut;
- (void)setDefaultTimeOut:(unsigned int)arg1;
- (unsigned long long)maxTempFileTotalSize;
- (void)setMaxTempFileTotalSize:(unsigned long long)arg1;
- (unsigned long long)maxTempFileSize;
- (void)setMaxTempFileSize:(unsigned long long)arg1;
- (unsigned long long)minTempFileSize;
- (void)setMinTempFileSize:(unsigned long long)arg1;
- (unsigned long long)maxUsrFileSize;
- (void)setMaxUsrFileSize:(unsigned long long)arg1;
@end
