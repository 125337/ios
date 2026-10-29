@interface LiteAppRecentForwardItem : NSObject
{
    NSString * _nsEncryUserName; // +0x8
    NSString * _nsNickName; // +0x10
    NSString * _nsHeadImgUrl; // +0x18
    NSString * _nsDefaultHeadImgUrl; // +0x20
}
- (id)initWithUserName:(id)arg1 nickName:(id)arg2 headImageUrl:(id)arg3 defaultHeadImageUrl:(id)arg4;
- (id)toNSDictionary;
- (id)nsEncryUserName;
- (void)setNsEncryUserName:(id)arg1;
- (id)nsNickName;
- (void)setNsNickName:(id)arg1;
- (id)nsHeadImgUrl;
- (void)setNsHeadImgUrl:(id)arg1;
- (id)nsDefaultHeadImgUrl;
- (void)setNsDefaultHeadImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
