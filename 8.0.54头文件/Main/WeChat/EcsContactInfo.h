@interface EcsContactInfo : NSObject
{
    NSString * _nickName; // +0x8
    NSString * _userName; // +0x10
}
+ (id)makeWithNickName:(id)arg1 userName:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end

