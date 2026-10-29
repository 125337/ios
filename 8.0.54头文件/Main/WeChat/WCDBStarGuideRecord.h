@interface WCDBStarGuideRecord : NSObject <WCTTableCoding>
{
    BOOL _isLocal; // +0x8
    NSString * _feedID; // +0x10
    long long _scene; // +0x18
    unsigned long long _updatedTime; // +0x20
    long long _displayTimes; // +0x28
    long long _clickTimes; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)feedID;
+ (const void *)__wcdb_synthesize_125:(void *)arg1;
+ (id)swift_feedID;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_126:(void *)arg1;
+ (id)swift_scene;
+ (const void *)updatedTime;
+ (const void *)__wcdb_synthesize_127:(void *)arg1;
+ (id)swift_updatedTime;
+ (const void *)displayTimes;
+ (const void *)__wcdb_synthesize_128:(void *)arg1;
+ (id)swift_displayTimes;
+ (const void *)clickTimes;
+ (const void *)__wcdb_synthesize_129:(void *)arg1;
+ (id)swift_clickTimes;
+ (const void *)isLocal;
+ (const void *)__wcdb_synthesize_130:(void *)arg1;
+ (id)swift_isLocal;
+ (void)__wcdb_column_constraint_131:(void *)arg1;
+ (void)__wcdb_column_constraint_132:(void *)arg1;
+ (void)__wcdb_column_constraint_133:(void *)arg1;
+ (void)__wcdb_column_constraint_134:(void *)arg1;
+ (void)__wcdb_column_constraint_135:(void *)arg1;
+ (void)__wcdb_column_constraint_136:(void *)arg1;
+ (void)__wcdb_table_constraint_137:(void *)arg1;
+ (void)__wcdb_table_constraint_138:(void *)arg1;
+ (void)__wcdb_index_139:(void *)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (unsigned long long)updatedTime;
- (void)setUpdatedTime:(unsigned long long)arg1;
- (long long)displayTimes;
- (void)setDisplayTimes:(long long)arg1;
- (long long)clickTimes;
- (void)setClickTimes:(long long)arg1;
- (BOOL)isLocal;
- (void)setIsLocal:(BOOL)arg1;
- (void).cxx_destruct;
@end

