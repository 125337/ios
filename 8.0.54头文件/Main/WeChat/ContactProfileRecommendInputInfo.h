@interface ContactProfileRecommendInputInfo : NSObject
{
    NSString * _from_user; // +0x8
    NSString * _receive_user; // +0x10
    NSArray * _verify_msgs; // +0x18
    NSArray * _chat_msgs; // +0x20
}
- (id)from_user;
- (void)setFrom_user:(id)arg1;
- (id)receive_user;
- (void)setReceive_user:(id)arg1;
- (id)verify_msgs;
- (void)setVerify_msgs:(id)arg1;
- (id)chat_msgs;
- (void)setChat_msgs:(id)arg1;
- (void).cxx_destruct;
@end

