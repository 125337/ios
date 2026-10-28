@interface FWFNSErrorData : NSObject
{
    long long _code; // +0x8
    NSString * _domain; // +0x10
    NSDictionary * _userInfo; // +0x18
}
+ (id)makeWithCode:(long long)arg1 domain:(id)arg2 userInfo:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)code;
- (void)setCode:(long long)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
