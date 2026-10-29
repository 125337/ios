@interface WXChannelOpenLiveReq : BaseReq
{
    NSString * _feedID; // +0x18
    NSString * _nonceID; // +0x20
}
+ (id)object;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (void).cxx_destruct;
@end
