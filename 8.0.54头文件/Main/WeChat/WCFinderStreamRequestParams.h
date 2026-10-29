@interface WCFinderStreamRequestParams : NSObject
{
    BOOL _objectFeedIsNotTop; // +0x8
    BOOL _prefetchConsumedFlag; // +0x9
    BOOL _hotTabNeedTopRefresh; // +0xa
    BOOL _isByFindPage; // +0xb
    BOOL _dontCacheResultPage; // +0xc
    int _specialRequestScene; // +0x10
    unsigned int _enterProb; // +0x14
    FinderClientStatus * _clientStatus; // +0x18
    WCFinderLocationInfo * _location; // +0x20
    unsigned long long _objectID; // +0x28
    NSString * _nonceID; // +0x30
    FinderSyncTipsShowInfo * _bubbleInfo; // +0x38
    NSMutableArray * _stats; // +0x40
    NSString * _partialExposedObjectId; // +0x48
    NSMutableArray * _unreadItems; // +0x50
    NSArray * _unreadCacheTidArray; // +0x58
    NSString * _tabTipsUsername; // +0x60
    NSData * _rerankLastBuffer; // +0x68
    NSData * _tabTipsByPassInfo; // +0x70
    NSString * _tabTipsPath; // +0x78
    unsigned long long _guideBarObjectId; // +0x80
    WCFinderOpenTimelineParams * _openTLParams; // +0x88
    NSData * _cardBuffer; // +0x90
    NSMutableArray * _topObjects; // +0x98
    FinderCommByPass * _commByPass; // +0xa0
    WCFinderStreamEntranceReportModel * _entranceReportModel; // +0xa8
    NSString * _fluencyReportSceneKey; // +0xb0
    NSArray * _otherTabUnreadCacheFeeds; // +0xb8
    NSData * _hotTabLastBuff; // +0xc0
    NSArray * _addStatsFeedArray; // +0xc8
    NSString * _relateTid; // +0xd0
    NSString * _relateNonceId; // +0xd8
    unsigned long long _relateRequestScene; // +0xe0
    FinderSubTabItem * _subTabItem; // +0xe8
    WCFinderTipsShowEntranceExtInfo * _finderEntranceExtInfo; // +0xf0
    StreamBackupRequest * _backupRequest; // +0xf8
}
+ (id)genFinderUnreadItemsFromFinderDataItems:(id)arg1 tabType:(int)arg2 commentScene:(int)arg3;
- (id)init;
- (id)getFinderUnreadItemsWithTabType:(int)arg1 commentScene:(int)arg2;
- (id)unreadItems;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (BOOL)objectFeedIsNotTop;
- (void)setObjectFeedIsNotTop:(BOOL)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)bubbleInfo;
- (void)setBubbleInfo:(id)arg1;
- (id)stats;
- (void)setStats:(id)arg1;
- (id)partialExposedObjectId;
- (void)setPartialExposedObjectId:(id)arg1;
- (void)setUnreadItems:(id)arg1;
- (id)unreadCacheTidArray;
- (void)setUnreadCacheTidArray:(id)arg1;
- (int)specialRequestScene;
- (void)setSpecialRequestScene:(int)arg1;
- (id)tabTipsUsername;
- (void)setTabTipsUsername:(id)arg1;
- (BOOL)prefetchConsumedFlag;
- (void)setPrefetchConsumedFlag:(BOOL)arg1;
- (id)rerankLastBuffer;
- (void)setRerankLastBuffer:(id)arg1;
- (id)tabTipsByPassInfo;
- (void)setTabTipsByPassInfo:(id)arg1;
- (id)tabTipsPath;
- (void)setTabTipsPath:(id)arg1;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (id)openTLParams;
- (void)setOpenTLParams:(id)arg1;
- (unsigned int)enterProb;
- (void)setEnterProb:(unsigned int)arg1;
- (id)cardBuffer;
- (void)setCardBuffer:(id)arg1;
- (id)topObjects;
- (void)setTopObjects:(id)arg1;
- (id)commByPass;
- (void)setCommByPass:(id)arg1;
- (id)entranceReportModel;
- (void)setEntranceReportModel:(id)arg1;
- (id)fluencyReportSceneKey;
- (void)setFluencyReportSceneKey:(id)arg1;
- (id)otherTabUnreadCacheFeeds;
- (void)setOtherTabUnreadCacheFeeds:(id)arg1;
- (id)hotTabLastBuff;
- (void)setHotTabLastBuff:(id)arg1;
- (BOOL)hotTabNeedTopRefresh;
- (void)setHotTabNeedTopRefresh:(BOOL)arg1;
- (id)addStatsFeedArray;
- (void)setAddStatsFeedArray:(id)arg1;
- (BOOL)isByFindPage;
- (void)setIsByFindPage:(BOOL)arg1;
- (BOOL)dontCacheResultPage;
- (void)setDontCacheResultPage:(BOOL)arg1;
- (id)relateTid;
- (void)setRelateTid:(id)arg1;
- (id)relateNonceId;
- (void)setRelateNonceId:(id)arg1;
- (unsigned long long)relateRequestScene;
- (void)setRelateRequestScene:(unsigned long long)arg1;
- (id)subTabItem;
- (void)setSubTabItem:(id)arg1;
- (id)finderEntranceExtInfo;
- (void)setFinderEntranceExtInfo:(id)arg1;
- (id)backupRequest;
- (void)setBackupRequest:(id)arg1;
- (void).cxx_destruct;
@end

