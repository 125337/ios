@interface EnterpriseBrandAttr : MMObject <WCTTableCoding>
{
    BOOL _chatOpen; // +0x8
    BOOL _showConfirm; // +0x9
    BOOL _bannerUsePreset; // +0xa
    BOOL _hideCreateChat; // +0xb
    BOOL _hideModChatMember; // +0xc
    BOOL _hideColleageInvite; // +0xd
    unsigned int _qyUin; // +0x10
    unsigned int _userUin; // +0x14
    unsigned int _userFlag; // +0x18
    unsigned int _wwExposeTimes; // +0x1c
    unsigned int _wwMaxExposeTimes; // +0x20
    unsigned int _wwUserType; // +0x24
    unsigned int _unreadCnt; // +0x28
    NSString * _userName; // +0x30
    unsigned long long _wwCorpId; // +0x38
    unsigned long long _wwUserVid; // +0x40
    NSData * _protoAttrData; // +0x48
    NSString * _colleageInviteTitle; // +0x50
    NSString * _colleageInviteJumpUrl; // +0x58
    NSArray * _homeContacts; // +0x60
    NSSet * _hiddenAppUserNameList; // +0x68
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)qyUin;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_qyUin;
+ (const void *)userUin;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_userUin;
+ (const void *)userFlag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_userFlag;
+ (const void *)wwExposeTimes;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_wwExposeTimes;
+ (const void *)wwMaxExposeTimes;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_wwMaxExposeTimes;
+ (const void *)wwCorpId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_wwCorpId;
+ (const void *)wwUserVid;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_wwUserVid;
+ (const void *)wwUserType;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_wwUserType;
+ (const void *)chatOpen;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_chatOpen;
+ (const void *)unreadCnt;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_unreadCnt;
+ (const void *)showConfirm;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_showConfirm;
+ (const void *)bannerUsePreset;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_bannerUsePreset;
+ (const void *)hideCreateChat;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_hideCreateChat;
+ (const void *)hideModChatMember;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_hideModChatMember;
+ (const void *)hideColleageInvite;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_hideColleageInvite;
+ (const void *)protoAttrData;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_protoAttrData;
+ (const void *)colleageInviteTitle;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_colleageInviteTitle;
+ (const void *)colleageInviteJumpUrl;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_colleageInviteJumpUrl;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)qyUin;
- (void)setQyUin:(unsigned int)arg1;
- (unsigned int)userUin;
- (void)setUserUin:(unsigned int)arg1;
- (unsigned int)userFlag;
- (void)setUserFlag:(unsigned int)arg1;
- (unsigned int)wwExposeTimes;
- (void)setWwExposeTimes:(unsigned int)arg1;
- (unsigned int)wwMaxExposeTimes;
- (void)setWwMaxExposeTimes:(unsigned int)arg1;
- (unsigned long long)wwCorpId;
- (void)setWwCorpId:(unsigned long long)arg1;
- (unsigned long long)wwUserVid;
- (void)setWwUserVid:(unsigned long long)arg1;
- (unsigned int)wwUserType;
- (void)setWwUserType:(unsigned int)arg1;
- (BOOL)chatOpen;
- (void)setChatOpen:(BOOL)arg1;
- (unsigned int)unreadCnt;
- (void)setUnreadCnt:(unsigned int)arg1;
- (BOOL)showConfirm;
- (void)setShowConfirm:(BOOL)arg1;
- (BOOL)bannerUsePreset;
- (void)setBannerUsePreset:(BOOL)arg1;
- (BOOL)hideCreateChat;
- (void)setHideCreateChat:(BOOL)arg1;
- (BOOL)hideModChatMember;
- (void)setHideModChatMember:(BOOL)arg1;
- (BOOL)hideColleageInvite;
- (void)setHideColleageInvite:(BOOL)arg1;
- (id)protoAttrData;
- (void)setProtoAttrData:(id)arg1;
- (id)colleageInviteTitle;
- (void)setColleageInviteTitle:(id)arg1;
- (id)colleageInviteJumpUrl;
- (void)setColleageInviteJumpUrl:(id)arg1;
- (id)homeContacts;
- (void)setHomeContacts:(id)arg1;
- (id)hiddenAppUserNameList;
- (void)setHiddenAppUserNameList:(id)arg1;
- (void).cxx_destruct;
@end

