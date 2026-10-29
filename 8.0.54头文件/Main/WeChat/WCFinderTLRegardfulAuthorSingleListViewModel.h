@interface WCFinderTLRegardfulAuthorSingleListViewModel : WCFinderFollowTabDetailBaseViewModel
{
    BOOL _noMoreData; // +0x8
    NSString * _finderUsername; // +0x10
    NSMutableSet * _tidSet; // +0x18
    NSMutableArray * _allDataItems; // +0x20
    unsigned long long _preFetchNextPageIndex; // +0x28
    NSData * _lastBuf; // +0x30
    NSString * _feedID; // +0x38
    NSString * _nonceID; // +0x40
}
- (id)initWithUsername:(id)arg1 lastTid:(id)arg2 nonceID:(id)arg3;
- (id)noDataTips;
- (id)noMoreDataTips;
- (BOOL)hasMoreData;
- (BOOL)hasFetchFirstPageData;
- (unsigned long long)allDataCount;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMOfTid:(id)arg1;
- (BOOL)needFetchFirstPageData;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)fetchDataWithIsFirstPage:(BOOL)arg1;
- (void)appendDataItem:(id)arg1;
- (void)appendContentVM:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)updateUploadingDataItem:(id)arg1;
- (id)contentVmWithVM:(id)arg1;
- (id)contentVMWithDataItem:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)allDataItems;
- (id)tidSet;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void)setTidSet:(id)arg1;
- (void)setAllDataItems:(id)arg1;
- (BOOL)noMoreData;
- (void)setNoMoreData:(BOOL)arg1;
- (unsigned long long)preFetchNextPageIndex;
- (void)setPreFetchNextPageIndex:(unsigned long long)arg1;
- (id)lastBuf;
- (void)setLastBuf:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (void).cxx_destruct;
@end

