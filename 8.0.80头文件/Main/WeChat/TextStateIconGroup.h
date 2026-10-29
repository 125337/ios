@interface TextStateIconGroup : NSObject <PBCoding>
{
    NSString * _groupId; // +0x8
    NSString * _groupIconURL; // +0x10
    NSMutableDictionary * _localeToGroupDescriptionDict; // +0x18
    NSString * _groupDescription; // +0x20
}
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_localeToGroupDescriptionDict;
+ (void)PBArrayAdd_groupIconURL;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithGroup:(id)arg1;
- (id)initWithInstance:(id)arg1;
- (id)group;
- (id)groupDescription;
- (void)clearCachedDescription;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)groupIconURL;
- (void)setGroupIconURL:(id)arg1;
- (id)localeToGroupDescriptionDict;
- (void)setLocaleToGroupDescriptionDict:(id)arg1;
- (void)setGroupDescription:(id)arg1;
- (void).cxx_destruct;
@end
