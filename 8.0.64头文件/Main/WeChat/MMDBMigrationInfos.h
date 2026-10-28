@interface MMDBMigrationInfos : NSObject <PBCoding>
{
    NSMutableDictionary * _categorys; // +0x8
}
+ (void)PBArrayAdd_categorys;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)getOrCreateInfoWithCategory:(unsigned long long)arg1;
- (id)categorys;
- (void)setCategorys:(id)arg1;
- (void).cxx_destruct;
@end
