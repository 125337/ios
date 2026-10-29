@interface WCFinderStreamProfileExtInfoInnerModel : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _cleanDataWhenEnter; // +0x8
    BOOL _showHotSortOptionFlag; // +0x9
    FinderMcnInfo * _mcnInfo; // +0x10
    WCFinderContactServiceMenuMutableArray * _serviceMenu; // +0x18
    FinderCollectionListInfo * _collectionInfo; // +0x20
    WCFinderIpRegionInfo * _attrRegionInfo; // +0x28
    FinderClubInfo * _clubInfo; // +0x30
    FinderOriginal * _originalInfo; // +0x38
    FinderJumpInfo * _storeJumpInfo; // +0x40
    WCFinderProfileMemberShipInfo * _memberShipInfo; // +0x48
    WCFinderProfileOverviewCache * _overviewCache; // +0x50
    FinderMusicStatisticsInfo * _statisticsInfo; // +0x58
    FinderProfileBanner * _warningBanner; // +0x60
    FinderUserPageSectionQAInfo * _qaInfo; // +0x68
    double _allTabQASectionCacheHeight; // +0x70
    double _allTabQASectionCacheWidth; // +0x78
    NSMutableArray * _tabList; // +0x80
    NSMutableArray * _authorTabList; // +0x88
    FinderMusicRadio * _musicRadio; // +0x90
    unsigned long long _extFlag; // +0x98
    FinderMileStone * _milestone; // +0xa0
    FinderFeedBriefInfo * _briefInfo; // +0xa8
    WCFinderProfilePostTipsInfo * _postTipsInfo; // +0xb0
    FinderUserPageSignatureFoldInfo * _signatureFoldInfo; // +0xb8
    FinderFollowedNicknameUpdateInfo * _followedNicknameInfo; // +0xc0
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0xc8
    long long _guardNowMode; // +0xd0
    FinderUserPageRecentUpdatesInfo * _recentUpdateInfo; // +0xd8
    FinderProfileData * _authorData; // +0xe0
    FinderBlackListInfo * _blacklistInfo; // +0xe8
}
+ (void)PBArrayAdd_mcnInfo;
+ (void)PBArrayAdd_serviceMenu;
+ (void)PBArrayAdd_collectionInfo;
+ (void)PBArrayAdd_attrRegionInfo;
+ (void)PBArrayAdd_clubInfo;
+ (void)PBArrayAdd_storeJumpInfo;
+ (void)PBArrayAdd_memberShipInfo;
+ (void)PBArrayAdd_overviewCache;
+ (void)PBArrayAdd_originalInfo;
+ (void)PBArrayAdd_statisticsInfo;
+ (void)PBArrayAdd_warningBanner;
+ (void)PBArrayAdd_qaInfo;
+ (void)PBArrayAdd_allTabQASectionCacheHeight;
+ (void)PBArrayAdd_tabList;
+ (void)PBArrayAdd_musicRadio;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_milestone;
+ (void)PBArrayAdd_briefInfo;
+ (void)PBArrayAdd_postTipsInfo;
+ (void)PBArrayAdd_authorTabList;
+ (void)PBArrayAdd_signatureFoldInfo;
+ (void)PBArrayAdd_followedNicknameInfo;
+ (void)PBArrayAdd_guardNowMode;
+ (void)PBArrayAdd_recentUpdateInfo;
+ (void)PBArrayAdd_authorData;
+ (void)PBArrayAdd_cleanDataWhenEnter;
+ (void)PBArrayAdd_showHotSortOptionFlag;
+ (void)PBArrayAdd_blacklistInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void)updateFromUserPageResponse:(id)arg1 isAuthor:(BOOL)arg2;
- (id)mcnInfo;
- (void)setMcnInfo:(id)arg1;
- (id)serviceMenu;
- (void)setServiceMenu:(id)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)attrRegionInfo;
- (void)setAttrRegionInfo:(id)arg1;
- (id)clubInfo;
- (void)setClubInfo:(id)arg1;
- (id)originalInfo;
- (void)setOriginalInfo:(id)arg1;
- (id)storeJumpInfo;
- (void)setStoreJumpInfo:(id)arg1;
- (id)memberShipInfo;
- (void)setMemberShipInfo:(id)arg1;
- (id)overviewCache;
- (void)setOverviewCache:(id)arg1;
- (id)statisticsInfo;
- (void)setStatisticsInfo:(id)arg1;
- (id)warningBanner;
- (void)setWarningBanner:(id)arg1;
- (id)qaInfo;
- (void)setQaInfo:(id)arg1;
- (double)allTabQASectionCacheHeight;
- (void)setAllTabQASectionCacheHeight:(double)arg1;
- (double)allTabQASectionCacheWidth;
- (void)setAllTabQASectionCacheWidth:(double)arg1;
- (id)tabList;
- (void)setTabList:(id)arg1;
- (id)authorTabList;
- (void)setAuthorTabList:(id)arg1;
- (id)musicRadio;
- (void)setMusicRadio:(id)arg1;
- (unsigned long long)extFlag;
- (void)setExtFlag:(unsigned long long)arg1;
- (id)milestone;
- (void)setMilestone:(id)arg1;
- (id)briefInfo;
- (void)setBriefInfo:(id)arg1;
- (id)postTipsInfo;
- (void)setPostTipsInfo:(id)arg1;
- (id)signatureFoldInfo;
- (void)setSignatureFoldInfo:(id)arg1;
- (id)followedNicknameInfo;
- (void)setFollowedNicknameInfo:(id)arg1;
- (id)nextLiveNoticeInfo;
- (void)setNextLiveNoticeInfo:(id)arg1;
- (long long)guardNowMode;
- (void)setGuardNowMode:(long long)arg1;
- (id)recentUpdateInfo;
- (void)setRecentUpdateInfo:(id)arg1;
- (id)authorData;
- (void)setAuthorData:(id)arg1;
- (BOOL)cleanDataWhenEnter;
- (void)setCleanDataWhenEnter:(BOOL)arg1;
- (BOOL)showHotSortOptionFlag;
- (void)setShowHotSortOptionFlag:(BOOL)arg1;
- (id)blacklistInfo;
- (void)setBlacklistInfo:(id)arg1;
- (void).cxx_destruct;
@end
