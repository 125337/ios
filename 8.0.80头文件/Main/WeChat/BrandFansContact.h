@interface BrandFansContact : NSObject <BrandFansProfileItem, WCTTableCoding>
{
    BOOL _hasInvited; // +0x8
    unsigned int _headType; // +0xc
    unsigned int _identityType; // +0x10
    unsigned int _cacheLifetime; // +0x14
    NSString * _openID; // +0x18
    NSString * _nickname; // +0x20
    NSString * _avatarImageURL; // +0x28
    NSString * _bizuin; // +0x30
    BrandFansContactExtendInfo * _extendInfo; // +0x38
    NSString * _identityName; // +0x40
    NSNumber * _serviceTypeValue; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)openID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_openID;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_nickname;
+ (const void *)avatarImageURL;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_avatarImageURL;
+ (const void *)bizuin;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_bizuin;
+ (const void *)extendInfo;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_extendInfo;
+ (const void *)headType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_headType;
+ (const void *)identityType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_identityType;
+ (const void *)identityName;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_identityName;
+ (const void *)cacheLifetime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_cacheLifetime;
+ (const void *)serviceTypeValue;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_serviceTypeValue;
+ (const void *)hasInvited;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_hasInvited;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
- (id)profileAvatarImageURL;
- (id)profileDescription;
- (BOOL)profileInBlacklist;
- (id)profileNickname;
- (id)profileSignature;
- (id)profileUserID;
- (unsigned int)profileUserType;
- (id)profileInteractiveInfo;
- (void)updateWithExtendInfo:(id)arg1;
- (BOOL)profileUseRoundAvatar;
- (id)profileFriendNickname;
- (BOOL)profileIsFriend;
- (BOOL)profileCanSendMsg;
- (unsigned int)profileInviteStatus;
- (unsigned int)profileSex;
- (id)profileBizUin;
- (unsigned int)serviceType;
- (id)profileOpenID;
- (id)profileUsername;
- (id)initWithUserAttr:(id)arg1 bizuin:(id)arg2 bizType:(int)arg3;
- (id)initWithOpenID:(id)arg1 bizuin:(id)arg2;
- (void)updateWithUserInfo:(id)arg1;
- (id)contactDescription;
- (id)asContact;
- (id)openIDForCGI;
- (BOOL)useRoundAvatar;
- (int)bizType;
- (BOOL)isCacheValid:(double)arg1;
- (id)openID;
- (void)setOpenID:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatarImageURL;
- (void)setAvatarImageURL:(id)arg1;
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (id)extendInfo;
- (void)setExtendInfo:(id)arg1;
- (unsigned int)headType;
- (void)setHeadType:(unsigned int)arg1;
- (unsigned int)identityType;
- (void)setIdentityType:(unsigned int)arg1;
- (id)identityName;
- (void)setIdentityName:(id)arg1;
- (unsigned int)cacheLifetime;
- (void)setCacheLifetime:(unsigned int)arg1;
- (id)serviceTypeValue;
- (void)setServiceTypeValue:(id)arg1;
- (BOOL)hasInvited;
- (void)setHasInvited:(BOOL)arg1;
- (void).cxx_destruct;
@end
