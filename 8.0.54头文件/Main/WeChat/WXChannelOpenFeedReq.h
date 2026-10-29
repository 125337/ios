@interface WXChannelOpenFeedReq : BaseReq
{
    BOOL _notGetReleatedList; // +0x18
    NSString * _feedID; // +0x20
    NSString * _nonceID; // +0x28
}
+ (id)object;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (BOOL)notGetReleatedList;
- (void)setNotGetReleatedList:(BOOL)arg1;
- (void).cxx_destruct;
@end

