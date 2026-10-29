@interface WCMomentsMenuActionReportSnsInfo : MMObject
{
    int _feedType; // +0x8
    long long _contentType; // +0x10
    NSString * _feedId; // +0x18
    NSString * _feedUsername; // +0x20
    NSString * _commentUsername; // +0x28
}
- (long long)contentType;
- (void)setContentType:(long long)arg1;
- (int)feedType;
- (void)setFeedType:(int)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)feedUsername;
- (void)setFeedUsername:(id)arg1;
- (id)commentUsername;
- (void)setCommentUsername:(id)arg1;
- (void).cxx_destruct;
@end

