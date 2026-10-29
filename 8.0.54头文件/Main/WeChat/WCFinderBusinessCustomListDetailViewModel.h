@interface WCFinderBusinessCustomListDetailViewModel : NSObject
{
    BOOL _startFeedExist; // +0x8
    int _commentScene; // +0xc
    id <WCFinderBusinessCustomListDetailViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _businessArray; // +0x18
    NSMutableArray * _allSearchDataItems; // +0x20
    unsigned long long _refreshTime; // +0x28
    WCFinderCustomBusinessFeedIDModel * _startFeedIdModel; // +0x30
    NSMutableDictionary * _businessFeedDic; // +0x38
    WCFinderBaseCgi * _loadingNextUpCgi; // +0x40
    WCFinderBaseCgi * _loadingNextDownCgi; // +0x48
    id /* block */ _loadingNextDownBlock; // +0x50
    long long _batchFetchFeedsMaxCount; // +0x58
    long long _preFetchTopCount; // +0x60
    WCFinderGeneralJumpErrMsgModel * _errMsgModel; // +0x68
}
- (id)initWithCommentScene:(int)arg1;
- (BOOL)isUpContentFeed:(id)arg1;
- (unsigned long long)getStartFeedIndex;
- (void)appendBusinessModelArray:(id)arg1;
- (id)allSearchDataItems;
- (id)businessFeedDic;
- (id)businessArray;
- (BOOL)isNoMoreData;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (id)searchDataItemAtSection:(long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (long long)numberOfSection;
- (void)onQueryNextTopDataItems;
- (void)onPreFetchNextTopDataItems;
- (void)_onQueryTopDataItems:(unsigned long long)arg1 isPrefetch:(BOOL)arg2;
- (BOOL)upContinueFlag;
- (id)getTopDataItemsArray;
- (void)onQueryNextPageDataItems;
- (void)handleFirstFetchDataCgiFailErrCode:(int)arg1 baseErrMsg:(id)arg2;
- (void)onTopicFinderDataItemDelete:(id)arg1;
- (BOOL)isLoading;
- (unsigned long long)getRemainFeedSectionFromContentVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBusinessArray:(id)arg1;
- (void)setAllSearchDataItems:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (BOOL)startFeedExist;
- (void)setStartFeedExist:(BOOL)arg1;
- (id)startFeedIdModel;
- (void)setStartFeedIdModel:(id)arg1;
- (void)setBusinessFeedDic:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)loadingNextUpCgi;
- (void)setLoadingNextUpCgi:(id)arg1;
- (id)loadingNextDownCgi;
- (void)setLoadingNextDownCgi:(id)arg1;
- (id /* block */)loadingNextDownBlock;
- (void)setLoadingNextDownBlock:(id /* block */)arg1;
- (long long)batchFetchFeedsMaxCount;
- (void)setBatchFetchFeedsMaxCount:(long long)arg1;
- (long long)preFetchTopCount;
- (void)setPreFetchTopCount:(long long)arg1;
- (id)errMsgModel;
- (void)setErrMsgModel:(id)arg1;
- (void).cxx_destruct;
@end

