@interface WCFinderTopicListViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCFinderPostDataItemExt, WCFinderTopicDataKeyExt, WCFinderDataItemExt>
{
    BOOL _queryContinueFlag; // +0x8
    BOOL _disabledFlag; // +0x9
    int _topicType; // +0xc
    int _tabType; // +0x10
    int _fromType; // +0x14
    id <WCFinderTopicListViewModelDelegate> _delegate; // +0x18
    NSMutableArray * _poiTopicRecommendStringArray; // +0x20
    NSMutableArray * _poiTopicRecommendItemArray; // +0x28
    NSString * _topicDetailLocation; // +0x30
    WCFinderTopicInfo * _topicInfo; // +0x38
    unsigned long long _refreshTime; // +0x40
    FinderTopicBgmInfo * _bgmInfo; // +0x48
    NSString * _encryptedTopicId; // +0x50
    double _menuExpTime; // +0x58
    NSString * _latestQueryText; // +0x60
    NSString * _latestRequestID; // +0x68
    NSMutableArray * _contentVMArray; // +0x70
    NSData * _lastBuffer; // +0x78
    unsigned long long _topicTotalCount; // +0x80
    NSString * _latitude; // +0x88
    NSString * _longitude; // +0x90
    NSString * _refObjectid; // +0x98
    WCFinderTopicInfo * _poiTopicRecommend; // +0xa0
    NSMutableSet * _poiTopicRecommendItemsSet; // +0xa8
    ForwardMessageLogicController * _forwardLogic; // +0xb0
    FinderLocation * _location; // +0xb8
    WCFinderSectionInfo * _sectionInfo; // +0xc0
    unsigned long long _eventTopicId; // +0xc8
    unsigned long long _patMusicPermission; // +0xd0
    NSData * _byPassInfo; // +0xd8
}
- (id)init;
- (id)poiTopicRecommendItemsSet;
- (void)setTopicInfo:(id)arg1;
- (void)loadCacheResponseWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 refObjectid:(id)arg6 cacheResponse:(id)arg7 cacheDataItems:(id)arg8 sectionInfo:(id)arg9 tabType:(int)arg10 fromType:(int)arg11 byPassInfo:(id)arg12;
- (void)getTopicListWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 refObjectid:(id)arg6 poiTopicRecommend:(id)arg7 eventTopicId:(unsigned long long)arg8 tabType:(int)arg9 fromType:(int)arg10 byPassInfo:(id)arg11;
- (void)fetchFirstPageData;
- (void)onQueryNextPageDataItem;
- (void)removeEventFeedWithTid:(id)arg1;
- (void)appendDataItems:(id)arg1;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (BOOL)isDataEmpty;
- (id)streamReportPageTag;
- (id)genTopicPageTagTitle;
- (id)generateSearchlistViewModel;
- (void)resetSearchStatus;
- (long long)dataItemSection;
- (unsigned long long)numsOfSection;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (long long)contentVMIndexWithTid:(id)arg1;
- (BOOL)isTopicDataItemSection:(unsigned long long)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (void)reportClickActionInfo:(id)arg1;
- (id)dataItemAtIndex:(unsigned long long)arg1;
- (id)getHeaderImageUrl;
- (unsigned long long)getTopicTotalCount;
- (unsigned long long)getTopicTotalWatchCount;
- (id)getTopicWordsTopicExt;
- (void)shareToFriend:(id)arg1;
- (void)shareToMoment:(id)arg1;
- (id)getPatMusicTitleWording;
- (id)getMusicLyricsWording;
- (id)getAntispamToastTips;
- (void)closeEvent;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (unsigned long long)getReportMusicType;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)getTopicsArray;
- (int)feedViewControllerScene;
- (id)getFirstContentVM;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)fakeInsertPostPatMusicDataItem:(id)arg1;
- (BOOL)hasTargetDataItem:(id)arg1;
- (void)fakeInsertPostEventDataItem:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)finderFeedOfTopicBeDeleteWithTid:(id)arg1;
- (void)finderTopicFeedOrderChanged:(unsigned long long)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)poiTopicRecommendStringArray;
- (void)setPoiTopicRecommendStringArray:(id)arg1;
- (id)poiTopicRecommendItemArray;
- (void)setPoiTopicRecommendItemArray:(id)arg1;
- (id)topicDetailLocation;
- (void)setTopicDetailLocation:(id)arg1;
- (id)topicInfo;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (id)encryptedTopicId;
- (void)setEncryptedTopicId:(id)arg1;
- (double)menuExpTime;
- (void)setMenuExpTime:(double)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (id)latestRequestID;
- (void)setLatestRequestID:(id)arg1;
- (BOOL)queryContinueFlag;
- (void)setQueryContinueFlag:(BOOL)arg1;
- (id)contentVMArray;
- (void)setContentVMArray:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)topicTotalCount;
- (void)setTopicTotalCount:(unsigned long long)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (id)poiTopicRecommend;
- (void)setPoiTopicRecommend:(id)arg1;
- (void)setPoiTopicRecommendItemsSet:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (unsigned long long)patMusicPermission;
- (void)setPatMusicPermission:(unsigned long long)arg1;
- (BOOL)disabledFlag;
- (void)setDisabledFlag:(BOOL)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end
