@interface MMFolder : NSObject <PBCoding>
{
    BOOL _bFoundCache; // +0x8
    int _level; // +0xc
    int _m_onlyFileTypeInUse; // +0x10
    int _m_onlyWeChatFileClass; // +0x14
    NSString * _name; // +0x18
    long long _size; // +0x20
    NSMutableArray * _subFolders; // +0x28
    NSMutableArray * _subFiles; // +0x30
    long long _diffCacheSize; // +0x38
    long long _m_onlyBizType; // +0x40
    long long _m_storeTimeType; // +0x48
    MMBizFileMatchNode * _m_bizMatchNode; // +0x50
}
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_subFiles;
+ (void)PBArrayAdd_subFolders;
+ (void)PBArrayAdd_diffCacheSize;
+ (void)PBArrayAdd_bFoundCache;
+ (void)initialize;
+ (void)matchBizWithChildFolder:(id)arg1 parentFolder:(id)arg2;
+ (MMBizMatchInfo)fileMatched:(id)arg1 inFolder:(id)arg2;
- (id)getPBPropertyTable;
- (id)description;
- (long long)compare:(id)arg1;
- (BOOL)isMarkFolder;
- (id)name;
- (void)setName:(id)arg1;
- (long long)size;
- (void)setSize:(long long)arg1;
- (int)level;
- (void)setLevel:(int)arg1;
- (id)subFolders;
- (void)setSubFolders:(id)arg1;
- (id)subFiles;
- (void)setSubFiles:(id)arg1;
- (long long)diffCacheSize;
- (void)setDiffCacheSize:(long long)arg1;
- (BOOL)bFoundCache;
- (void)setBFoundCache:(BOOL)arg1;
- (long long)m_onlyBizType;
- (void)setM_onlyBizType:(long long)arg1;
- (int)m_onlyFileTypeInUse;
- (void)setM_onlyFileTypeInUse:(int)arg1;
- (int)m_onlyWeChatFileClass;
- (void)setM_onlyWeChatFileClass:(int)arg1;
- (long long)m_storeTimeType;
- (void)setM_storeTimeType:(long long)arg1;
- (id)m_bizMatchNode;
- (void)setM_bizMatchNode:(id)arg1;
- (void).cxx_destruct;
@end
