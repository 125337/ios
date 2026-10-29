@interface WAPublicResInfoStorage : NSObject <PBCoding>
{
    NSMutableDictionary * _dicPublicInfo; // +0x8
}
+ (void)PBArrayAdd_dicPublicInfo;
+ (void)initialize;
+ (id)loadStorageFromPath:(id)arg1;
+ (BOOL)saveStorage:(id)arg1 toPath:(id)arg2;
- (id)getPBPropertyTable;
- (id)init;
- (id)getShouldKeepPublicResVersionArr;
- (void)forceUpdate2Version:(unsigned int)arg1;
- (BOOL)hasVersion:(unsigned int)arg1;
- (void)saveResInfo:(id)arg1 withVersion:(unsigned int)arg2;
- (void)deleteResInfoWithVersion:(unsigned int)arg1;
- (void)deleteResInfoBeyondShouldKeepVersion:(id)arg1;
- (id)getLatestVersionResInfo;
- (id)getDescendingVersion;
- (void)adjustOldPublicResVersion;
- (id)dicPublicInfo;
- (void)setDicPublicInfo:(id)arg1;
- (void).cxx_destruct;
@end

