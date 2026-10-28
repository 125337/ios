@interface WCFinderTLFeedInfo : NSObject
{
    int _commentScene; // +0x8
    NSString * _fromFeedId; // +0x10
    NSString * _fromFeedSessionBuffer; // +0x18
    NSString * _fromFinderUsername; // +0x20
}
- (id)fromFeedId;
- (void)setFromFeedId:(id)arg1;
- (id)fromFeedSessionBuffer;
- (void)setFromFeedSessionBuffer:(id)arg1;
- (id)fromFinderUsername;
- (void)setFromFinderUsername:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
