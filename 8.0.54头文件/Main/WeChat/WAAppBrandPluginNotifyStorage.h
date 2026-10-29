@interface WAAppBrandPluginNotifyStorage : NSObject <PBCoding>
{
    NSMutableDictionary * _dicPluginNotify; // +0x8
}
+ (void)PBArrayAdd_dicPluginNotify;
+ (void)initialize;
+ (id)loadStorageFromPath:(id)arg1;
+ (BOOL)saveStorage:(id)arg1 toPath:(id)arg2;
- (id)getPBPropertyTable;
- (id)dicPluginNotify;
- (void)setDicPluginNotify:(id)arg1;
- (void).cxx_destruct;
@end

