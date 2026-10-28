@interface WCUnReadStory : NSObject <WCTTableCoding>
{
    unsigned int _postTime; // +0x8
    unsigned int _readTimestamp; // +0xc
    NSString * _username; // +0x10
    NSString * _maxTid; // +0x18
    NSString * _readTid; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_username;
+ (const void *)maxTid;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_maxTid;
+ (const void *)readTid;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_readTid;
+ (const void *)postTime;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_postTime;
+ (const void *)readTimestamp;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_readTimestamp;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
- (id)description;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)maxTid;
- (void)setMaxTid:(id)arg1;
- (id)readTid;
- (void)setReadTid:(id)arg1;
- (unsigned int)postTime;
- (void)setPostTime:(unsigned int)arg1;
- (unsigned int)readTimestamp;
- (void)setReadTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
