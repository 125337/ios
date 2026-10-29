@interface WCFinderStreamPrefetchRequestParams : NSObject
{
    BOOL _byRedDot; // +0x8
    BOOL _ignoreIntevalConf; // +0x9
    BOOL _hotTabNeedTopRefresh; // +0xa
    int _tabType; // +0xc
    int _refreshStatus; // +0x10
    NSData * _streamBuffer; // +0x18
    unsigned long long _objectID; // +0x20
    NSString * _nonceID; // +0x28
    NSData * _tabTipsByPassInfo; // +0x30
    NSString * _tabTipsPath; // +0x38
    NSString * _userName; // +0x40
    FinderSyncTipsShowInfo * _bubbleInfo; // +0x48
    NSArray * _otherTabUnreadCacheFeeds; // +0x50
    FinderSubTabItem * _subTabItem; // +0x58
}
+ (id)prefetchParamsFromStreamParams:(id)arg1;
- (id)init;
- (id)streamBuffer;
- (void)setStreamBuffer:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (BOOL)byRedDot;
- (void)setByRedDot:(BOOL)arg1;
- (BOOL)ignoreIntevalConf;
- (void)setIgnoreIntevalConf:(BOOL)arg1;
- (BOOL)hotTabNeedTopRefresh;
- (void)setHotTabNeedTopRefresh:(BOOL)arg1;
- (id)tabTipsByPassInfo;
- (void)setTabTipsByPassInfo:(id)arg1;
- (id)tabTipsPath;
- (void)setTabTipsPath:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)bubbleInfo;
- (void)setBubbleInfo:(id)arg1;
- (int)refreshStatus;
- (void)setRefreshStatus:(int)arg1;
- (id)otherTabUnreadCacheFeeds;
- (void)setOtherTabUnreadCacheFeeds:(id)arg1;
- (id)subTabItem;
- (void)setSubTabItem:(id)arg1;
- (void).cxx_destruct;
@end

