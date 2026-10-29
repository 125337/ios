@interface MMConfSDKMemberInfoCache : NSObject
{
    int _reliable; // +0x8
    NSString * _userName; // +0x10
    NSString * _openId; // +0x18
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (int)reliable;
- (void)setReliable:(int)arg1;
- (void).cxx_destruct;
@end
