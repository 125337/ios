@interface WCFinderSearchContactViewModel : NSObject <WCFinderContactExt>
{
    BOOL _queryContinueFlag; // +0x8
    BOOL _hasReportInputText; // +0x9
    int _scene; // +0xc
    NSString * _searchSessionid; // +0x10
    id <WCFinderSearchContactViewModelDelegate> _delegate; // +0x18
    NSString * _latestQueryText; // +0x20
    NSString * _latestRequestID; // +0x28
    NSData * _lastBuffer; // +0x30
    NSMutableArray * _allSearchInfoItems; // +0x38
    WCFinderSearchItemReportQueue * _reportQueue; // +0x40
    unsigned long long _searchSourceType; // +0x48
    WCFinderBaseCgi * _cgi; // +0x50
}
+ (id)initWithBuffer:(id)arg1 latestRequestID:(id)arg2 queryText:(id)arg3 queryContinueFlag:(BOOL)arg4 dataSources:(id)arg5 searchSessionid:(id)arg6 searchSourceType:(unsigned long long)arg7;
- (id)init;
- (void)dealloc;
- (BOOL)isRepetSearch:(id)arg1;
- (void)updateSearchSourceType:(unsigned long long)arg1;
- (void)queryContactWith:(id)arg1;
- (void)onQueryNextPageContact;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (void)resetSearchStatus;
- (unsigned long long)searchNumsOfSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (id)searchInfoAtIndexPath:(id)arg1;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)arg1;
- (void)reportHasInputSearchText;
- (void)reportSearchActionInfo:(id)arg1 isClickActionType:(BOOL)arg2;
- (void)recordResultDisplay:(id)arg1;
- (void)reportItemExposeInfo;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (id)searchSessionid;
- (void)setSearchSessionid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (id)latestRequestID;
- (void)setLatestRequestID:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)queryContinueFlag;
- (void)setQueryContinueFlag:(BOOL)arg1;
- (id)allSearchInfoItems;
- (void)setAllSearchInfoItems:(id)arg1;
- (id)reportQueue;
- (void)setReportQueue:(id)arg1;
- (unsigned long long)searchSourceType;
- (void)setSearchSourceType:(unsigned long long)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (BOOL)hasReportInputText;
- (void)setHasReportInputText:(BOOL)arg1;
- (void).cxx_destruct;
@end

