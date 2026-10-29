@interface MMFinderLiveLikeV2MsgInfo : NSObject
{
    NSString * _nickName; // +0x8
    NSString * _likeNotifyWording; // +0x10
}
+ (id)createLiveLikeV2MsgInfo:(id)arg1 liveContact:(id)arg2;
- (id)description;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)likeNotifyWording;
- (void)setLikeNotifyWording:(id)arg1;
- (void).cxx_destruct;
@end
