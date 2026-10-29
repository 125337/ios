@interface TingBrandContactInfo : NSObject
{
    NSString * _username; // +0x8
    NSNumber * _isSubscribe; // +0x10
}
+ (id)makeWithUsername:(id)arg1 isSubscribe:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)isSubscribe;
- (void)setIsSubscribe:(id)arg1;
- (void).cxx_destruct;
@end

