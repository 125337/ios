@interface TingFinderContactInfo : NSObject
{
    NSString * _username; // +0x8
    NSString * _nickname; // +0x10
    NSString * _headImageUrl; // +0x18
    NSNumber * _isFollow; // +0x20
}
+ (id)makeWithUsername:(id)arg1 nickname:(id)arg2 headImageUrl:(id)arg3 isFollow:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)isFollow;
- (void)setIsFollow:(id)arg1;
- (void).cxx_destruct;
@end
