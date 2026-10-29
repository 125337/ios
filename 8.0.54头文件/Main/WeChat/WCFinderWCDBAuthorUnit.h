@interface WCFinderWCDBAuthorUnit : NSObject
{
    WCTTable * _blackListTable; // +0x8
    WCTTable * _fansTable; // +0x10
    WCTTable * _finderAuthorMentionTable; // +0x18
    WCTTable * _authorFeedLikeList; // +0x20
    WCTTable * _authorFeedFavList; // +0x28
}
- (id)blackListTable;
- (void)setBlackListTable:(id)arg1;
- (id)fansTable;
- (void)setFansTable:(id)arg1;
- (id)finderAuthorMentionTable;
- (void)setFinderAuthorMentionTable:(id)arg1;
- (id)authorFeedLikeList;
- (void)setAuthorFeedLikeList:(id)arg1;
- (id)authorFeedFavList;
- (void)setAuthorFeedFavList:(id)arg1;
- (void).cxx_destruct;
@end

