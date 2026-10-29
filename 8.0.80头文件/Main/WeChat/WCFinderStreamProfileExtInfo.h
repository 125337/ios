@interface WCFinderStreamProfileExtInfo : NSObject <WCTTableCoding>
{
    BOOL _logoutLock; // +0x8
    BOOL _logoutDone; // +0x9
    BOOL _showMentionedTab; // +0xa
    BOOL _showStricker; // +0xb
    BOOL _hasAcctRecommend; // +0xc
    NSString * _finderUsername; // +0x10
    WCFinderStreamProfileExtInfoTagArray * _userTags; // +0x18
    unsigned long long _fansCount; // +0x20
    unsigned long long _friendFollowCount; // +0x28
    double _cacheTime; // +0x30
    FinderWxAppInfo * _storeAppInfo; // +0x38
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x40
    FinderLiveNoticeListInfo * _liveNoticeList; // +0x48
    WCFinderTopicInfoArray * _topics; // +0x50
    WCFinderMiniAppInfoArray * _miniAppInfos; // +0x58
    WCFinderBrandInfoArray * _brandInfos; // +0x60
    FinderUserPagePoi * _poiInfo; // +0x68
    FinderEventInfo * _eventInfo; // +0x70
    NSString * _logoutUrl; // +0x78
    long long _showTabCacheFlag; // +0x80
    WCFinderBGCover * _cover; // +0x88
    unsigned long long _totalLiveCount; // +0x90
    unsigned long long _totalAudienceCount; // +0x98
    unsigned long long _recentLiveCount; // +0xa0
    WCFinderIpRegionInfo * _ipRegionInfo; // +0xa8
    NSMutableSet * _displayTabs; // +0xb0
    NSMutableSet * _hiddenTabs; // +0xb8
    WCFinderStreamProfileExtInfoInnerModel * _innerModel; // +0xc0
    NSString * _exportUsername; // +0xc8
    NSArray * _feedPlayHistory; // +0xd0
    FinderJumpInfoArray * _jumpInfoList; // +0xd8
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_finderUsername;
+ (const void *)fansCount;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_fansCount;
+ (const void *)friendFollowCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_friendFollowCount;
+ (const void *)userTags;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_userTags;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)storeAppInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_storeAppInfo;
+ (const void *)liveNoticeInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_liveNoticeInfo;
+ (const void *)topics;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_topics;
+ (const void *)brandInfos;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_brandInfos;
+ (const void *)eventInfo;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_eventInfo;
+ (const void *)miniAppInfos;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_miniAppInfos;
+ (const void *)logoutLock;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_logoutLock;
+ (const void *)logoutDone;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_logoutDone;
+ (const void *)logoutUrl;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_logoutUrl;
+ (const void *)showMentionedTab;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_showMentionedTab;
+ (const void *)poiInfo;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_poiInfo;
+ (const void *)showStricker;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_showStricker;
+ (const void *)cover;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_cover;
+ (const void *)jumpInfoList;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_jumpInfoList;
+ (const void *)liveNoticeList;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_liveNoticeList;
+ (const void *)totalLiveCount;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_totalLiveCount;
+ (const void *)totalAudienceCount;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_totalAudienceCount;
+ (const void *)recentLiveCount;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_recentLiveCount;
+ (const void *)ipRegionInfo;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_ipRegionInfo;
+ (const void *)innerModel;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_innerModel;
+ (const void *)showTabCacheFlag;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_showTabCacheFlag;
+ (const void *)displayTabs;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_displayTabs;
+ (const void *)hiddenTabs;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_hiddenTabs;
+ (const void *)exportUsername;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_exportUsername;
+ (const void *)feedPlayHistory;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_feedPlayHistory;
+ (void)__wcdb_column_constraint_30:(void *)arg1;
+ (void)__wcdb_index_31:(void *)arg1;
+ (void)__wcdb_index_32:(void *)arg1;
- (id)initWithUsername:(id)arg1;
- (void)updateTopics:(id)arg1 collectionInfo:(id)arg2;
- (void)SetBrandInfos:(id)arg1;
- (id)GetBrandInfos;
- (id)GetMiniAppInfos;
- (void)SetMiniAppInfos:(id)arg1;
- (id)jumpInfos;
- (void)setJumpInfos:(id)arg1;
- (id)innerModel;
- (id)description;
- (void)updateFromUserPageHeader:(id)arg1 isAuthor:(BOOL)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)userTags;
- (void)setUserTags:(id)arg1;
- (unsigned long long)fansCount;
- (void)setFansCount:(unsigned long long)arg1;
- (unsigned long long)friendFollowCount;
- (void)setFriendFollowCount:(unsigned long long)arg1;
- (double)cacheTime;
- (void)setCacheTime:(double)arg1;
- (id)storeAppInfo;
- (void)setStoreAppInfo:(id)arg1;
- (id)liveNoticeInfo;
- (void)setLiveNoticeInfo:(id)arg1;
- (id)liveNoticeList;
- (void)setLiveNoticeList:(id)arg1;
- (id)topics;
- (void)setTopics:(id)arg1;
- (id)miniAppInfos;
- (void)setMiniAppInfos:(id)arg1;
- (id)brandInfos;
- (void)setBrandInfos:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (BOOL)logoutLock;
- (void)setLogoutLock:(BOOL)arg1;
- (BOOL)logoutDone;
- (void)setLogoutDone:(BOOL)arg1;
- (id)logoutUrl;
- (void)setLogoutUrl:(id)arg1;
- (BOOL)showMentionedTab;
- (void)setShowMentionedTab:(BOOL)arg1;
- (BOOL)showStricker;
- (void)setShowStricker:(BOOL)arg1;
- (long long)showTabCacheFlag;
- (void)setShowTabCacheFlag:(long long)arg1;
- (id)cover;
- (void)setCover:(id)arg1;
- (unsigned long long)totalLiveCount;
- (void)setTotalLiveCount:(unsigned long long)arg1;
- (unsigned long long)totalAudienceCount;
- (void)setTotalAudienceCount:(unsigned long long)arg1;
- (unsigned long long)recentLiveCount;
- (void)setRecentLiveCount:(unsigned long long)arg1;
- (BOOL)hasAcctRecommend;
- (void)setHasAcctRecommend:(BOOL)arg1;
- (id)ipRegionInfo;
- (void)setIpRegionInfo:(id)arg1;
- (id)displayTabs;
- (void)setDisplayTabs:(id)arg1;
- (id)hiddenTabs;
- (void)setHiddenTabs:(id)arg1;
- (void)setInnerModel:(id)arg1;
- (id)exportUsername;
- (void)setExportUsername:(id)arg1;
- (id)feedPlayHistory;
- (void)setFeedPlayHistory:(id)arg1;
- (id)jumpInfoList;
- (void)setJumpInfoList:(id)arg1;
- (void).cxx_destruct;
@end
