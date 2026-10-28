@interface WCFinderMembershipContact : NSObject <WCTTableCoding>
{
    NSString * _username; // +0x8
    WCFinderContact * _contact; // +0x10
    unsigned long long _memberStatus; // +0x18
    unsigned long long _expireTime; // +0x20
    unsigned long long _pageType; // +0x28
    FinderTabTipsDSLRenderTmpl * _dslRender; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)contact;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_contact;
+ (const void *)memberStatus;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_memberStatus;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)pageType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_pageType;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
- (id)initWithFinderMemberCard:(id)arg1;
- (id)initWithFinderMemberFans:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)memberStatus;
- (void)setMemberStatus:(unsigned long long)arg1;
- (unsigned long long)expireTime;
- (void)setExpireTime:(unsigned long long)arg1;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (id)dslRender;
- (void)setDslRender:(id)arg1;
- (void).cxx_destruct;
@end
