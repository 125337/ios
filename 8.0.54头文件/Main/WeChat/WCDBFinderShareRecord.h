@interface WCDBFinderShareRecord : NSObject <WCTTableCoding>
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
+ (const void *)__wcdb_synthesize_140:(void *)arg1;
+ (id)swift_feedID;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_141:(void *)arg1;
+ (id)swift_scene;
+ (const void *)updatedTime;
+ (const void *)__wcdb_synthesize_142:(void *)arg1;
+ (id)swift_updatedTime;
+ (const void *)displayTimes;
+ (const void *)__wcdb_synthesize_143:(void *)arg1;
+ (id)swift_displayTimes;
+ (const void *)clickTimes;
+ (const void *)__wcdb_synthesize_144:(void *)arg1;
+ (id)swift_clickTimes;
+ (const void *)isLocal;
+ (const void *)__wcdb_synthesize_145:(void *)arg1;
+ (id)swift_isLocal;
+ (void)__wcdb_column_constraint_146:(void *)arg1;
+ (void)__wcdb_column_constraint_147:(void *)arg1;
+ (void)__wcdb_column_constraint_148:(void *)arg1;
+ (void)__wcdb_column_constraint_149:(void *)arg1;
+ (void)__wcdb_column_constraint_150:(void *)arg1;
+ (void)__wcdb_column_constraint_151:(void *)arg1;
+ (void)__wcdb_table_constraint_152:(void *)arg1;
+ (void)__wcdb_table_constraint_153:(void *)arg1;
+ (void)__wcdb_index_154:(void *)arg1;
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

