@interface BrandFansContactExtendInfo : NSObject <WCTColumnCoding, PBCoding>
{
    BOOL _inBlackList; // +0x8
    BOOL _isFriend; // +0x9
    BOOL _canSendMsg; // +0xa
    unsigned int _sex; // +0xc
    unsigned int _inviteStatus; // +0x10
    NSString * _country; // +0x18
    NSString * _province; // +0x20
    NSString * _city; // +0x28
    NSString * _signature; // +0x30
    NSString * _renderMPAppURL; // +0x38
    NSData * _interactiveInfo; // +0x40
    NSString * _friendNickname; // +0x48
    NSString * _friendUserName; // +0x50
}
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_sex;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_renderMPAppURL;
+ (void)PBArrayAdd_inBlackList;
+ (void)PBArrayAdd_isFriend;
+ (void)PBArrayAdd_friendNickname;
+ (void)PBArrayAdd_friendUserName;
+ (void)PBArrayAdd_canSendMsg;
+ (void)PBArrayAdd_inviteStatus;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithUserInfo:(id)arg1;
- (id)contactDescription;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (unsigned int)sex;
- (void)setSex:(unsigned int)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)renderMPAppURL;
- (void)setRenderMPAppURL:(id)arg1;
- (BOOL)inBlackList;
- (void)setInBlackList:(BOOL)arg1;
- (id)interactiveInfo;
- (void)setInteractiveInfo:(id)arg1;
- (BOOL)isFriend;
- (void)setIsFriend:(BOOL)arg1;
- (id)friendNickname;
- (void)setFriendNickname:(id)arg1;
- (id)friendUserName;
- (void)setFriendUserName:(id)arg1;
- (BOOL)canSendMsg;
- (void)setCanSendMsg:(BOOL)arg1;
- (unsigned int)inviteStatus;
- (void)setInviteStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
