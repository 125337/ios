@interface WCFinderFollowingInfo : NSObject <WCTTableCoding>
{
    NSString * _followingUsername; // +0x8
    unsigned long long _followIndex; // +0x10
    unsigned long long _oneTimeFlag; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)followingUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_followingUsername;
+ (const void *)followIndex;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_followIndex;
+ (const void *)oneTimeFlag;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_oneTimeFlag;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)description;
- (id)followingUsername;
- (void)setFollowingUsername:(id)arg1;
- (unsigned long long)followIndex;
- (void)setFollowIndex:(unsigned long long)arg1;
- (unsigned long long)oneTimeFlag;
- (void)setOneTimeFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
