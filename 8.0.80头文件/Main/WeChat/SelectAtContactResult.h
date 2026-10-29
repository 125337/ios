@interface SelectAtContactResult : NSObject
{
    NSString * _username; // +0x8
    NSString * _nickname; // +0x10
}
+ (id)makeWithUsername:(id)arg1 nickname:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (void).cxx_destruct;
@end
