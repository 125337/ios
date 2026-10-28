@interface MBFileSpaceStatusBizItem : NSObject <PBCoding>
{
    unsigned int _totalFileNum; // +0x8
    unsigned int _contentModifyTime; // +0xc
    unsigned int _lastScanTime; // +0x10
    unsigned long long _totalFileSize; // +0x18
}
+ (void)PBArrayAdd_totalFileSize;
+ (void)PBArrayAdd_totalFileNum;
+ (void)PBArrayAdd_contentModifyTime;
+ (void)PBArrayAdd_lastScanTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)compareByContentModifyTime:(id)arg1;
- (unsigned long long)totalFileSize;
- (void)setTotalFileSize:(unsigned long long)arg1;
- (unsigned int)totalFileNum;
- (void)setTotalFileNum:(unsigned int)arg1;
- (unsigned int)contentModifyTime;
- (void)setContentModifyTime:(unsigned int)arg1;
- (unsigned int)lastScanTime;
- (void)setLastScanTime:(unsigned int)arg1;
@end
