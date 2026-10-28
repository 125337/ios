@interface WCFinderPostTemplateCommentParams : NSObject
{
    int _type; // +0x8
    NSString * _username; // +0x10
    NSString * _nickName; // +0x18
    NSString * _feedId; // +0x20
    NSString * _feedNonceId; // +0x28
    NSString * _refFeedId; // +0x30
}
- (id)init;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)feedNonceId;
- (void)setFeedNonceId:(id)arg1;
- (id)refFeedId;
- (void)setRefFeedId:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void).cxx_destruct;
@end
