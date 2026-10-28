@interface CContact : CBaseContact <_TtP6WeChat11FTSRowModel_, PBCoding, NSCoding>
{
    unsigned int m_uiChatRoomStatus; // +0x120
    NSString * m_nsChatRoomMemList; // +0x128
    NSString * m_nsChatRoomAdminList; // +0x130
    unsigned int m_uiChatRoomAccessType; // +0x138
    unsigned int m_uiChatRoomMaxCount; // +0x13c
    unsigned int m_uiChatRoomVersion; // +0x140
    ChatRoomDetail * m_ChatRoomDetail; // +0x148
    NSString * m_nsChatRoomData; // +0x150
    ChatRoomData * m_ChatRoomData; // +0x158
    NSString * m_nsCountry; // +0x160
    NSString * m_nsProvince; // +0x168
    NSString * m_nsCity; // +0x170
    NSString * m_nsSignature; // +0x178
    unsigned int m_uiCertificationFlag; // +0x180
    NSString * m_nsCertificationInfo; // +0x188
    NSString * m_nsOwner; // +0x190
    NSString * m_nsFBNickName; // +0x198
    NSString * m_nsFBID; // +0x1a0
    unsigned int m_uiNeedUpdate; // +0x1a8
    NSString * m_nsWCBGImgObjectID; // +0x1b0
    int m_iWCFlag; // +0x1b8
    NSString * m_pcWCBGImgID; // +0x1c0
    NSString * m_nsExternalInfo; // +0x1c8
    NSString * m_nsBrandSubscriptConfigUrl; // +0x1d0
    unsigned int m_uiBrandSubscriptionSettings; // +0x1d8
    NSString * m_nsBrandIconUrl; // +0x1e0
    BOOL m_isExtInfoValid; // +0x1e8
    NSDictionary * externalInfoJSONCache; // +0x1f0
    BOOL m_isShowRedDot; // +0x1f8
    NSString * m_nsMobileHash; // +0x200
    NSString * m_nsMobileFullHash; // +0x208
    NSString * m_nsLinkedInID; // +0x210
    NSString * m_nsLinkedInName; // +0x218
    NSString * m_nsLinkedInPublicUrl; // +0x220
    unsigned int m_uiDeleteFlag; // +0x228
    NSString * m_nsDescription; // +0x230
    NSString * m_nsCardUrl; // +0x238
    NSArray * m_arrCardItem; // +0x240
    NSString * m_nsWorkID; // +0x248
    NSString * m_nsLabelIDList; // +0x250
    NSArray * m_arrPhoneItem; // +0x258
    NSRecursiveLock * m_lockForChatRoomData; // +0x260
    CAppBrandInfo * _appBrandInfo; // +0x268
    NSString * m_nsSourceExtInfo; // +0x270
    NSString * m_patSuffix; // +0x278
    unsigned int m_uiLocalCommonFlag; // +0x280
    NSString * m_nsOpenIMPrivacyAgreementUrl; // +0x288
    BOOL _m_bFromNewDB; // +0x290
    BOOL _isDeleteInSynModcontact; // +0x291
    unsigned int extFlag; // +0x294
    unsigned int m_uiInChatRoomStatus; // +0x298
    unsigned int m_uiChatRoomQRCodeAccessType; // +0x29c
    unsigned int m_uiLastModifyTime; // +0x2a0
    unsigned int m_uiAddCreateTime; // +0x2a4
    unsigned int m_uiLocalAddContactTime; // +0x2a8
    unsigned int m_uiShareCardMessageStatus; // +0x2ac
    unsigned int _m_uiLastUpdate; // +0x2b0
    unsigned int _m_uiMetaFlag; // +0x2b4
    unsigned int _m_uiDebugModeType; // +0x2b8
    unsigned int _m_uiWxAppOpt; // +0x2bc
    unsigned int _uiLastUpdateAppVersionInfoTime; // +0x2c0
    unsigned int _m_uiChatRoomLocalSendUpgradeType; // +0x2c4
    unsigned int _m_textStatusFlag; // +0x2c8
    NSString * openIMAppid; // +0x2d0
    COpenIMInfo * openIMInfo; // +0x2d8
    unsigned long long m_uiChatRoomBusinessType; // +0x2e0
    NSString * m_textStatusID; // +0x2e8
    NSString * m_textStatusExtInfo; // +0x2f0
    RingTone * m_ringBackInfo; // +0x2f8
    RingTone * exclusiveRing; // +0x300
    unsigned long long m_uiLocalBitFlag; // +0x308
    NSDictionary * _m_dicWeiDianInfo; // +0x310
    NSString * _m_nsChatRoomSpecialAttentionMemList; // +0x318
    CardImgItemInfo * _m_businessCardItem; // +0x320
    NSString * _m_nsWeiDianInfo; // +0x328
    NSString * _m_textStatusData; // +0x330
    NSString * _m_createGroupSessionId; // +0x338
    EncryptSecretInfo * _m_encryptSecretInfo; // +0x340
}
+ (BOOL)isWeAppUserName:(id)arg1;
+ (BOOL)isWeWorkKFUserName:(id)arg1;
+ (BOOL)isBrandFollowedWithUsername:(id)arg1;
+ (void)PBArrayAdd_m_nsChatRoomMemList;
+ (void)PBArrayAdd_m_uiChatRoomStatus;
+ (void)PBArrayAdd_m_nsCountry;
+ (void)PBArrayAdd_m_nsProvince;
+ (void)PBArrayAdd_m_nsCity;
+ (void)PBArrayAdd_m_nsSignature;
+ (void)PBArrayAdd_m_uiCertificationFlag;
+ (void)PBArrayAdd_m_nsCertificationInfo;
+ (void)PBArrayAdd_m_nsOwner;
+ (void)PBArrayAdd_m_nsFBNickName;
+ (void)PBArrayAdd_m_nsFBID;
+ (void)PBArrayAdd_m_uiNeedUpdate;
+ (void)PBArrayAdd_m_nsWCBGImgObjectID;
+ (void)PBArrayAdd_m_iWCFlag;
+ (void)PBArrayAdd_m_pcWCBGImgID;
+ (void)PBArrayAdd_m_nsExternalInfo;
+ (void)PBArrayAdd_m_nsBrandSubscriptConfigUrl;
+ (void)PBArrayAdd_m_uiBrandSubscriptionSettings;
+ (void)PBArrayAdd_m_nsBrandIconUrl;
+ (void)PBArrayAdd_m_isExtInfoValid;
+ (void)PBArrayAdd_m_nsChatRoomData;
+ (void)PBArrayAdd_m_uiChatRoomAccessType;
+ (void)PBArrayAdd_m_isShowRedDot;
+ (void)PBArrayAdd_m_nsMobileHash;
+ (void)PBArrayAdd_m_nsMobileFullHash;
+ (void)PBArrayAdd_m_nsLinkedInID;
+ (void)PBArrayAdd_m_nsLinkedInName;
+ (void)PBArrayAdd_m_nsLinkedInPublicUrl;
+ (void)PBArrayAdd_m_uiChatRoomMaxCount;
+ (void)PBArrayAdd_m_uiChatRoomVersion;
+ (void)PBArrayAdd_m_uiDeleteFlag;
+ (void)PBArrayAdd_m_nsDescription;
+ (void)PBArrayAdd_m_nsCardUrl;
+ (void)PBArrayAdd_m_nsLabelIDList;
+ (void)PBArrayAdd_m_arrPhoneItem;
+ (void)PBArrayAdd_m_ChatRoomDetail;
+ (void)PBArrayAdd_openIMAppid;
+ (void)PBArrayAdd_openIMInfo;
+ (void)PBArrayAdd_m_nsChatRoomAdminList;
+ (void)PBArrayAdd_m_nsSourceExtInfo;
+ (void)PBArrayAdd_m_uiChatRoomBusinessType;
+ (void)PBArrayAdd_m_patSuffix;
+ (void)PBArrayAdd_m_textStatusID;
+ (void)PBArrayAdd_m_textStatusExtInfo;
+ (void)PBArrayAdd_m_ringBackInfo;
+ (void)PBArrayAdd_exclusiveRing;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_m_arrCardItem;
+ (void)PBArrayAdd_m_uiInChatRoomStatus;
+ (void)PBArrayAdd_m_uiLocalBitFlag;
+ (void)PBArrayAdd_m_uiChatRoomQRCodeAccessType;
+ (void)initialize;
+ (id)parseContactKey:(id)arg1;
+ (unsigned long long)getChatRoomMemberCount:(id)arg1;
+ (id)getChatRoomMemberUserName:(id)arg1;
+ (id)getChatRoomMember:(id)arg1;
+ (id)GetChatRoomAdmin:(id)arg1;
+ (id)GetChatRoomAdminUserName:(id)arg1;
+ (id)getChatRoomMemberWithoutMyself:(id)arg1;
+ (id)genChatRoomName:(id)arg1;
+ (id)genChatRoomName:(id)arg1 truncateByLen:(long long)arg2;
+ (id)genChatRoomName:(id)arg1 truncateByLen:(long long)arg2 appendTail:(BOOL)arg3;
+ (id)genChatRoomName:(id)arg1 truncateByLen:(long long)arg2 appendTailText:(id)arg3;
+ (id)genChatRoomNameNoRemark:(id)arg1;
+ (id)genChatRoomName:(id)arg1 truncateByLen:(long long)arg2 appendTailText:(id)arg3 canShowRemark:(BOOL)arg4;
+ (BOOL)IsChatRoomContact:(id)arg1;
+ (void)HandleUsrImgPB:(id)arg1 Contatct:(id)arg2;
+ (void)HandleChatMemUsrImgPB:(id)arg1 Contatct:(id)arg2;
+ (BOOL)isHeadImgUpdated:(id)arg1 Local:(id)arg2;
- (id)userName;
- (id)diffIdentifier;
- (BOOL)isDoNotDisturbMode;
- (void)setIsFTSKFContact:(BOOL)arg1;
- (BOOL)isFTSKFContact;
- (id)openimAcctType;
- (id)openimName;
- (id)openimIconURL;
- (id)openimIntroURL;
- (id)openIMUIDesc;
- (id)openIMDesc;
- (id)openIMDescIcon;
- (id)openimDescQuanPin;
- (id)openimDescShortPY;
- (id)customSectionHeader;
- (id)getMsgSendOpEntry;
- (unsigned int)openIMResourceSubType;
- (BOOL)isOpenImFinderShopKefuContact;
- (BOOL)isOpenImFinderShopTalentKefuContact;
- (id)openIMIconNamePostfixWithIconSize:(double)arg1;
- (id)openIMIconNamePostfix;
- (BOOL)validForTextState;
- (id)mostRecentTextState;
- (id)textStateList;
- (id)contactTextState;
- (id)doNotDisturbModeTipWith:(id)arg1;
- (void)setMassSendContactfromScene:(unsigned int)arg1;
- (unsigned int)massSendContactfromScene;
- (BOOL)isYuanBao;
- (BOOL)isChatBotAndEnableShowOpenIMInfo;
- (long long)getToolBarFlag;
- (id)getInfoDictionary;
- (id)getChatBotAuthorInfos;
- (id)getChatBotPrivacyInfos;
- (id)getChatBotOpenIMContactCustomInfo;
- (id)getChatBotOpenIMAppid;
- (id)getChatBotOpenIMDescId;
- (id)getChatBotOpenIMIcon;
- (void)updateWithBizAttrChanged:(id)arg1;
- (id)getExternalInfoDictionary;
- (BOOL)isNormalBrand;
- (BOOL)isSubscriptionBrand;
- (BOOL)isServiceBrand;
- (unsigned long long)getBrandContactType;
- (void)setBrandContactType:(unsigned int)arg1;
- (id)getBrandAppId;
- (id)getEnterpriseMainBrandUserName;
- (BOOL)isEnterpriseMainBrand;
- (BOOL)isEnterpriseBrand;
- (unsigned int)getEnterpriseSubBrandChildType;
- (id)getEnterpriseSubBrandUrl;
- (id)getEnterpriseSubBrandChatExtUrl;
- (BOOL)isEnterpriseSubBrand;
- (BOOL)isEnterpriseChatSubBrand;
- (BOOL)isEnterpriseWebSubBrand;
- (BOOL)isEnterpriseDisableBrand;
- (BOOL)isHardDeviceBrand;
- (BOOL)isHardDeviceTestBrand;
- (BOOL)isPersonalVerifiedBrand;
- (BOOL)canAutoMuteBrand;
- (id)getAboutBizUrl;
- (BOOL)getIsOversea;
- (id)getPersonalVerifiedDesc;
- (BOOL)isInternalSportBrand;
- (BOOL)isInternalMyDeviceBrand;
- (BOOL)isHardDeviceHideSubtitle;
- (BOOL)canSupportMessageNotify;
- (long long)getConnectorMsgType;
- (id)getSpecifyWorkerOpenID;
- (BOOL)containKFWorkerInfo;
- (BOOL)isReceiveMessageSwitchOn;
- (void)setReceiveMessageSwitch:(BOOL)arg1;
- (BOOL)isProvideLocationSwitchOn;
- (void)setProvideLocationSwitch:(BOOL)arg1;
- (long long)getAudioPlayType;
- (long long)getReportLocationType;
- (long long)getScanQRCodeType;
- (BOOL)isShowHeadImgInMsg;
- (BOOL)isShowToolBarInMsg;
- (long long)getInteractiveMode;
- (id)bizMenuInfoFromContact;
- (id)getCustomizeMenu;
- (id)getBrandTrademarkUrl;
- (id)getBrandTrademarkName;
- (unsigned int)getBrandVerifySourceType;
- (id)getBrandVerifySourceName;
- (id)getBrandVerifySourceDescription;
- (id)getBrandVerifySourceIntroUrl;
- (id)getBrandVerifySubTitle;
- (BOOL)isBizPersonalVerifed;
- (id)verifedIdentity;
- (id)getPersonalVerifiedIdentity;
- (id)getPersonalVerifiedDescribe;
- (id)getBrandRegisterSourceBody;
- (id)getBrandRegisterSourceIntroUrl;
- (BOOL)getBrandRegisterSourceIsClose;
- (id)brandPrivileges;
- (id)brandUrls;
- (id)getBrandMerchantRatings;
- (id)getBrandMerchantSecurity;
- (id)getBrandMerchantSecurityUrl;
- (id)getBrandBusinessScope;
- (BOOL)isConferenceContactExpired;
- (unsigned int)getConferenceContactExpireTime;
- (id)getConferenceVerifyPromptTitle;
- (id)getConferenceVerifyButtonTitle;
- (id)getSupportEmoticonLinkPrefix;
- (unsigned int)getFunctionFlag;
- (long long)getWeAppBizWxaOpenFlag;
- (id)getBrandProfileBindWeAppList;
- (id)getMigrationNicknameList;
- (id)appBrandInfo;
- (id)getAppBrandInfo;
- (id)getWeAppID;
- (BOOL)isWeAppContact;
- (BOOL)isBlockWeAppSessionMessage;
- (BOOL)isBlockWeAppTemplateMessage;
- (id)getBrandInfoItemAndRemoveIt:(id)arg1 fromArray:(id)arg2;
- (id)getTitleKey:(id)arg1;
- (id)getPBPropertyTable;
- (void)setM_uiShareCardMessageStatus:(unsigned int)arg1;
- (void)setM_nsSignature:(id)arg1;
- (void)setM_nsChatRoomData:(id)arg1;
- (void)setChatRoomDataWithoutEmojiChange:(id)arg1;
- (void)setM_ChatRoomData:(id)arg1;
- (void)setSignatureWithoutEmojiChange:(id)arg1;
- (void)setM_nsExternalInfo:(id)arg1;
- (void)setM_patSuffix:(id)arg1;
- (id)m_nsChatRoomData;
- (id)m_ChatRoomData;
- (BOOL)isContactTypeShouldDelete;
- (id)getMobileDisplayName;
- (id)getMobileNumString;
- (id)getMobileList;
- (BOOL)isHasMobile;
- (id)m_nsNickName;
- (id)getContactDisplayName;
- (BOOL)isBlack;
- (BOOL)isChatRoomNeedPushAtMeMsg;
- (BOOL)isChatRoomNeedPushAtAllMsg;
- (BOOL)isChatRoomNeedPushGroupNoticeMsg;
- (unsigned int)getChatRoomMemberFlag;
- (id)init;
- (id)initWithModContact:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)copyFieldFromContact:(id)arg1;
- (BOOL)copyPatialFieldFromContact:(id)arg1;
- (id)description;
- (void)tryLoadExtInfo;
- (BOOL)hasContactDisplayUsrName;
- (BOOL)isMyContact;
- (BOOL)isOpenImChatroomAndUpgradeOpenIMChatroom;
- (BOOL)isUpgradeOpenIMChatroom;
- (BOOL)isToBeUpgradeHadNotUpgradeChatRoom;
- (BOOL)isToBeUpgradeChatRoomMemberMoreThanMax;
- (BOOL)IsAddFromLbs;
- (BOOL)IsAddFromShake;
- (BOOL)isBrandContact;
- (BOOL)isVerifiedBrandContact;
- (BOOL)isIgnoreBrandContat;
- (BOOL)isVerified;
- (BOOL)isHolderContact;
- (BOOL)isWeixinSingleConatct;
- (BOOL)isWeixinSingleConatctCore;
- (BOOL)isSingleContactNotNecessarilyMM;
- (BOOL)isNormalContact;
- (BOOL)isChatBoxContact;
- (BOOL)isSingleChatBoxContact;
- (BOOL)isLocalizedContact;
- (long long)compareForFavourGroup:(id)arg1;
- (id)getNormalContactDisplayDesc;
- (id)getChatRoomMemberDisplayName:(id)arg1;
- (id)getUsernameForDisplayName:(id)arg1;
- (id)getChatRoomMemberNickName:(id)arg1;
- (id)getChatRoomMembrGroupNickName:(id)arg1;
- (id)xmlForMessageWrapContent;
- (id)xmlForMessageWrapContentWithDictExtraInfo:(id)arg1;
- (id)genDictExtraInfoStrWithDictExtraInfo:(id)arg1;
- (id)xmlForMessageWrapContent:(id)arg1 OpCode:(unsigned int)arg2;
- (BOOL)isWechatUser;
- (id)accountColumnName;
- (BOOL)hasOverseaInfo;
- (BOOL)isOwner;
- (BOOL)isAdmin;
- (int)getChatRoomRole;
- (id)admins;
- (BOOL)isShowChatRoomDisplayName;
- (BOOL)isChatroomNeedAccessVerify;
- (BOOL)isChatRoomQRCodeAccess;
- (BOOL)isContactSessionTop;
- (BOOL)isChatStatusNotifyOpen;
- (void)setChatStatusNotifyOpen:(BOOL)arg1;
- (BOOL)isElderModeQuickCallContact;
- (BOOL)isChatStatusUnfoldSnsOpen;
- (void)setChatStatusUnfoldSnsOpen:(BOOL)arg1;
- (BOOL)isUseNewMuteFlag;
- (BOOL)isShowOpenIMStoragePopUp;
- (void)setShowOpenIMStoragePopUp:(BOOL)arg1;
- (BOOL)needShowUnreadCountOnSession;
- (BOOL)isHasWeiDian;
- (id)m_dicWeiDianInfo;
- (BOOL)isAccountDeleted;
- (id)getLabelIDList;
- (BOOL)isChatRoomOnlyAdminModTopic;
- (BOOL)isChatRoomDismissed;
- (BOOL)isChatRoomBlocked;
- (BOOL)IsUserInChatRoom:(id)arg1;
- (BOOL)canStartChatRoomLive;
- (BOOL)hasCardImage;
- (long long)cardImageCount;
- (id)openIMAppid;
- (id)m_nsChatRoomMemList;
- (void)setM_nsChatRoomMemList:(id)arg1;
- (unsigned int)m_uiChatRoomStatus;
- (void)setM_uiChatRoomStatus:(unsigned int)arg1;
- (id)m_nsCountry;
- (void)setM_nsCountry:(id)arg1;
- (id)m_nsProvince;
- (void)setM_nsProvince:(id)arg1;
- (id)m_nsCity;
- (void)setM_nsCity:(id)arg1;
- (id)m_nsSignature;
- (unsigned int)m_uiCertificationFlag;
- (void)setM_uiCertificationFlag:(unsigned int)arg1;
- (id)m_nsCertificationInfo;
- (void)setM_nsCertificationInfo:(id)arg1;
- (id)m_nsOwner;
- (void)setM_nsOwner:(id)arg1;
- (id)m_nsFBNickName;
- (void)setM_nsFBNickName:(id)arg1;
- (id)m_nsFBID;
- (void)setM_nsFBID:(id)arg1;
- (unsigned int)m_uiNeedUpdate;
- (void)setM_uiNeedUpdate:(unsigned int)arg1;
- (id)m_nsWCBGImgObjectID;
- (void)setM_nsWCBGImgObjectID:(id)arg1;
- (int)m_iWCFlag;
- (void)setM_iWCFlag:(int)arg1;
- (id)m_pcWCBGImgID;
- (void)setM_pcWCBGImgID:(id)arg1;
- (id)m_nsExternalInfo;
- (id)m_nsBrandSubscriptConfigUrl;
- (void)setM_nsBrandSubscriptConfigUrl:(id)arg1;
- (unsigned int)m_uiBrandSubscriptionSettings;
- (void)setM_uiBrandSubscriptionSettings:(unsigned int)arg1;
- (id)m_nsBrandIconUrl;
- (void)setM_nsBrandIconUrl:(id)arg1;
- (BOOL)m_isExtInfoValid;
- (void)setM_isExtInfoValid:(BOOL)arg1;
- (unsigned int)m_uiChatRoomAccessType;
- (void)setM_uiChatRoomAccessType:(unsigned int)arg1;
- (BOOL)m_isShowRedDot;
- (void)setM_isShowRedDot:(BOOL)arg1;
- (id)m_nsMobileHash;
- (void)setM_nsMobileHash:(id)arg1;
- (id)m_nsMobileFullHash;
- (void)setM_nsMobileFullHash:(id)arg1;
- (id)m_nsLinkedInID;
- (void)setM_nsLinkedInID:(id)arg1;
- (id)m_nsLinkedInName;
- (void)setM_nsLinkedInName:(id)arg1;
- (id)m_nsLinkedInPublicUrl;
- (void)setM_nsLinkedInPublicUrl:(id)arg1;
- (unsigned int)m_uiChatRoomMaxCount;
- (void)setM_uiChatRoomMaxCount:(unsigned int)arg1;
- (unsigned int)m_uiChatRoomVersion;
- (void)setM_uiChatRoomVersion:(unsigned int)arg1;
- (unsigned int)m_uiDeleteFlag;
- (void)setM_uiDeleteFlag:(unsigned int)arg1;
- (id)m_nsDescription;
- (void)setM_nsDescription:(id)arg1;
- (id)m_nsCardUrl;
- (void)setM_nsCardUrl:(id)arg1;
- (id)m_nsLabelIDList;
- (void)setM_nsLabelIDList:(id)arg1;
- (id)m_arrPhoneItem;
- (void)setM_arrPhoneItem:(id)arg1;
- (id)m_ChatRoomDetail;
- (void)setM_ChatRoomDetail:(id)arg1;
- (void)setOpenIMAppid:(id)arg1;
- (id)openIMInfo;
- (void)setOpenIMInfo:(id)arg1;
- (id)m_nsChatRoomAdminList;
- (void)setM_nsChatRoomAdminList:(id)arg1;
- (id)m_nsSourceExtInfo;
- (void)setM_nsSourceExtInfo:(id)arg1;
- (unsigned long long)m_uiChatRoomBusinessType;
- (void)setM_uiChatRoomBusinessType:(unsigned long long)arg1;
- (id)m_patSuffix;
- (id)m_textStatusID;
- (void)setM_textStatusID:(id)arg1;
- (id)m_textStatusExtInfo;
- (void)setM_textStatusExtInfo:(id)arg1;
- (id)m_ringBackInfo;
- (void)setM_ringBackInfo:(id)arg1;
- (id)exclusiveRing;
- (void)setExclusiveRing:(id)arg1;
- (unsigned int)extFlag;
- (void)setExtFlag:(unsigned int)arg1;
- (id)m_arrCardItem;
- (void)setM_arrCardItem:(id)arg1;
- (unsigned int)m_uiInChatRoomStatus;
- (void)setM_uiInChatRoomStatus:(unsigned int)arg1;
- (unsigned long long)m_uiLocalBitFlag;
- (void)setM_uiLocalBitFlag:(unsigned long long)arg1;
- (unsigned int)m_uiChatRoomQRCodeAccessType;
- (void)setM_uiChatRoomQRCodeAccessType:(unsigned int)arg1;
- (id)externalInfoJSONCache;
- (void)setExternalInfoJSONCache:(id)arg1;
- (id)m_nsWorkID;
- (void)setM_nsWorkID:(id)arg1;
- (id)appBrandInfo;
- (void)setAppBrandInfo:(id)arg1;
- (unsigned int)m_uiLastModifyTime;
- (void)setM_uiLastModifyTime:(unsigned int)arg1;
- (unsigned int)m_uiLocalCommonFlag;
- (void)setM_uiLocalCommonFlag:(unsigned int)arg1;
- (id)m_nsOpenIMPrivacyAgreementUrl;
- (void)setM_nsOpenIMPrivacyAgreementUrl:(id)arg1;
- (unsigned int)m_uiAddCreateTime;
- (void)setM_uiAddCreateTime:(unsigned int)arg1;
- (unsigned int)m_uiLocalAddContactTime;
- (void)setM_uiLocalAddContactTime:(unsigned int)arg1;
- (unsigned int)m_uiShareCardMessageStatus;
- (id)m_nsChatRoomSpecialAttentionMemList;
- (void)setM_nsChatRoomSpecialAttentionMemList:(id)arg1;
- (id)m_businessCardItem;
- (void)setM_businessCardItem:(id)arg1;
- (id)m_nsWeiDianInfo;
- (void)setM_nsWeiDianInfo:(id)arg1;
- (BOOL)m_bFromNewDB;
- (void)setM_bFromNewDB:(BOOL)arg1;
- (unsigned int)m_uiLastUpdate;
- (void)setM_uiLastUpdate:(unsigned int)arg1;
- (unsigned int)m_uiMetaFlag;
- (void)setM_uiMetaFlag:(unsigned int)arg1;
- (unsigned int)m_uiDebugModeType;
- (void)setM_uiDebugModeType:(unsigned int)arg1;
- (unsigned int)m_uiWxAppOpt;
- (void)setM_uiWxAppOpt:(unsigned int)arg1;
- (unsigned int)uiLastUpdateAppVersionInfoTime;
- (void)setUiLastUpdateAppVersionInfoTime:(unsigned int)arg1;
- (unsigned int)m_uiChatRoomLocalSendUpgradeType;
- (void)setM_uiChatRoomLocalSendUpgradeType:(unsigned int)arg1;
- (unsigned int)m_textStatusFlag;
- (void)setM_textStatusFlag:(unsigned int)arg1;
- (id)m_textStatusData;
- (void)setM_textStatusData:(id)arg1;
- (id)m_createGroupSessionId;
- (void)setM_createGroupSessionId:(id)arg1;
- (id)m_encryptSecretInfo;
- (void)setM_encryptSecretInfo:(id)arg1;
- (BOOL)isDeleteInSynModcontact;
- (void)setIsDeleteInSynModcontact:(BOOL)arg1;
- (void).cxx_destruct;
@end
