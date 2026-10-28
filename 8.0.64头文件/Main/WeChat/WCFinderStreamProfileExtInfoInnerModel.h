@interface WCFinderStreamProfileExtInfoInnerModel : NSObject <PBCoding, WCTColumnCoding>
{
    FinderMcnInfo * _mcnInfo; // +0x8
    WCFinderContactServiceMenuMutableArray * _serviceMenu; // +0x10
    FinderCollectionListInfo * _collectionInfo; // +0x18
    WCFinderIpRegionInfo * _attrRegionInfo; // +0x20
    FinderClubInfo * _clubInfo; // +0x28
    FinderOriginal * _originalInfo; // +0x30
    FinderJumpInfo * _storeJumpInfo; // +0x38
    WCFinderProfileMemberShipInfo * _memberShipInfo; // +0x40
    WCFinderProfileOverviewCache * _overviewCache; // +0x48
    FinderMusicStatisticsInfo * _statisticsInfo; // +0x50
    FinderProfileBanner * _warningBanner; // +0x58
    FinderUserPageSectionQAInfo * _qaInfo; // +0x60
    double _allTabQASectionCacheHeight; // +0x68
    double _allTabQASectionCacheWidth; // +0x70
    NSMutableArray * _tabList; // +0x78
    NSMutableArray * _authorTabList; // +0x80
    FinderMusicRadio * _musicRadio; // +0x88
    unsigned long long _extFlag; // +0x90
    FinderMileStone * _milestone; // +0x98
    FinderFeedBriefInfo * _briefInfo; // +0xa0
    WCFinderProfilePostTipsInfo * _postTipsInfo; // +0xa8
    FinderUserPageSignatureFoldInfo * _signatureFoldInfo; // +0xb0
    FinderFollowedNicknameUpdateInfo * _followedNicknameInfo; // +0xb8
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0xc0
    long long _guardNowMode; // +0xc8
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
- (void).cxx_destruct;
@end
