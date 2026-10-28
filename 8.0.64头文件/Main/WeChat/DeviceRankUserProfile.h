@interface DeviceRankUserProfile : MMObject <PBCoding>
{
    NSString * _nsUsername; // +0x8
    NSString * _nsCoverUrl; // +0x10
}
+ (void)PBArrayAdd_nsUsername;
+ (void)PBArrayAdd_nsCoverUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)nsUsername;
- (void)setNsUsername:(id)arg1;
- (id)nsCoverUrl;
- (void)setNsCoverUrl:(id)arg1;
- (void).cxx_destruct;
@end
