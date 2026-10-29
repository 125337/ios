@interface FlutterUserInfo : NSObject
{
    NSString * _userName; // +0x8
    NSString * _nickName; // +0x10
}
+ (id)makeWithUserName:(id)arg1 nickName:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (void).cxx_destruct;
@end

