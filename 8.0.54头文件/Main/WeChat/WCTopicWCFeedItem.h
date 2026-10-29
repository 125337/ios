@interface WCTopicWCFeedItem : NSObject
{
    NSString * _username; // +0x8
    NSString * _feedId; // +0x10
    long long _feedType; // +0x18
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (long long)feedType;
- (void)setFeedType:(long long)arg1;
- (void).cxx_destruct;
@end

