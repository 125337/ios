@interface WCFinderCommentMentionContact : NSObject <WCTTableCoding>
{
    NSString * _username; // +0x8
    unsigned long long _mentionedTime; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)mentionedTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_mentionedTime;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (void)__wcdb_index_3:(void *)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)mentionedTime;
- (void)setMentionedTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

