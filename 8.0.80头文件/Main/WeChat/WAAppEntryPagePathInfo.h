@interface WAAppEntryPagePathInfo : NSObject <PBCoding>
{
    NSString * _appid; // +0x8
    NSString * _username; // +0x10
    NSString * _entryPagePath; // +0x18
}
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_entryPagePath;
+ (void)initialize;
+ (id)loadFromPath:(id)arg1;
+ (BOOL)save:(id)arg1 toPath:(id)arg2;
- (id)getPBPropertyTable;
- (id)description;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)entryPagePath;
- (void)setEntryPagePath:(id)arg1;
- (void).cxx_destruct;
@end
