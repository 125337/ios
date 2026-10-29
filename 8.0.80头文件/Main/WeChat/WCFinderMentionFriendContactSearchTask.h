@interface WCFinderMentionFriendContactSearchTask : NSObject
{
    NSString * _keyword; // +0x8
    NSMutableArray * _contacts; // +0x10
    NSDictionary * _dicMatchTips; // +0x18
    WCFinderBaseCgi * _fetchingCGI; // +0x20
}
+ (BOOL)_acceptMatchType:(unsigned long long)arg1;
+ (void)fillMatchInfo:(id)arg1 ToContact:(id)arg2;
- (void)asyncFetchContact:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)asyncFetchContactCount:(long long)arg1 successful:(id /* block */)arg2 pendingResult:(id)arg3 failure:(id /* block */)arg4;
- (void)doFetchTask:(long long)arg1 complete:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)_doSearchContactFinder:(id)arg1 complete:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)dicMatchTips;
- (void)setDicMatchTips:(id)arg1;
- (id)fetchingCGI;
- (void)setFetchingCGI:(id)arg1;
- (void).cxx_destruct;
@end
