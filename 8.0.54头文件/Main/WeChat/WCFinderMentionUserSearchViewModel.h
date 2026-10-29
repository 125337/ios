@interface WCFinderMentionUserSearchViewModel : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _error; // +0x9
    NSString * _lastKeyword; // +0x10
    WCFinderMentionUserSection * _followSection; // +0x18
    WCFinderMentionUserSection * _friendSeciton; // +0x20
    WCFinderMentionUserSection * _moreSection; // +0x28
    NSArray * _sections; // +0x30
    NSString * _requestId; // +0x38
    FTSContactSearchUtilLogic * _contactSearchLogic; // +0x40
    WCFinderMentionFriendContactSearchTask * _friendSeachTask; // +0x48
    unsigned long long _searchSequence; // +0x50
}
- (id)init;
- (void)reset;
- (void)search:(id)arg1 complete:(id /* block */)arg2;
- (void)_search:(id)arg1 seq:(unsigned long long)arg2 withoutFriendContactComplete:(id /* block */)arg3;
- (void)_search:(id)arg1 seq:(unsigned long long)arg2 withFriendContactComplete:(id /* block */)arg3;
- (void)_searchContact:(id)arg1 firstPage:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)_doSearch:(id)arg1 firstPage:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)onRequestMore:(id)arg1 complete:(id /* block */)arg2;
- (id)lastKeyword;
- (void)setLastKeyword:(id)arg1;
- (id)followSection;
- (void)setFollowSection:(id)arg1;
- (id)friendSeciton;
- (void)setFriendSeciton:(id)arg1;
- (id)moreSection;
- (void)setMoreSection:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)error;
- (void)setError:(BOOL)arg1;
- (id)contactSearchLogic;
- (void)setContactSearchLogic:(id)arg1;
- (id)friendSeachTask;
- (void)setFriendSeachTask:(id)arg1;
- (unsigned long long)searchSequence;
- (void)setSearchSequence:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

