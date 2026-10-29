@interface WAAppBrandNotifyStorage : NSObject <PBCoding>
{
    NSMutableDictionary * _dicAppNotify; // +0x8
}
+ (void)PBArrayAdd_dicAppNotify;
+ (void)initialize;
+ (id)loadStorageFromPath:(id)arg1;
+ (BOOL)saveStorage:(id)arg1 toPath:(id)arg2;
- (id)getPBPropertyTable;
- (id)dicAppNotify;
- (void)setDicAppNotify:(id)arg1;
- (void).cxx_destruct;
@end

