@interface WCFinderMentionContactSearcher : NSObject
{
    NSArray * _contacts; // +0x8
    long long _cursor; // +0x10
    NSString * _keyword; // +0x18
    NSMutableArray * _pendingTask; // +0x20
}
- (id)init;
- (void)search:(id)arg1 index:(long long)arg2 complete:(id /* block */)arg3;
- (void)setKeyword:(id)arg1;
- (void)search:(id /* block */)arg1;
- (BOOL)_doSearch:(id)arg1;
- (BOOL)_testContact:(id)arg1 contact:(id)arg2;
- (void)_queryFriendFinderContact:(id)arg1 complete:(id /* block */)arg2;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (long long)cursor;
- (void)setCursor:(long long)arg1;
- (id)keyword;
- (id)pendingTask;
- (void)setPendingTask:(id)arg1;
- (void).cxx_destruct;
@end
