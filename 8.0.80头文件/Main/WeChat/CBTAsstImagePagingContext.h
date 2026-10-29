@interface CBTAsstImagePagingContext : NSObject
{
    BOOL _followChatHistory; // +0x8
    BOOL _upHasMore; // +0x9
    BOOL _downHasMore; // +0xa
    unsigned int _senderType; // +0xc
    NSData * _anchorBubbleInfo; // +0x10
    unsigned long long _listOrder; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _query; // +0x28
    NSData * _upContextBytes; // +0x30
    NSData * _downContextBytes; // +0x38
    unsigned long long _prefetchThreshold; // +0x40
}
- (id)init;
- (id)anchorBubbleInfo;
- (void)setAnchorBubbleInfo:(id)arg1;
- (unsigned long long)listOrder;
- (void)setListOrder:(unsigned long long)arg1;
- (BOOL)followChatHistory;
- (void)setFollowChatHistory:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned int)senderType;
- (void)setSenderType:(unsigned int)arg1;
- (id)upContextBytes;
- (void)setUpContextBytes:(id)arg1;
- (id)downContextBytes;
- (void)setDownContextBytes:(id)arg1;
- (BOOL)upHasMore;
- (void)setUpHasMore:(BOOL)arg1;
- (BOOL)downHasMore;
- (void)setDownHasMore:(BOOL)arg1;
- (unsigned long long)prefetchThreshold;
- (void)setPrefetchThreshold:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
