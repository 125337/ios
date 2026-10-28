@interface BrandLiveWeAppData : NSObject <NSCoding, NSCopying, PBCoding>
{
    unsigned int _versionType; // +0x8
    NSString * _appid; // +0x10
    NSData * _dataBuffer; // +0x18
    NSString * _path; // +0x20
}
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_versionType;
+ (void)PBArrayAdd_dataBuffer;
+ (void)PBArrayAdd_path;
+ (void)initialize;
+ (id)fromPBWeAppData:(id)arg1;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)versionType;
- (void)setVersionType:(unsigned int)arg1;
- (id)dataBuffer;
- (void)setDataBuffer:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end
