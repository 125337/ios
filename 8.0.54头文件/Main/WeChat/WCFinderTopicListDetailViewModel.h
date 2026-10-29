@interface WCFinderTopicListDetailViewModel : NSObject <WCFinderDataItemExt, WCFinderPostDataItemExt>
{
    BOOL _isPinnedStateChanged; // +0x8
    BOOL _listForceShowRingtoneGuide; // +0x9
    BOOL _listJumpCarouselHighPriorty; // +0xa
    BOOL _queryContinueFlag; // +0xb
    int _topicType; // +0xc
    int _tabType; // +0x10
    int _innerTabType; // +0x14
    int _fromType; // +0x18
    id <WCFinderTopicListDetailViewModelDelegate> _delegate; // +0x20
    unsigned long long _refreshTime; // +0x28
    FinderTopicBgmInfo * _bgmInfo; // +0x30
    NSMutableArray * _allSearchDataItems; // +0x38
    WCFinderTopicInfo * _topicInfo; // +0x40
    NSString * _refObjectid; // +0x48
    unsigned long long _eventTopicId; // +0x50
    NSData * _lastBuffer; // +0x58
    NSString * _latestQueryText; // +0x60
    NSString * _latestRequestID; // +0x68
    NSString * _latitude; // +0x70
    NSString * _longitude; // +0x78
    WCFinderTopicInfo * _poiTopicRecommend; // +0x80
    WCFinderSectionInfo * _sectionInfo; // +0x88
    NSData * _byPassInfo; // +0x90
}
+ (id)initWithTopicType:(int)arg1 lastBuffer:(id)arg2 latestRequestID:(id)arg3 queryText:(id)arg4 queryContinueFlag:(BOOL)arg5 dataSources:(id)arg6 latitude:(id)arg7 longitude:(id)arg8 refObjectid:(id)arg9 tabType:(int)arg10 innerTabType:(int)arg11 fromType:(int)arg12 poiTopicRecommend:(id)arg13 sectionInfo:(id)arg14 bgmInfo:(id)arg15 eventTopicId:(unsigned long long)arg16 byPassInfo:(id)arg17 listForceShowRingtoneGuide:(BOOL)arg18 listJumpCarouselHighPriorty:(BOOL)arg19;
+ (unsigned long long)getReportMusicTypeWithBgmInfo:(id)arg1 topicType:(int)arg2;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (id)searchDataItemAtSection:(long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (void)removeEventFeedWithTid:(id)arg1;
- (void)changeEventFeedPinToTopStateWithTid:(id)arg1 pinned:(BOOL)arg2;
- (void)onQueryNextPageDataItems;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (void)resetSearchStatus;
- (long long)contentIndexOfTid:(id)arg1;
- (long long)numberOfSection;
- (int)feedViewControllerScene;
- (void)onTopicFinderDataItemDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (id)allSearchDataItems;
- (void)setAllSearchDataItems:(id)arg1;
- (id)topicInfo;
- (void)setTopicInfo:(id)arg1;
- (BOOL)isPinnedStateChanged;
- (void)setIsPinnedStateChanged:(BOOL)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (BOOL)listForceShowRingtoneGuide;
- (void)setListForceShowRingtoneGuide:(BOOL)arg1;
- (BOOL)listJumpCarouselHighPriorty;
- (void)setListJumpCarouselHighPriorty:(BOOL)arg1;
- (BOOL)queryContinueFlag;
- (void)setQueryContinueFlag:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (id)latestRequestID;
- (void)setLatestRequestID:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)innerTabType;
- (void)setInnerTabType:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (id)poiTopicRecommend;
- (void)setPoiTopicRecommend:(id)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end

