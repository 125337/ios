@interface WCFinderFeedSearchParams : NSObject
{
    int _commentScene; // +0x8
    int _interactionScene; // +0xc
    NSString * _searchSessionID; // +0x10
    NSString * _requestID; // +0x18
    NSArray * _tagTexts; // +0x20
    NSString * _queryText; // +0x28
    unsigned long long _searchScene; // +0x30
}
- (id)searchSessionID;
- (void)setSearchSessionID:(id)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (id)tagTexts;
- (void)setTagTexts:(id)arg1;
- (id)queryText;
- (void)setQueryText:(id)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)interactionScene;
- (void)setInteractionScene:(int)arg1;
- (void).cxx_destruct;
@end

