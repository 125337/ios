@interface WCFinderMemberShipHomePage : NSObject
{
    BOOL _seeAuthorOnly; // +0x8
    NSString * _title; // +0x10
    NSString * _identifier; // +0x18
    WCFinderFeedArray * _feedArray; // +0x20
    WCFinderStreamLoadingState * _state; // +0x28
    unsigned long long _pageType; // +0x30
    NSString * _finderUsername; // +0x38
    id /* block */ _feedMapper; // +0x40
    id /* block */ _postingFeedFetcher; // +0x48
    id /* block */ _cacheFeedFetcher; // +0x50
    NSString * _redirectFeedID; // +0x58
}
- (id)init;
- (void)requestCacheData;
- (void)requestFirstPageData;
- (id)updateSnapshot;
- (void)requestNextPageData;
- (id)mergePostingFeedTo:(id)arg1 firstPage:(BOOL)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (BOOL)seeAuthorOnly;
- (void)setSeeAuthorOnly:(BOOL)arg1;
- (id /* block */)feedMapper;
- (void)setFeedMapper:(id /* block */)arg1;
- (id /* block */)postingFeedFetcher;
- (void)setPostingFeedFetcher:(id /* block */)arg1;
- (id /* block */)cacheFeedFetcher;
- (void)setCacheFeedFetcher:(id /* block */)arg1;
- (id)redirectFeedID;
- (void)setRedirectFeedID:(id)arg1;
- (void).cxx_destruct;
@end
