@interface SnsFlutterContactInfo : NSObject
{
    NSString * _userName; // +0x8
    NSString * _displayName; // +0x10
}
+ (id)makeWithUserName:(id)arg1 displayName:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (void).cxx_destruct;
@end
