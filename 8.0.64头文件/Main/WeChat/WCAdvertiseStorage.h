@interface WCAdvertiseStorage : MMObject <PBCoding, NSCopying>
{
    unsigned int _uiAdCreateTime; // +0x8
    unsigned int _uiAdDisplayTime; // +0xc
    NSString * _nsAdvertiseID; // +0x10
    NSString * _nsUsername; // +0x18
    NSData * _oAdvertiseData; // +0x20
}
+ (void)PBArrayAdd_nsAdvertiseID;
+ (void)PBArrayAdd_nsUsername;
+ (void)PBArrayAdd_uiAdCreateTime;
+ (void)PBArrayAdd_uiAdDisplayTime;
+ (void)PBArrayAdd_oAdvertiseData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)compareAdTime:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)nsAdvertiseID;
- (void)setNsAdvertiseID:(id)arg1;
- (id)nsUsername;
- (void)setNsUsername:(id)arg1;
- (unsigned int)uiAdCreateTime;
- (void)setUiAdCreateTime:(unsigned int)arg1;
- (unsigned int)uiAdDisplayTime;
- (void)setUiAdDisplayTime:(unsigned int)arg1;
- (id)oAdvertiseData;
- (void)setOAdvertiseData:(id)arg1;
- (void).cxx_destruct;
@end
