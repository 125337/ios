@interface WCFinderPOIRelatedStreamViewModel : NSObject
{
    BOOL _stopFetchNextPage; // +0x8
    BOOL _hasFetchEnterData; // +0x9
    BOOL _isDataEmpty; // +0xa
    BOOL _onlyShowPoiName; // +0xb
    BOOL _nearbyFlag; // +0xc
    unsigned int _totalFeedsCount; // +0x10
    int _addressSubType; // +0x14
    id <WCFinderPOIRelatedStreamViewModelDelegate> _delegate; // +0x18
    WCFinderPOIParamsModel * _poiParamsModel; // +0x20
    FinderPoiStreamTabList * _tabList; // +0x28
    NSMutableArray * _tabInfoArray; // +0x30
    NSData * _lastBuffer; // +0x38
    unsigned long long _preFetchNextPageIndex; // +0x40
    unsigned long long _refreshTime; // +0x48
    FinderPoiStreamResponse_PoiPrepare * _poiPrepare; // +0x50
    long long _friendLikeCount; // +0x58
    unsigned long long _defaultIndex; // +0x60
    unsigned long long _defaultFilterIndex; // +0x68
    FinderPoiStreamNearbyInfo * _nearbyInfo; // +0x70
    unsigned long long _prefetchCount; // +0x78
    NSMutableDictionary * _dataArrayDict; // +0x80
    SnsPoiDetail * _poiDetail; // +0x88
    WCFinderContact * _bindContact; // +0x90
    NSString * _noticeWording; // +0x98
}
- (id)initWithPOIParamsModel:(id)arg1;
- (id)tabInfoAtIndex:(unsigned long long)arg1;
- (id)dataArrayAtIndex:(unsigned long long)arg1 filterIndex:(unsigned long long)arg2;
- (id)enterReportID;
- (void)requestPoiTabList;
- (unsigned long long)indexOfTabId:(int)arg1;
- (unsigned long long)filterIndexOfType:(unsigned int)arg1;
- (id)getHeaderSnsPoiDetail;
- (BOOL)isSnSPoiDetailVaild;
- (id)poiName;
- (id)getPoiInfo;
- (id)getChatName;
- (void)setPoiDetail:(id)arg1;
- (id)getNoticeWording;
- (id)getCurBindContact;
- (id)shareItemWithDataItem:(id)arg1;
- (id)dataArrayDict;
- (id)poiDetailReport;
- (id)poiInfoFor21875;
- (id)finderUsernameReport;
- (id)poiIDReport;
- (id)copyPoiParamsIfNeededForTabIndex:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)poiParamsModel;
- (void)setPoiParamsModel:(id)arg1;
- (id)tabList;
- (void)setTabList:(id)arg1;
- (id)tabInfoArray;
- (void)setTabInfoArray:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)stopFetchNextPage;
- (void)setStopFetchNextPage:(BOOL)arg1;
- (BOOL)hasFetchEnterData;
- (void)setHasFetchEnterData:(BOOL)arg1;
- (unsigned long long)preFetchNextPageIndex;
- (void)setPreFetchNextPageIndex:(unsigned long long)arg1;
- (BOOL)isDataEmpty;
- (void)setIsDataEmpty:(BOOL)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (BOOL)onlyShowPoiName;
- (void)setOnlyShowPoiName:(BOOL)arg1;
- (unsigned int)totalFeedsCount;
- (void)setTotalFeedsCount:(unsigned int)arg1;
- (id)poiPrepare;
- (void)setPoiPrepare:(id)arg1;
- (long long)friendLikeCount;
- (void)setFriendLikeCount:(long long)arg1;
- (unsigned long long)defaultIndex;
- (void)setDefaultIndex:(unsigned long long)arg1;
- (unsigned long long)defaultFilterIndex;
- (void)setDefaultFilterIndex:(unsigned long long)arg1;
- (int)addressSubType;
- (void)setAddressSubType:(int)arg1;
- (BOOL)nearbyFlag;
- (void)setNearbyFlag:(BOOL)arg1;
- (id)nearbyInfo;
- (void)setNearbyInfo:(id)arg1;
- (unsigned long long)prefetchCount;
- (void)setPrefetchCount:(unsigned long long)arg1;
- (void)setDataArrayDict:(id)arg1;
- (id)poiDetail;
- (id)bindContact;
- (void)setBindContact:(id)arg1;
- (id)noticeWording;
- (void)setNoticeWording:(id)arg1;
- (void).cxx_destruct;
@end
