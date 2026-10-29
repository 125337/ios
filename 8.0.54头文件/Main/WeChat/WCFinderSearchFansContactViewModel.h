@interface WCFinderSearchFansContactViewModel : NSObject <WCFinderSearchContactViewModelProtocol>
{
    int _scene; // +0x8
    BOOL _queryContinueFlag; // +0xc
    NSString * _latestQueryText; // +0x10
    NSString * _latestRequestID; // +0x18
    NSData * _lastBuffer; // +0x20
    WCFinderSearchItemReportQueue * _reportQueue; // +0x28
    NSString * _searchSessionid; // +0x30
    NSString * _currentFinderUsername; // +0x38
    id <WCFinderFollowSearchContactViewModelDelegate> _delegate; // +0x40
    WCFinderBaseCgi * _searchCgi; // +0x48
    WCFinderMentionSearchSection * _fansSec; // +0x50
}
- (id)init;
- (BOOL)isRepetSearch:(id)arg1;
- (void)queryContactWith:(id)arg1;
- (void)appendFansSearchInfo:(id)arg1;
- (BOOL)containTargetSearchInfoArray:(id)arg1 targetInfo:(id)arg2;
- (void)onQueryNextPageContact;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (void)resetSearchStatus;
- (unsigned long long)searchNumsOfSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (id)searchInfoAtIndexPath:(id)arg1;
- (void)recordResultDisplay:(id)arg1;
- (void)reportItemExposeInfo;
- (unsigned long long)cellActionType;
- (BOOL)isFinderContact;
- (id)searchPlaceHolder;
- (void)addToBlackList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (unsigned long long)mentionTypeForSection:(long long)arg1;
- (BOOL)moreThenOneSection;
- (id)titleForSection:(id)arg1;
- (void)setScene:(int)arg1;
- (int)scene;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (id)latestRequestID;
- (void)setLatestRequestID:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)queryContinueFlag;
- (void)setQueryContinueFlag:(BOOL)arg1;
- (id)reportQueue;
- (void)setReportQueue:(id)arg1;
- (id)searchSessionid;
- (void)setSearchSessionid:(id)arg1;
- (id)currentFinderUsername;
- (void)setCurrentFinderUsername:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchCgi;
- (void)setSearchCgi:(id)arg1;
- (id)fansSec;
- (void)setFansSec:(id)arg1;
- (void).cxx_destruct;
@end

