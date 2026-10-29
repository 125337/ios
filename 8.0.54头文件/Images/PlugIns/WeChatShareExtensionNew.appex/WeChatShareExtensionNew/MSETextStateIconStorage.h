@interface MSETextStateIconStorage : NSObject <PBCoding>
{
    NSString * configId; // +0x8
    unsigned long long key; // +0x10
    NSMutableArray * groups; // +0x18
    NSMutableArray * icons; // +0x20
}
+ (void)PBArrayAdd_configId;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_groups;
+ (void)PBArrayAdd_icons;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)configId;
- (void)setConfigId:(id)arg1;
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (id)groups;
- (void)setGroups:(id)arg1;
- (id)icons;
- (void)setIcons:(id)arg1;
- (void).cxx_destruct;
@end

