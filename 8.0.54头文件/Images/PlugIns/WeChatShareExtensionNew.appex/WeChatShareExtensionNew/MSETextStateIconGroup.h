@interface MSETextStateIconGroup : NSObject <PBCoding>
{
    NSString * groupId; // +0x8
    NSMutableDictionary * localeToGroupDescriptionDict; // +0x10
    NSMutableArray * _iconArray; // +0x18
    NSString * _groupDescription; // +0x20
}
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_localeToGroupDescriptionDict;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)groupDescription;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)localeToGroupDescriptionDict;
- (void)setLocaleToGroupDescriptionDict:(id)arg1;
- (id)iconArray;
- (void)setIconArray:(id)arg1;
- (void)setGroupDescription:(id)arg1;
- (void).cxx_destruct;
@end

