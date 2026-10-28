@interface WCFinderStreamPrefetchRequestParams : NSObject
{
    BOOL _byRedDot; // +0x8
    BOOL _isByFindPage; // +0x9
    BOOL _ignoreIntevalConf; // +0xa
    BOOL _hotTabNeedTopRefresh; // +0xb
    int _tabType; // +0xc
    int _specialRequestScene; // +0x10
    int _refreshStatus; // +0x14
    NSData * _streamBuffer; // +0x18
    unsigned long long _objectID; // +0x20
    NSString * _nonceID; // +0x28
    NSString * _containerId; // +0x30
    NSData * _tabTipsByPassInfo; // +0x38
    NSString * _tabTipsPath; // +0x40
    NSString * _userName; // +0x48
    FinderSyncTipsShowInfo * _bubbleInfo; // +0x50
    NSArray * _otherTabUnreadCacheFeeds; // +0x58
    FinderSubTabItem * _subTabItem; // +0x60
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
- (id)containerId;
- (void)setContainerId:(id)arg1;
- (BOOL)byRedDot;
- (void)setByRedDot:(BOOL)arg1;
- (BOOL)isByFindPage;
- (void)setIsByFindPage:(BOOL)arg1;
- (int)specialRequestScene;
- (void)setSpecialRequestScene:(int)arg1;
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
