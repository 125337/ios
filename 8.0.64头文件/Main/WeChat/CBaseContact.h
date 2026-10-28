@interface CBaseContact : NSObject <PBCoding, NSCoding>
{
    NSString * m_nsUsrName; // +0x8
    NSString * m_nsEncodeUserName; // +0x10
    NSString * m_nsAliasName; // +0x18
    unsigned int m_uiConType; // +0x20
    NSString * m_nsNickName; // +0x28
    NSString * m_nsFullPY; // +0x30
    NSString * m_nsShortPY; // +0x38
    NSString * m_nsRemark; // +0x40
    NSString * m_nsRemarkPYShort; // +0x48
    NSString * m_nsRemarkPYFull; // +0x50
    NSString * m_nsDisplayNamePY; // +0x58
    unsigned int m_uiSex; // +0x60
    unsigned int m_uiType; // +0x64
    unsigned long long m_uiTypeExt; // +0x68
    unsigned int m_uiChatState; // +0x70
    NSData * m_dtUsrImg; // +0x78
    NSString * m_nsImgStatus; // +0x80
    NSString * m_nsHDImgStatus; // +0x88
    NSString * m_nsHeadImgUrl; // +0x90
    NSString * m_nsHeadHDImgUrl; // +0x98
    NSString * m_nsHeadHDMd5; // +0xa0
    NSString * m_nsDraft; // +0xa8
    unsigned int m_uiDraftTime; // +0xb0
    NSString * m_nsAtUserList; // +0xb8
    unsigned int m_uiQQUin; // +0xc0
    NSString * m_nsMobileIdentify; // +0xc8
    unsigned int m_uiFriendScene; // +0xd0
    unsigned int m_uiImgKey; // +0xd4
    unsigned int m_uiExtKey; // +0xd8
    unsigned int m_uiImgKeyAtLastGet; // +0xdc
    unsigned int m_uiExtKeyAtLastGet; // +0xe0
    BOOL m_hasDetectPlugin; // +0xe4
    BOOL m_isPlugin; // +0xe5
    BOOL m_hasDetectSelf; // +0xe6
    BOOL m_isSelf; // +0xe7
    NSString * m_nsAntispamTicket; // +0xe8
    BOOL _m_bUseHeadImgUrlForDisplay; // +0xf0
    BOOL _m_bUseRoundHeadImage; // +0xf1
    long long m_i64ReferMsgSvrId; // +0xf8
    NSString * m_nsFriendUserName; // +0x100
    NSDictionary * _externalInfoJSONCache; // +0x108
    NSString * _m_nsGroupMemberTicket; // +0x110
    NSString * _m_authIconUrl; // +0x118
}
+ (void)PBArrayAdd_m_nsUsrName;
+ (void)PBArrayAdd_m_nsEncodeUserName;
+ (void)PBArrayAdd_m_nsAliasName;
+ (void)PBArrayAdd_m_uiConType;
+ (void)PBArrayAdd_m_nsNickName;
+ (void)PBArrayAdd_m_nsFullPY;
+ (void)PBArrayAdd_m_nsRemark;
+ (void)PBArrayAdd_m_nsRemarkPYShort;
+ (void)PBArrayAdd_m_nsRemarkPYFull;
+ (void)PBArrayAdd_m_uiSex;
+ (void)PBArrayAdd_m_uiType;
+ (void)PBArrayAdd_m_uiChatState;
+ (void)PBArrayAdd_m_nsImgStatus;
+ (void)PBArrayAdd_m_nsHDImgStatus;
+ (void)PBArrayAdd_m_nsHeadImgUrl;
+ (void)PBArrayAdd_m_nsHeadHDImgUrl;
+ (void)PBArrayAdd_m_nsHeadHDMd5;
+ (void)PBArrayAdd_m_nsDraft;
+ (void)PBArrayAdd_m_uiImgKey;
+ (void)PBArrayAdd_m_uiExtKey;
+ (void)PBArrayAdd_m_uiImgKeyAtLastGet;
+ (void)PBArrayAdd_m_uiExtKeyAtLastGet;
+ (void)PBArrayAdd_m_uiQQUin;
+ (void)PBArrayAdd_m_nsMobileIdentify;
+ (void)PBArrayAdd_m_uiFriendScene;
+ (void)PBArrayAdd_m_uiDraftTime;
+ (void)PBArrayAdd_m_nsAtUserList;
+ (void)PBArrayAdd_m_i64ReferMsgSvrId;
+ (void)PBArrayAdd_m_nsFriendUserName;
+ (void)PBArrayAdd_m_uiTypeExt;
+ (void)initialize;
+ (BOOL)isWeChatPayCollAssistUsername:(id)arg1;
+ (BOOL)isWeChatPayContactUsername:(id)arg1;
- (void)setForwardMessageContactFromScene:(unsigned int)arg1;
- (unsigned int)forwardMessageContactFromScene;
- (id)getPBPropertyTable;
- (void)setM_nsUsrName:(id)arg1;
- (unsigned int)realFriendScene;
- (id)m_nsNickName;
- (void)setM_nsNickName:(id)arg1;
- (void)tryNickName:(id)arg1;
- (void)tryHeadImgUrl:(id)arg1;
- (void)setM_nsRemark:(id)arg1;
- (void)setNickNameWithoutEmojiChange:(id)arg1;
- (void)setRemarkWithoutEmojiChange:(id)arg1;
- (id)m_nsShortPY;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)copyFrom:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (id)chatRoomTopic;
- (void)setChatRoomTopic:(id)arg1;
- (BOOL)isValid;
- (id)getEncodeUserName;
- (BOOL)isEqualToContact:(id)arg1;
- (BOOL)isEqualToName:(id)arg1;
- (BOOL)isBlack;
- (void)setBlack:(BOOL)arg1;
- (BOOL)isSocialBlack;
- (void)setSocialBlack:(BOOL)arg1;
- (BOOL)isSnsBlack;
- (void)setSnsBlack:(BOOL)arg1;
- (BOOL)isMyTeenagerModeWard;
- (void)setMyTeenagerModeWard:(BOOL)arg1;
- (BOOL)isMyTeenagerModeGuardian;
- (void)setMyTeenagerModeGuardian:(BOOL)arg1;
- (BOOL)isFinderNointeresting;
- (BOOL)isFinderBlack;
- (BOOL)isFinderUser;
- (BOOL)isWeSportBlack;
- (void)setWeSportBlack:(BOOL)arg1;
- (BOOL)isFavour;
- (BOOL)isMMContact;
- (BOOL)isInChatList;
- (BOOL)isChatRoomMember;
- (BOOL)isWeixin;
- (BOOL)isLbsroom;
- (BOOL)isChatroom;
- (BOOL)isOpenIMChatroom;
- (BOOL)isOpenImContact;
- (BOOL)isOpenImKefuContact;
- (BOOL)isGroupCard;
- (BOOL)isBrandSessionHolder;
- (BOOL)isWWKFSessionHolder;
- (BOOL)isChatBot;
- (BOOL)isAiVoIPDemo;
- (BOOL)enableChatBotVoIPAndShouldMultiTalkMode;
- (BOOL)isGuangYao;
- (BOOL)isPersonalAssistant;
- (BOOL)enableChatBotVoIP;
- (BOOL)isQAAssistant;
- (BOOL)isFileHelper;
- (BOOL)isTemplateMsgHolder;
- (BOOL)isFavWeAppMsgHolder;
- (BOOL)isQQMBlog;
- (BOOL)isQQ;
- (BOOL)isMacHelper;
- (BOOL)isWatchHolder;
- (BOOL)isChatStatusNotifyOpen;
- (BOOL)isWeSportContact;
- (BOOL)isWeGameContact;
- (BOOL)isWeChatPayContact;
- (BOOL)isWeChatPayCollAssistContact;
- (BOOL)isMinishopAssistContact;
- (BOOL)isWeChatPayHKContact;
- (BOOL)isMerchantAssistContact;
- (BOOL)isPluginPresentedContact;
- (BOOL)isUseSvrHeadImagePluginContact;
- (BOOL)isEnterpriseContact;
- (BOOL)isNeedGetUsrImg;
- (BOOL)isNeedGetUsrImgWithoutCheckLocalFile;
- (BOOL)isHasHDImg;
- (BOOL)isNeedGetHDImg;
- (id)getContactHeadImage;
- (void)saveUserImage;
- (id)getRemark;
- (void)setDisplayNamePY;
- (id)getContactDisplayName;
- (id)getContactDisplayName:(unsigned int *)arg1;
- (id)getPluginPresentedContactDisplayName;
- (id)getContactDisplayUsrName;
- (BOOL)hasContactDisplayUsrName;
- (BOOL)isSelf;
- (BOOL)isWeixinTeamContact;
- (BOOL)isHasQQ;
- (id)getQQDisplayName;
- (int)getImageStatusCode;
- (BOOL)m_isPlugin;
- (id)m_nsUsrName;
- (id)m_nsEncodeUserName;
- (void)setM_nsEncodeUserName:(id)arg1;
- (id)m_nsAliasName;
- (void)setM_nsAliasName:(id)arg1;
- (unsigned int)m_uiConType;
- (void)setM_uiConType:(unsigned int)arg1;
- (id)m_nsFullPY;
- (void)setM_nsFullPY:(id)arg1;
- (id)m_nsRemark;
- (id)m_nsRemarkPYShort;
- (void)setM_nsRemarkPYShort:(id)arg1;
- (id)m_nsRemarkPYFull;
- (void)setM_nsRemarkPYFull:(id)arg1;
- (unsigned int)m_uiSex;
- (void)setM_uiSex:(unsigned int)arg1;
- (unsigned int)m_uiType;
- (void)setM_uiType:(unsigned int)arg1;
- (unsigned int)m_uiChatState;
- (void)setM_uiChatState:(unsigned int)arg1;
- (id)m_dtUsrImg;
- (void)setM_dtUsrImg:(id)arg1;
- (id)m_nsImgStatus;
- (void)setM_nsImgStatus:(id)arg1;
- (id)m_nsHDImgStatus;
- (void)setM_nsHDImgStatus:(id)arg1;
- (id)m_nsHeadImgUrl;
- (void)setM_nsHeadImgUrl:(id)arg1;
- (id)m_nsHeadHDImgUrl;
- (void)setM_nsHeadHDImgUrl:(id)arg1;
- (id)m_nsHeadHDMd5;
- (void)setM_nsHeadHDMd5:(id)arg1;
- (id)m_nsDraft;
- (void)setM_nsDraft:(id)arg1;
- (unsigned int)m_uiImgKey;
- (void)setM_uiImgKey:(unsigned int)arg1;
- (unsigned int)m_uiExtKey;
- (void)setM_uiExtKey:(unsigned int)arg1;
- (unsigned int)m_uiImgKeyAtLastGet;
- (void)setM_uiImgKeyAtLastGet:(unsigned int)arg1;
- (unsigned int)m_uiExtKeyAtLastGet;
- (void)setM_uiExtKeyAtLastGet:(unsigned int)arg1;
- (unsigned int)m_uiQQUin;
- (void)setM_uiQQUin:(unsigned int)arg1;
- (id)m_nsMobileIdentify;
- (void)setM_nsMobileIdentify:(id)arg1;
- (unsigned int)m_uiFriendScene;
- (void)setM_uiFriendScene:(unsigned int)arg1;
- (unsigned int)m_uiDraftTime;
- (void)setM_uiDraftTime:(unsigned int)arg1;
- (id)m_nsAtUserList;
- (void)setM_nsAtUserList:(id)arg1;
- (long long)m_i64ReferMsgSvrId;
- (void)setM_i64ReferMsgSvrId:(long long)arg1;
- (id)m_nsFriendUserName;
- (void)setM_nsFriendUserName:(id)arg1;
- (unsigned long long)m_uiTypeExt;
- (void)setM_uiTypeExt:(unsigned long long)arg1;
- (void)setM_nsShortPY:(id)arg1;
- (id)m_nsAntispamTicket;
- (void)setM_nsAntispamTicket:(id)arg1;
- (id)m_nsDisplayNamePY;
- (void)setM_nsDisplayNamePY:(id)arg1;
- (BOOL)m_bUseHeadImgUrlForDisplay;
- (void)setM_bUseHeadImgUrlForDisplay:(BOOL)arg1;
- (BOOL)m_bUseRoundHeadImage;
- (void)setM_bUseRoundHeadImage:(BOOL)arg1;
- (id)externalInfoJSONCache;
- (void)setExternalInfoJSONCache:(id)arg1;
- (id)m_nsGroupMemberTicket;
- (void)setM_nsGroupMemberTicket:(id)arg1;
- (id)m_authIconUrl;
- (void)setM_authIconUrl:(id)arg1;
- (void).cxx_destruct;
@end
