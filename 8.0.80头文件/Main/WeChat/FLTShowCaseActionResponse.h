@interface FLTShowCaseActionResponse : NSObject
{
    long long _code; // +0x8
    NSString * _message; // +0x10
    NSString * _data; // +0x18
}
+ (id)makeWithCode:(long long)arg1 message:(id)arg2 data:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)code;
- (void)setCode:(long long)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
