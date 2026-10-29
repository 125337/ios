@interface BrandFollowedContactDigestInfo : NSObject <WCTTableCoding>
{
    NSString * _bizUsername; // +0x8
    NSString * _digest; // +0x10
    long long _digestTime; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)bizUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_bizUsername;
+ (const void *)digest;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_digest;
+ (const void *)digestTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_digestTime;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (id)parsedFromBizLatestItem:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (long long)digestTime;
- (void)setDigestTime:(long long)arg1;
- (void).cxx_destruct;
@end
