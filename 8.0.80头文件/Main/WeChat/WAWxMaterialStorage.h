@interface WAWxMaterialStorage : NSObject <PBCoding>
{
    NSMutableDictionary * _materialWeAppDic; // +0x8
    NSString * _unstatedWording; // +0x10
}
+ (void)PBArrayAdd_materialWeAppDic;
+ (void)PBArrayAdd_unstatedWording;
+ (void)initialize;
+ (id)loadStorage;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)saveStorage;
- (id)materialWeAppDic;
- (void)setMaterialWeAppDic:(id)arg1;
- (id)unstatedWording;
- (void)setUnstatedWording:(id)arg1;
- (void).cxx_destruct;
@end
