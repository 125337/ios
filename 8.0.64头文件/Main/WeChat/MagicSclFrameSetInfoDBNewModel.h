@interface MagicSclFrameSetInfoDBNewModel : NSObject <WCTTableCoding>
{
    int _frameSetHeight; // +0x8
    NSString * _bizName; // +0x10
    NSString * _frameSetName; // +0x18
    NSString * _frameSetRootPath; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)bizName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_bizName;
+ (const void *)frameSetName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_frameSetName;
+ (const void *)frameSetRootPath;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_frameSetRootPath;
+ (const void *)frameSetHeight;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_frameSetHeight;
+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (id)frameSetRootPath;
- (void)setFrameSetRootPath:(id)arg1;
- (int)frameSetHeight;
- (void)setFrameSetHeight:(int)arg1;
- (void).cxx_destruct;
@end
