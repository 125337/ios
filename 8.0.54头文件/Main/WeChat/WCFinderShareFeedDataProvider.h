@interface WCFinderShareFeedDataProvider : NSObject
{
    BOOL _onlyOneFeed; // +0x8
    BOOL _allowTopPull; // +0x9
    BOOL _hasRequestPlaceholderDataItems; // +0xa
    BOOL _appendingPlaceholderDataItems; // +0xb
    id <WCFinderShareFeedDataProviderDelegate> _delegate; // +0x10
    NSData * _lastBuff; // +0x18
    NSString * _enterTid; // +0x20
    WCFinderFeedArray * _feedArray; // +0x28
    NSMutableArray * _jumpFeedArray; // +0x30
    NSData * _debugMessage; // +0x38
    FinderRelatedRecommendTips * _relatedRecommendTips; // +0x40
    id /* block */ _feedMapper; // +0x48
    WCFinderTaskQueue * _taskQueue; // +0x50
    WCFinderGetRelatedListParams * _params; // +0x58
    WCFinderPushFeedViewProductParams * _productInfo; // +0x60
    NSMutableArray * _placeholderDataItems; // +0x68
    NSMutableArray * _placeholderAppendList; // +0x70
    NSArray * _needCollectionDataItemList; // +0x78
    WCFinderShareDataState _flag; // +0x80
}
- (id)initWithParams:(id)arg1 feedMapper:(id /* block */)arg2;
- (void)requestCacheData;
- (void)requestFirstPage;
- (WCFinderShareDataState)state;
- (WCFinderShareDataState *)stateRef;
- (void)setAllowTopPull:(BOOL)arg1;
- (void)requestNextPage;
- (void)requestPrePage;
- (void)requestPlaceholderData;
- (id)sliceDataArray:(id)arg1;
- (void)appendPlaceholderObject;
- (void)collectionUnUsedPlaceholderObjects;
- (id)firstDataItem;
- (id)createDetailTask:(BOOL)arg1;
- (id)createCommentDetailTask:(BOOL)arg1;
- (id)createEncryptCommentDetailTask:(BOOL)arg1;
- (void)_onDetailCGIBack:(id)arg1 isFirstDataItemLoading:(BOOL)arg2;
- (id)createNextRelativeTask;
- (id)createPreRelativeTask;
- (void)appendDataItem:(id)arg1 isFirstPage:(BOOL)arg2 isBottom:(BOOL)arg3 resp:(id)arg4;
- (BOOL)recommendTipsIsValid;
- (void)deleteFeedWithIds:(id)arg1;
- (void)insertFeeds:(id)arg1 fromIndex:(unsigned long long)arg2 cleanBottom:(BOOL)arg3;
- (void)_onCGIBackError:(int)arg1 msg:(id)arg2;
- (id)parseError:(int)arg1 msg:(id)arg2;
- (void)deadlyErrorCleanDatas:(BOOL)arg1;
- (void)updateLocalDataItem:(id /* block */)arg1;
- (id)forkProviderWithFeed:(id)arg1 byPassInfo:(id)arg2 commentScene:(int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)onlyOneFeed;
- (void)setOnlyOneFeed:(BOOL)arg1;
- (BOOL)allowTopPull;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)enterTid;
- (void)setEnterTid:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)jumpFeedArray;
- (void)setJumpFeedArray:(id)arg1;
- (id)debugMessage;
- (void)setDebugMessage:(id)arg1;
- (id)relatedRecommendTips;
- (void)setRelatedRecommendTips:(id)arg1;
- (id /* block */)feedMapper;
- (void)setFeedMapper:(id /* block */)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (WCFinderShareDataState)flag;
- (void)setFlag:(WCFinderShareDataState)arg1;
- (id)placeholderDataItems;
- (void)setPlaceholderDataItems:(id)arg1;
- (id)placeholderAppendList;
- (void)setPlaceholderAppendList:(id)arg1;
- (id)needCollectionDataItemList;
- (void)setNeedCollectionDataItemList:(id)arg1;
- (BOOL)hasRequestPlaceholderDataItems;
- (void)setHasRequestPlaceholderDataItems:(BOOL)arg1;
- (BOOL)appendingPlaceholderDataItems;
- (void)setAppendingPlaceholderDataItems:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

