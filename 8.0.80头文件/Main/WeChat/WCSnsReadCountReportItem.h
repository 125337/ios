@interface WCSnsReadCountReportItem : NSObject
{
    NSString * _feedId; // +0x8
    long long _delta; // +0x10
}
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (long long)delta;
- (void)setDelta:(long long)arg1;
- (void).cxx_destruct;
@end
