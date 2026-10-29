@interface WCFinderPrefetchFeature : NSObject <PBCoding>
{
    unsigned long long _scene; // +0x8
    unsigned long long _action; // +0x10
    NSString * _redDotIdentifier; // +0x18
    unsigned long long _timestamp; // +0x20
    unsigned long long _shortTimestamp; // +0x28
}
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_shortTimestamp;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_redDotIdentifier;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_scene;
+ (const void *)action;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_action;
+ (const void *)redDotIdentifier;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_redDotIdentifier;
+ (const void *)timestamp;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_timestamp;
+ (const void *)shortTimestamp;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_shortTimestamp;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
- (id)getPBPropertyTable;
- (id)initWithTimestamp:(unsigned long long)arg1 scene:(unsigned long long)arg2 action:(unsigned long long)arg3 redDotIdentifier:(id)arg4;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (id)redDotIdentifier;
- (void)setRedDotIdentifier:(id)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)shortTimestamp;
- (void)setShortTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

