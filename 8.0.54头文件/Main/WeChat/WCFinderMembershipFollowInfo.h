@interface WCFinderMembershipFollowInfo : NSObject
{
    NSString * _username; // +0x8
    unsigned long long _membershipStatus; // +0x10
    unsigned long long _visitorStatus; // +0x18
    unsigned long long _validTime; // +0x20
    unsigned long long _leftDay; // +0x28
    unsigned long long _cacheTime; // +0x30
    unsigned long long _subscriptionType; // +0x38
    unsigned long long _isCancel; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)membershipStatus;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_membershipStatus;
+ (const void *)visitorStatus;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_visitorStatus;
+ (const void *)validTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_validTime;
+ (const void *)leftDay;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_leftDay;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)subscriptionType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_subscriptionType;
+ (const void *)isCancel;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_isCancel;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
- (id)initWithFetchFinderMemberStatusResponse:(id)arg1 username:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)membershipStatus;
- (void)setMembershipStatus:(unsigned long long)arg1;
- (unsigned long long)visitorStatus;
- (void)setVisitorStatus:(unsigned long long)arg1;
- (unsigned long long)validTime;
- (void)setValidTime:(unsigned long long)arg1;
- (unsigned long long)leftDay;
- (void)setLeftDay:(unsigned long long)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (unsigned long long)subscriptionType;
- (void)setSubscriptionType:(unsigned long long)arg1;
- (unsigned long long)isCancel;
- (void)setIsCancel:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

