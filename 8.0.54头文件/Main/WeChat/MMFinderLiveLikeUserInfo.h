@interface MMFinderLiveLikeUserInfo : NSObject
{
    unsigned int _liveIdentity; // +0x8
    NSString * _nickname; // +0x10
    NSString * _headUrl; // +0x18
}
+ (id)createLikeUserInfo:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (unsigned int)liveIdentity;
- (void)setLiveIdentity:(unsigned int)arg1;
- (void).cxx_destruct;
@end

