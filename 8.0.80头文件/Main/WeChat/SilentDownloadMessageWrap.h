@interface SilentDownloadMessageWrap : NSObject <PBCoding>
{
    unsigned int _fileSize; // +0x8
    unsigned int _createTime; // +0xc
    NSString * _username; // +0x10
    long long _mesSvrId; // +0x18
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_mesSvrId;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_createTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)mesSvrId;
- (void)setMesSvrId:(long long)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
