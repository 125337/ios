@interface WCFinderContact : NSObject <WCTColumnCoding, PBCoding, WCFinderLiveExt, WCTTableCoding>
{
    BOOL _fansIsSelf; // +0x8
    BOOL _isLongVideoOpen; // +0x9
    BOOL _showOriginalEntry; // +0xa
    BOOL _isAdultForGameLiveJoinTeam; // +0xb
    unsigned int _followTime; // +0xc
    unsigned int _cacheTime; // +0x10
    int _extFlag; // +0x14
    int _userMode; // +0x18
    int _coverEntraceFlag; // +0x1c
    int _attrStatus; // +0x20
    NSString * nickname; // +0x28
    NSString * headURL; // +0x30
    NSString * _username; // +0x38
    unsigned long long _followState; // +0x40
    unsigned long long _isFollowBrand; // +0x48
    NSString * _signature; // +0x50
    WCFinderAuthInfo * _authInfo; // +0x58
    NSString * _coverImageURL; // +0x60
    NSString * _livingDefaultCoverImageURL; // +0x68
    unsigned long long _spamStatus; // +0x70
    unsigned long long _seq; // +0x78
    NSString * _fansid; // +0x80
    WCFinderContactExtInfo * _extInfo; // +0x88
    unsigned long long _blacklistIdentityFlag; // +0x90
    unsigned long long _mentionUserFromType; // +0x98
    FinderContactMsgInfo * _msgInfo; // +0xa0
    unsigned long long _liveStatus; // +0xa8
    unsigned long long _originalFlag; // +0xb0
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0xb8
    unsigned long long _friendFollowCount; // +0xc0
    unsigned long long _fansCount; // +0xc8
    unsigned long long _feedCount; // +0xd0
    FinderContactLiveInfo * _liveSwitchInfo; // +0xd8
    NSString * _wxUsernameV5; // +0xe0
    WCFinderJumpInfo * _accountJumpInfo; // +0xe8
    unsigned long long _userFlag; // +0xf0
    unsigned long long _oneTimeFlag; // +0xf8
    NSString * _relationTag; // +0x100
    WCFinderBindInfoList * _bindInfoList; // +0x108
    FinderGuestInfo * _guestInfo; // +0x110
    NSString * _finderHeadUrl; // +0x118
    NSString * _finderNickname; // +0x120
    AchievementInfo * _archievementInfo; // +0x128
    WCFinderContactServiceMenuMutableArray * _menu; // +0x130
    NSString * _coverUrl; // +0x138
    WCFinderDataItem * _livingDataItem; // +0x140
    unsigned long long _userType; // +0x148
    long long _additionalFlag; // +0x150
    FinderContact * _contactInfo; // +0x158
    WCFinderContactInnerModel * _innerModel; // +0x160
}
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (unsigned long long)followActionOfFollowState:(unsigned long long)arg1 isPrivateContact:(BOOL)arg2;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_headURL;
+ (void)PBArrayAdd_seq;
+ (void)PBArrayAdd_followState;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_followTime;
+ (void)PBArrayAdd_coverImageURL;
+ (void)PBArrayAdd_spamStatus;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_blacklistIdentityFlag;
+ (void)PBArrayAdd_authInfo;
+ (void)PBArrayAdd_msgInfo;
+ (void)PBArrayAdd_originalFlag;
+ (void)PBArrayAdd_showOriginalEntry;
+ (void)PBArrayAdd_friendFollowCount;
+ (void)PBArrayAdd_fansCount;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_userMode;
+ (void)PBArrayAdd_guestInfo;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_coverEntraceFlag;
+ (void)PBArrayAdd_bindInfoList;
+ (void)PBArrayAdd_archievementInfo;
+ (void)PBArrayAdd_menu;
+ (void)PBArrayAdd_finderHeadUrl;
+ (void)PBArrayAdd_finderNickname;
+ (void)PBArrayAdd_attrStatus;
+ (void)PBArrayAdd_additionalFlag;
+ (void)PBArrayAdd_userFlag;
+ (void)PBArrayAdd_contactInfo;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)seq;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_seq;
+ (const void *)followState;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_followState;
+ (const void *)signature;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_signature;
+ (const void *)followTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_followTime;
+ (const void *)authInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_authInfo;
+ (const void *)coverImageURL;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_coverImageURL;
+ (const void *)spamStatus;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_spamStatus;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)extFlag;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_extFlag;
+ (const void *)fansid;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_fansid;
+ (const void *)fansIsSelf;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_fansIsSelf;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_extInfo;
+ (const void *)blacklistIdentityFlag;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_blacklistIdentityFlag;
+ (const void *)msgInfo;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_msgInfo;
+ (const void *)originalFlag;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_originalFlag;
+ (const void *)showOriginalEntry;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_showOriginalEntry;
+ (const void *)liveSwitchInfo;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_liveSwitchInfo;
+ (const void *)friendFollowCount;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_friendFollowCount;
+ (const void *)fansCount;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_fansCount;
+ (const void *)feedCount;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_feedCount;
+ (const void *)finderHeadUrl;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_finderHeadUrl;
+ (const void *)finderNickname;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_finderNickname;
+ (const void *)userMode;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_userMode;
+ (const void *)guestInfo;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_guestInfo;
+ (const void *)archievementInfo;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_archievementInfo;
+ (const void *)coverUrl;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_coverUrl;
+ (const void *)coverEntraceFlag;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_coverEntraceFlag;
+ (const void *)bindInfoList;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_bindInfoList;
+ (const void *)menu;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_menu;
+ (const void *)attrStatus;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_attrStatus;
+ (const void *)userType;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_userType;
+ (const void *)additionalFlag;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_additionalFlag;
+ (const void *)userFlag;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_userFlag;
+ (const void *)innerModel;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_innerModel;
+ (const void *)contactInfo;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_contactInfo;
+ (void)__wcdb_column_constraint_36:(void *)arg1;
+ (void)__wcdb_index_37:(void *)arg1;
+ (void)__wcdb_index_38:(void *)arg1;
+ (id)finderContact:(id)arg1;
+ (id)finderContactWithFansContact:(id)arg1;
+ (BOOL)isFinderUsername:(id)arg1;
+ (id)finderContactWithWXContact:(id)arg1;
- (id)archivedWCTValue;
- (void)setNotShowLocation;
- (void)setShowLocationWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (BOOL)isShowLocation;
- (void)setNotShowSex;
- (void)setShowSex:(long long)arg1;
- (BOOL)isShowSex;
- (id)sexStr;
- (id)locationStr;
- (BOOL)hadPersionalOrEnterpriseCertified;
- (BOOL)hadPersonalOrEnterpriseCertifiedForMultiIdentity;
- (BOOL)isLongVideoOpen;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 hasPurchaseStateChanged:(BOOL)arg2;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(BOOL)arg2 noticeId:(id)arg3;
- (id)searchToNormalContact;
- (id)searchToNormalDisplayNickName;
- (unsigned long long)nextFollowAction;
- (id)getPBPropertyTable;
- (id)userInfo;
- (id)innerModel;
- (void)setUserFlag:(unsigned long long)arg1;
- (id)username;
- (id)bizInfo;
- (id)wecomInfo;
- (id)profileBizInfo;
- (id)profileBizHeadImgUrl;
- (id)profileBizNickname;
- (id)sticker;
- (id)bizUsername;
- (void)setNickname:(id)arg1;
- (id)nickname;
- (id)bindedIdentityHeadUrl;
- (id)bindedIdentityNickname;
- (id)bindedIdentityAuthInfo;
- (unsigned long long)bindedIdentityFollowState;
- (BOOL)isMultiIdentityFollowState;
- (id)multiIdentityHeadUrl;
- (id)multiIdentityNickname;
- (id)multiIdentityAuthInfo;
- (unsigned long long)multiIdentityFollowState;
- (void)setHeadURL:(id)arg1;
- (id)headURL;
- (void)setLiveNoticeInfo:(id)arg1;
- (id)contactClubInfo;
- (BOOL)allowModifyCover;
- (BOOL)hasSignature;
- (BOOL)hadCertified;
- (BOOL)hasCoverImg;
- (BOOL)hasGuarantor;
- (BOOL)isClubContact;
- (BOOL)isNotExistContact;
- (BOOL)isClubMasterContact;
- (BOOL)isWxContact;
- (BOOL)hasRealName;
- (BOOL)hasDiffWith:(id)arg1;
- (BOOL)shouldShowOriginalEntry;
- (BOOL)isContactNormal;
- (BOOL)isContactBlocked;
- (BOOL)isContactSilent;
- (BOOL)isEnterpriseContact;
- (BOOL)showBrandIdentity;
- (BOOL)isBrandContact;
- (BOOL)isDeprecatedBrandContact;
- (BOOL)isNoIdentityContact;
- (id)getBrandParams;
- (BOOL)canShowBrandIdentitySwitch;
- (BOOL)disableBrandIdentitySwitch;
- (BOOL)isFollowState;
- (BOOL)isPrivateAccount;
- (BOOL)isBlacked;
- (BOOL)isHasLiveLottery;
- (BOOL)isHiddenMentionedFeed;
- (void)setIsHiddenMentionedFeed:(BOOL)arg1;
- (BOOL)isFinderShowAtWxProfile;
- (void)setIsFinderShowAtWxProfile:(BOOL)arg1;
- (BOOL)isChangeToBrandAccount;
- (void)setIsChangeToBrandAccount:(BOOL)arg1;
- (BOOL)shieldFeeds;
- (void)setShieldFeeds:(BOOL)arg1;
- (id)description;
- (id)debugDescription;
- (id)genFinderContact;
- (void)fillToWxContact:(id)arg1;
- (id)convertToWxContact;
- (BOOL)hasNewsFeedPostEntry;
- (BOOL)shouldShowRewardOriginal;
- (BOOL)hasJoinRewardOriginal;
- (BOOL)hasOriginalStatementEntry;
- (BOOL)enablePostShortTitle;
- (BOOL)originalFunctionIsBanner;
- (BOOL)enablePostTencentVideoLink;
- (BOOL)isFemale;
- (BOOL)isMale;
- (BOOL)isForbidReproduceByMusic;
- (void)updateContactForbidReproduceByMusic:(BOOL)arg1;
- (BOOL)isEnableMJRefContent;
- (void)updateContactForbidReproduceByMJ:(BOOL)arg1;
- (void)updateContactForbiddenMiniAppReference:(BOOL)arg1;
- (BOOL)isShowLiveDataAtProfile;
- (void)updateContactShowLiveDataAtProfile:(BOOL)arg1;
- (BOOL)enablePostWithAttachShopInfo;
- (BOOL)enableCommentPostWithShopInfo;
- (BOOL)extractPOIInfoFromAssetPermissionIsOn;
- (void)updateExtractPOIInfoFromAssetPermission:(BOOL)arg1;
- (BOOL)postWithAttachShopIsSpam;
- (BOOL)forbidAllNotifyMentionCountShow;
- (BOOL)isMasterContact;
- (BOOL)isAudienceMute;
- (void)setIsAudienceMute:(BOOL)arg1;
- (BOOL)isAnonymousFollow;
- (BOOL)isFinderContact;
- (void)setUsername:(id)arg1;
- (unsigned long long)followState;
- (void)setFollowState:(unsigned long long)arg1;
- (unsigned long long)isFollowBrand;
- (void)setIsFollowBrand:(unsigned long long)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (unsigned int)followTime;
- (void)setFollowTime:(unsigned int)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)coverImageURL;
- (void)setCoverImageURL:(id)arg1;
- (id)livingDefaultCoverImageURL;
- (void)setLivingDefaultCoverImageURL:(id)arg1;
- (unsigned long long)spamStatus;
- (void)setSpamStatus:(unsigned long long)arg1;
- (unsigned int)cacheTime;
- (void)setCacheTime:(unsigned int)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (int)extFlag;
- (void)setExtFlag:(int)arg1;
- (id)fansid;
- (void)setFansid:(id)arg1;
- (BOOL)fansIsSelf;
- (void)setFansIsSelf:(BOOL)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned long long)blacklistIdentityFlag;
- (void)setBlacklistIdentityFlag:(unsigned long long)arg1;
- (unsigned long long)mentionUserFromType;
- (void)setMentionUserFromType:(unsigned long long)arg1;
- (BOOL)isLongVideoOpen;
- (id)msgInfo;
- (void)setMsgInfo:(id)arg1;
- (unsigned long long)liveStatus;
- (void)setLiveStatus:(unsigned long long)arg1;
- (unsigned long long)originalFlag;
- (void)setOriginalFlag:(unsigned long long)arg1;
- (BOOL)showOriginalEntry;
- (void)setShowOriginalEntry:(BOOL)arg1;
- (id)liveNoticeInfo;
- (unsigned long long)friendFollowCount;
- (void)setFriendFollowCount:(unsigned long long)arg1;
- (unsigned long long)fansCount;
- (void)setFansCount:(unsigned long long)arg1;
- (unsigned long long)feedCount;
- (void)setFeedCount:(unsigned long long)arg1;
- (id)liveSwitchInfo;
- (void)setLiveSwitchInfo:(id)arg1;
- (id)wxUsernameV5;
- (void)setWxUsernameV5:(id)arg1;
- (id)accountJumpInfo;
- (void)setAccountJumpInfo:(id)arg1;
- (unsigned long long)userFlag;
- (unsigned long long)oneTimeFlag;
- (void)setOneTimeFlag:(unsigned long long)arg1;
- (id)relationTag;
- (void)setRelationTag:(id)arg1;
- (int)userMode;
- (void)setUserMode:(int)arg1;
- (id)bindInfoList;
- (void)setBindInfoList:(id)arg1;
- (id)guestInfo;
- (void)setGuestInfo:(id)arg1;
- (id)finderHeadUrl;
- (void)setFinderHeadUrl:(id)arg1;
- (id)finderNickname;
- (void)setFinderNickname:(id)arg1;
- (id)archievementInfo;
- (void)setArchievementInfo:(id)arg1;
- (id)menu;
- (void)setMenu:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (int)coverEntraceFlag;
- (void)setCoverEntraceFlag:(int)arg1;
- (int)attrStatus;
- (void)setAttrStatus:(int)arg1;
- (id)livingDataItem;
- (void)setLivingDataItem:(id)arg1;
- (BOOL)isAdultForGameLiveJoinTeam;
- (void)setIsAdultForGameLiveJoinTeam:(BOOL)arg1;
- (unsigned long long)userType;
- (void)setUserType:(unsigned long long)arg1;
- (long long)additionalFlag;
- (void)setAdditionalFlag:(long long)arg1;
- (id)contactInfo;
- (void)setContactInfo:(id)arg1;
- (void)setInnerModel:(id)arg1;
- (void).cxx_destruct;
@end
