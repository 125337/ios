@interface TextStateIconStorage : NSObject <PBCoding>
{
    NSString * _configId; // +0x8
    unsigned long long _key; // +0x10
    unsigned long long _showIconMaxCount; // +0x18
    NSMutableArray * _groups; // +0x20
    NSMutableArray * _icons; // +0x28
    NSRecursiveLock * _accessLock; // +0x30
    NSMutableDictionary * _idToIconDict; // +0x38
}
+ (void)PBArrayAdd_configId;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_groups;
+ (void)PBArrayAdd_icons;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (void)immediateLoadData;
- (id)idToIconDict;
- (id)publishIconList;
- (id)iconForId:(id)arg1;
- (void)clearCachedDescription;
- (id)configId;
- (void)setConfigId:(id)arg1;
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (unsigned long long)showIconMaxCount;
- (void)setShowIconMaxCount:(unsigned long long)arg1;
- (id)groups;
- (void)setGroups:(id)arg1;
- (id)icons;
- (void)setIcons:(id)arg1;
- (id)accessLock;
- (void)setAccessLock:(id)arg1;
- (void)setIdToIconDict:(id)arg1;
- (void).cxx_destruct;
@end

