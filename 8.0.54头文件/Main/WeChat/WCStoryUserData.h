@interface WCStoryUserData : NSObject <WCTTableCoding>
{
    unsigned int _postCount; // +0x8
    unsigned int _lastPostTime; // +0xc
    NSString * _userName; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_userName;
+ (const void *)postCount;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_postCount;
+ (const void *)lastPostTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_lastPostTime;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)postCount;
- (void)setPostCount:(unsigned int)arg1;
- (unsigned int)lastPostTime;
- (void)setLastPostTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

