@interface WCFinderMentionSearchContactViewModel : NSObject <WCFinderContactExt>
{
    BOOL _queryContinueFlag; // +0x8
    int _scene; // +0xc
    id <WCFinderMentionSearchContactViewModelDelegate> _delegate; // +0x10
    NSString * _latestQueryText; // +0x18
    NSString * _latestRequestID; // +0x20
    NSData * _lastBuffer; // +0x28
    long long _lastReportExposeTimeInMs; // +0x30
    NSArray * _sections; // +0x38
    WCFinderMentionSearchSection * _followSec; // +0x40
    WCFinderMentionSearchSection * _friendSec; // +0x48
    WCFinderMentionSearchSection * _moreSec; // +0x50
    WCFinderMentionContactSearcher * _searcher; // +0x58
}
- (id)init;
- (BOOL)isRepetSearch:(id)arg1;
- (void)queryContactWith:(id)arg1;
- (void)onQueryNextPageContact;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (void)resetSearchStatus;
- (unsigned long long)searchNumsOfSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (void)showMoreForSection:(long long)arg1;
- (id)searchInfoAtIndexPath:(id)arg1;
- (BOOL)moreThenOneSection;
- (id)titleForSection:(id)arg1;
- (unsigned long long)mentionTypeForSection:(long long)arg1;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)arg1;
- (id)displayShowMoreWordingForSection:(long long)arg1;
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
- (long long)lastReportExposeTimeInMs;
- (void)setLastReportExposeTimeInMs:(long long)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)followSec;
- (void)setFollowSec:(id)arg1;
- (id)friendSec;
- (void)setFriendSec:(id)arg1;
- (id)moreSec;
- (void)setMoreSec:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (void).cxx_destruct;
@end

