@interface UserProfileLaunchRequest : NSObject
{
    NSString * _username; // +0x8
}
+ (id)makeWithUsername:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end

