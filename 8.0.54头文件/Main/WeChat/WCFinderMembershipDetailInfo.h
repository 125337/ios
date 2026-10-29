@interface WCFinderMembershipDetailInfo : NSObject <WCTColumnCoding>
{
    BOOL _autoRenewSwitch; // +0x8
    BOOL _homePageSwitch; // +0x9
    BOOL _isPreviewMode; // +0xa
    unsigned int _visitorMemberBlockFlag; // +0xc
    NSString * _username; // +0x10
    unsigned long long _cacheTime; // +0x18
    NSString * _zoneTitle; // +0x20
    NSString * _zoneDesc; // +0x28
    unsigned long long _membershipStatus; // +0x30
    unsigned long long _visitorStatus; // +0x38
    WCFinderMembershipVisitorMemberInfo * _visitorMemberInfo; // +0x40
    WCFinderMembershipVisitorNonMemberInfo * _visitorNonMemberInfo; // +0x48
    WCFinderMembershipAuthorMemberInfo * _authorMemberInfo; // +0x50
    WCFinderMemberCollectionInfo * _memberCollectionInfo; // +0x58
    unsigned long long _servicePrice; // +0x60
    NSString * _nickname; // +0x68
    WCFinderContact * _contact; // +0x70
    WCFinderDataItem * _currentLiveObject; // +0x78
    NSString * _memberBenefitsURL; // +0x80
    NSString * _wecoinProductId; // +0x88
    unsigned long long _autoServicePrice; // +0x90
    unsigned long long _extFlag; // +0x98
    WCFinderMemberStatisticalInfo * _statisticalInfo; // +0xa0
    unsigned long long _unsubscribeMsId; // +0xa8
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)zoneTitle;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_zoneTitle;
+ (const void *)zoneDesc;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_zoneDesc;
+ (const void *)membershipStatus;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_membershipStatus;
+ (const void *)visitorStatus;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_visitorStatus;
+ (const void *)visitorMemberInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_visitorMemberInfo;
+ (const void *)visitorNonMemberInfo;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_visitorNonMemberInfo;
+ (const void *)authorMemberInfo;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_authorMemberInfo;
+ (const void *)servicePrice;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_servicePrice;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_nickname;
+ (const void *)contact;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_contact;
+ (const void *)currentLiveObject;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_currentLiveObject;
+ (const void *)memberBenefitsURL;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_memberBenefitsURL;
+ (const void *)wecoinProductId;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_wecoinProductId;
+ (const void *)autoServicePrice;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_autoServicePrice;
+ (const void *)extFlag;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_extFlag;
+ (const void *)autoRenewSwitch;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_autoRenewSwitch;
+ (const void *)memberCollectionInfo;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_memberCollectionInfo;
+ (const void *)statisticalInfo;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_statisticalInfo;
+ (const void *)homePageSwitch;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_homePageSwitch;
+ (const void *)unsubscribeMsId;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_unsubscribeMsId;
+ (const void *)isPreviewMode;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_isPreviewMode;
+ (const void *)visitorMemberBlockFlag;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_visitorMemberBlockFlag;
+ (void)__wcdb_column_constraint_24:(void *)arg1;
+ (void)__wcdb_index_25:(void *)arg1;
- (id)initWithFinderMembershipDetailInfoResponse:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (id)zoneTitle;
- (void)setZoneTitle:(id)arg1;
- (id)zoneDesc;
- (void)setZoneDesc:(id)arg1;
- (unsigned long long)membershipStatus;
- (void)setMembershipStatus:(unsigned long long)arg1;
- (unsigned long long)visitorStatus;
- (void)setVisitorStatus:(unsigned long long)arg1;
- (id)visitorMemberInfo;
- (void)setVisitorMemberInfo:(id)arg1;
- (id)visitorNonMemberInfo;
- (void)setVisitorNonMemberInfo:(id)arg1;
- (id)authorMemberInfo;
- (void)setAuthorMemberInfo:(id)arg1;
- (id)memberCollectionInfo;
- (void)setMemberCollectionInfo:(id)arg1;
- (unsigned long long)servicePrice;
- (void)setServicePrice:(unsigned long long)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)currentLiveObject;
- (void)setCurrentLiveObject:(id)arg1;
- (id)memberBenefitsURL;
- (void)setMemberBenefitsURL:(id)arg1;
- (id)wecoinProductId;
- (void)setWecoinProductId:(id)arg1;
- (unsigned long long)autoServicePrice;
- (void)setAutoServicePrice:(unsigned long long)arg1;
- (unsigned long long)extFlag;
- (void)setExtFlag:(unsigned long long)arg1;
- (BOOL)autoRenewSwitch;
- (void)setAutoRenewSwitch:(BOOL)arg1;
- (id)statisticalInfo;
- (void)setStatisticalInfo:(id)arg1;
- (BOOL)homePageSwitch;
- (void)setHomePageSwitch:(BOOL)arg1;
- (unsigned long long)unsubscribeMsId;
- (void)setUnsubscribeMsId:(unsigned long long)arg1;
- (BOOL)isPreviewMode;
- (void)setIsPreviewMode:(BOOL)arg1;
- (unsigned int)visitorMemberBlockFlag;
- (void)setVisitorMemberBlockFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

