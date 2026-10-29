@interface WCFinderFollowSearchContactViewModel : NSObject <WCFinderSearchContactViewModelProtocol>
{
    int _scene; // +0x8
    BOOL _queryContinueFlag; // +0xc
    NSString * _latestQueryText; // +0x10
    NSString * _latestRequestID; // +0x18
    NSData * _lastBuffer; // +0x20
    WCFinderSearchItemReportQueue * _itemReportQueue; // +0x28
    id <WCFinderFollowSearchContactViewModelDelegate> _delegate; // +0x30
    WCFinderBaseCgi * _searchCgi; // +0x38
    WCFinderMentionSearchSection * _followSec; // +0x40
    WCFinderMentionSearchSection * _moreSec; // +0x48
    NSArray * _sections; // +0x50
}
- (id)init;
- (BOOL)isRepetSearch:(id)arg1;
- (void)queryContactWith:(id)arg1;
- (void)onQueryNextPageContact;
- (BOOL)containTargetSearchInfoArray:(id)arg1 targetInfo:(id)arg2;
- (void)appendMoreSearchInfo:(id)arg1;
- (void)appendFollowSearchInfo:(id)arg1;
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
- (id)itemReportQueue;
- (void)setItemReportQueue:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchCgi;
- (void)setSearchCgi:(id)arg1;
- (id)followSec;
- (void)setFollowSec:(id)arg1;
- (id)moreSec;
- (void)setMoreSec:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (void).cxx_destruct;
@end
