@interface TingUserContactInfo : NSObject
{
    NSString * _userName; // +0x8
    NSString * _nickName; // +0x10
    NSString * _headUrl; // +0x18
    NSString * _hashUsername; // +0x20
}
+ (id)makeWithUserName:(id)arg1 nickName:(id)arg2 headUrl:(id)arg3 hashUsername:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id)hashUsername;
- (void)setHashUsername:(id)arg1;
- (void).cxx_destruct;
@end
