@interface UserInfoResponse : NSObject
{
    BOOL _isOpenIM; // +0x8
    NSString * _username; // +0x10
    NSString * _avatarPath; // +0x18
    NSString * _displayName; // +0x20
    NSString * _gender; // +0x28
    NSString * _subName; // +0x30
}
+ (id)makeWithUsername:(id)arg1 avatarPath:(id)arg2 displayName:(id)arg3 gender:(id)arg4 isOpenIM:(BOOL)arg5 subName:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)avatarPath;
- (void)setAvatarPath:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)gender;
- (void)setGender:(id)arg1;
- (BOOL)isOpenIM;
- (void)setIsOpenIM:(BOOL)arg1;
- (id)subName;
- (void)setSubName:(id)arg1;
- (void).cxx_destruct;
@end

