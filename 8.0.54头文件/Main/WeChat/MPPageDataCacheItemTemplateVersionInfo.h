@interface MPPageDataCacheItemTemplateVersionInfo : NSObject <PBCoding>
{
    unsigned int _type; // +0x8
    unsigned int _version; // +0xc
    NSString * _versionGroup; // +0x10
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_versionGroup;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)versionGroup;
- (void)setVersionGroup:(id)arg1;
- (void).cxx_destruct;
@end

