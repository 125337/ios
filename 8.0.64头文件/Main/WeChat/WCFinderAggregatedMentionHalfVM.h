@interface WCFinderAggregatedMentionHalfVM : NSObject
{
    id <WCFinderAggregatedMentionHalfVMDelegate> _delegate; // +0x8
    WCFinderMention * _mention; // +0x10
    WCFinderListLoadingStateModel * _loadingState; // +0x18
    WCFinderContact * _finderContact; // +0x20
    NSMutableArray * _mentionList; // +0x28
    NSMutableSet * _mentionIDSet; // +0x30
    NSData * _pageBuffer; // +0x38
}
- (id)initWithFinderMention:(id)arg1 finderContact:(id)arg2;
- (void)fetchFirstPageData;
- (void)fetchMoreData;
- (void)fetchData;
- (void)clearData;
- (void)appendMentionList:(id)arg1;
- (id)mentionAtIndex:(unsigned long long)arg1;
- (BOOL)dataEmpty;
- (id)navigationTitle;
- (id)dataSnapshot;
- (long long)getRequestScene;
- (unsigned long long)getMentionListScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mention;
- (void)setMention:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)mentionList;
- (void)setMentionList:(id)arg1;
- (id)mentionIDSet;
- (void)setMentionIDSet:(id)arg1;
- (id)pageBuffer;
- (void)setPageBuffer:(id)arg1;
- (void).cxx_destruct;
@end
