@interface ContactTagDataStorageInfo : NSObject <PBCoding>
{
    BOOL bIsHadMigrateContactTagData; // +0x8
    BOOL bIsHadMigrateTagContactList; // +0x9
    NSMutableArray * _arrMigrateTagContactUserName; // +0x10
    NSMutableArray * _arrRecentlyUsedTagID; // +0x18
}
+ (void)PBArrayAdd_bIsHadMigrateContactTagData;
+ (void)PBArrayAdd_bIsHadMigrateTagContactList;
+ (void)PBArrayAdd_arrMigrateTagContactUserName;
+ (void)PBArrayAdd_arrRecentlyUsedTagID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)bIsHadMigrateContactTagData;
- (void)setBIsHadMigrateContactTagData:(BOOL)arg1;
- (BOOL)bIsHadMigrateTagContactList;
- (void)setBIsHadMigrateTagContactList:(BOOL)arg1;
- (id)arrMigrateTagContactUserName;
- (void)setArrMigrateTagContactUserName:(id)arg1;
- (id)arrRecentlyUsedTagID;
- (void)setArrRecentlyUsedTagID:(id)arg1;
- (void).cxx_destruct;
@end
