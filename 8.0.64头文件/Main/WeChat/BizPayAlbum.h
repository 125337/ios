@interface BizPayAlbum : NSObject
{
    NSString * _userName; // +0x8
    NSString * _nickName; // +0x10
    NSString * _digest; // +0x18
    NSString * _headImgUrl; // +0x20
    NSString * _title; // +0x28
    NSString * _webUrl; // +0x30
}
+ (id)makeWithUserName:(id)arg1 nickName:(id)arg2 digest:(id)arg3 headImgUrl:(id)arg4 title:(id)arg5 webUrl:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (void).cxx_destruct;
@end
