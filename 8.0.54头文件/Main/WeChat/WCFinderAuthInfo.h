@interface WCFinderAuthInfo : NSObject <PBCoding, WCTColumnCoding>
{
    NSString * _realName; // +0x8
    unsigned long long _authIconType; // +0x10
    NSString * _authProfession; // +0x18
    NSString * _unauthProfession; // +0x20
    WCFinderContact * _authGuarantor; // +0x28
    NSString * _detailLink; // +0x30
    NSString * _appName; // +0x38
    NSString * _authIconUrl; // +0x40
    unsigned long long _authVerifyIdentity; // +0x48
    unsigned long long _verifyStatus; // +0x50
}
+ (void)PBArrayAdd_realName;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_authProfession;
+ (void)PBArrayAdd_authGuarantor;
+ (void)PBArrayAdd_authIconUrl;
+ (void)PBArrayAdd_authVerifyIdentity;
+ (void)PBArrayAdd_verifyStatus;
+ (void)PBArrayAdd_unauthProfession;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)finderAuthInfo:(id)arg1;
+ (id)genFromBizAuthInfo:(id)arg1;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)genFinderAuthInfo;
- (BOOL)hadCertified;
- (BOOL)hasGuarantor;
- (id)genAuthIconUrl;
- (unsigned long long)authVerifyIdentityType;
- (BOOL)hasAuthIconUrl;
- (id)authIconUrl;
- (id)authProfession;
- (id)description;
- (BOOL)shouldDisplay;
- (id)displayText;
- (id)realName;
- (void)setRealName:(id)arg1;
- (unsigned long long)authIconType;
- (void)setAuthIconType:(unsigned long long)arg1;
- (void)setAuthProfession:(id)arg1;
- (id)unauthProfession;
- (void)setUnauthProfession:(id)arg1;
- (id)authGuarantor;
- (void)setAuthGuarantor:(id)arg1;
- (id)detailLink;
- (void)setDetailLink:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (void)setAuthIconUrl:(id)arg1;
- (unsigned long long)authVerifyIdentity;
- (void)setAuthVerifyIdentity:(unsigned long long)arg1;
- (unsigned long long)verifyStatus;
- (void)setVerifyStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

