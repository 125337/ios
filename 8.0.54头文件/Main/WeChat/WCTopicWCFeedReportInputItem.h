@interface WCTopicWCFeedReportInputItem : NSObject
{
    long long _actionScene; // +0x8
    long long _enterSource; // +0x10
    unsigned long long _actionTimeStamp; // +0x18
    WCTopicWCFeedItem * _feedItem; // +0x20
    NSString * _commentId; // +0x28
    NSString * _sessionId; // +0x30
    NSString * _queryKey; // +0x38
}
- (long long)actionScene;
- (void)setActionScene:(long long)arg1;
- (long long)enterSource;
- (void)setEnterSource:(long long)arg1;
- (unsigned long long)actionTimeStamp;
- (void)setActionTimeStamp:(unsigned long long)arg1;
- (id)feedItem;
- (void)setFeedItem:(id)arg1;
- (id)commentId;
- (void)setCommentId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)queryKey;
- (void)setQueryKey:(id)arg1;
- (void).cxx_destruct;
@end

