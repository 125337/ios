@interface WCFinderMoreLiveTabInfoDataModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _hasFetchData; // +0x9
    BOOL _isFetchingData; // +0xa
    BOOL _isFetchingFollowDataFinish; // +0xb
    BOOL _isStartFetchingFollowData; // +0xc
    BOOL _isFetchingFollowData; // +0xd
    BOOL _hasEndLiveNeedRefresh; // +0xe
    unsigned long long _type; // +0x10
    WCFinderLiveTabInfo * _tabInfo; // +0x18
    NSData * _lastBuffer; // +0x20
    NSMutableArray * _sectionInfos; // +0x28
    WCFinderBaseCgi * _requestCgi; // +0x30
    NSMutableArray * _followFoldTidArray; // +0x38
    WCFinderDataItem * _fetchRelatedListItem; // +0x40
    WCFinderBaseCgi * _fetchRelatedListCgi; // +0x48
    NSArray * _fetchRelatedList; // +0x50
    NSMutableArray * _fetchRelatedTidList; // +0x58
    unsigned long long _refreshInterval; // +0x60
}
- (id)initWithTabInfo:(id)arg1 type:(unsigned long long)arg2;
- (void)resetModelState;
- (id)sectionInfos;
- (id)followFoldTidArray;
- (id)fetchRelatedTidList;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)tabInfo;
- (void)setTabInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void)setSectionInfos:(id)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (BOOL)isFetchingFollowDataFinish;
- (void)setIsFetchingFollowDataFinish:(BOOL)arg1;
- (BOOL)isStartFetchingFollowData;
- (void)setIsStartFetchingFollowData:(BOOL)arg1;
- (id)requestCgi;
- (void)setRequestCgi:(id)arg1;
- (void)setFollowFoldTidArray:(id)arg1;
- (BOOL)isFetchingFollowData;
- (void)setIsFetchingFollowData:(BOOL)arg1;
- (id)fetchRelatedListItem;
- (void)setFetchRelatedListItem:(id)arg1;
- (id)fetchRelatedListCgi;
- (void)setFetchRelatedListCgi:(id)arg1;
- (id)fetchRelatedList;
- (void)setFetchRelatedList:(id)arg1;
- (void)setFetchRelatedTidList:(id)arg1;
- (unsigned long long)refreshInterval;
- (void)setRefreshInterval:(unsigned long long)arg1;
- (BOOL)hasEndLiveNeedRefresh;
- (void)setHasEndLiveNeedRefresh:(BOOL)arg1;
- (void).cxx_destruct;
@end

