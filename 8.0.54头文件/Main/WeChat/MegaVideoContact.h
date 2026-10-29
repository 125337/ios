@interface MegaVideoContact : NSObject
{
    NSString * _username; // +0x8
    NSString * _avatarUrl; // +0x10
    NSString * _nickname; // +0x18
    NSNumber * _isFollowed; // +0x20
    NSNumber * _followState; // +0x28
}
+ (id)makeWithUsername:(id)arg1 avatarUrl:(id)arg2 nickname:(id)arg3 isFollowed:(id)arg4 followState:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)isFollowed;
- (void)setIsFollowed:(id)arg1;
- (id)followState;
- (void)setFollowState:(id)arg1;
- (void).cxx_destruct;
@end

