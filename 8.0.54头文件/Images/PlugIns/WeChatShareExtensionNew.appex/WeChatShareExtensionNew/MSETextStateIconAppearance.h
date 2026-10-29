@interface MSETextStateIconAppearance : NSObject <PBCoding>
{
    unsigned int beginTime; // +0x8
    unsigned int endTime; // +0xc
    unsigned int order; // +0x10
    NSString * iconURL; // +0x18
    NSString * groupId; // +0x20
    unsigned long long option; // +0x28
    NSMutableDictionary * localeToIconDescriptionDict; // +0x30
    NSMutableDictionary * localeToClusterDescriptionDict; // +0x38
    NSString * _iconDescription; // +0x40
    NSString * _clusterDescription; // +0x48
}
+ (void)PBArrayAdd_beginTime;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_iconURL;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_order;
+ (void)PBArrayAdd_option;
+ (void)PBArrayAdd_localeToIconDescriptionDict;
+ (void)PBArrayAdd_localeToClusterDescriptionDict;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)iconDescription;
- (BOOL)isQualifiedForShow;
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (unsigned int)order;
- (void)setOrder:(unsigned int)arg1;
- (unsigned long long)option;
- (void)setOption:(unsigned long long)arg1;
- (id)localeToIconDescriptionDict;
- (void)setLocaleToIconDescriptionDict:(id)arg1;
- (id)localeToClusterDescriptionDict;
- (void)setLocaleToClusterDescriptionDict:(id)arg1;
- (void)setIconDescription:(id)arg1;
- (id)clusterDescription;
- (void)setClusterDescription:(id)arg1;
- (void).cxx_destruct;
@end

