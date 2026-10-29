@interface WCTimelineFeedBrief : NSObject
{
    BOOL _isWeishange; // +0x8
    unsigned int _createTime; // +0xc
    NSString * _feedId; // +0x10
    NSString * _username; // +0x18
}
- (id)description;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)isWeishange;
- (void)setIsWeishange:(BOOL)arg1;
- (void).cxx_destruct;
@end
