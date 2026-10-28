@interface WAMainFrameTaskItem : NSObject <WCTTableCoding>
{
    unsigned int _debugMode; // +0x8
    unsigned int _updateTime; // +0xc
    NSString * _userName; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)debugMode;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_debugMode;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)debugMode;
- (void)setDebugMode:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
