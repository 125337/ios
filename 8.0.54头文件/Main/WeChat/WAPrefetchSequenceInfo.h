@interface WAPrefetchSequenceInfo : MMObject <WCTTableCoding>
{
    unsigned int _cmdType; // +0x8
    unsigned int _sequence; // +0xc
    NSString * _cmdId; // +0x10
    NSString * _appId; // +0x18
    NSString * _cmdKey; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)cmdId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_cmdId;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_appId;
+ (const void *)cmdType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_cmdType;
+ (const void *)sequence;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_sequence;
+ (const void *)cmdKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_cmdKey;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
- (id)cmdId;
- (void)setCmdId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)cmdType;
- (void)setCmdType:(unsigned int)arg1;
- (unsigned int)sequence;
- (void)setSequence:(unsigned int)arg1;
- (id)cmdKey;
- (void)setCmdKey:(id)arg1;
- (void).cxx_destruct;
@end

