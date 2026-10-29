@interface WCAppAuthSearchLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int _nextPageFlag; // +0x8
    unsigned int _eventID; // +0xc
    id <WCAppAuthSearchLogicDelegate> _delegate; // +0x10
    NSString * _keyword; // +0x18
    NSData * _nextPageData; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)search:(id)arg1;
- (void)cancelLastKeyWordSearch;
- (BOOL)isSearching;
- (BOOL)isSearchEnd;
- (void)handleSearchResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)nextPageData;
- (void)setNextPageData:(id)arg1;
- (unsigned int)nextPageFlag;
- (void)setNextPageFlag:(unsigned int)arg1;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
