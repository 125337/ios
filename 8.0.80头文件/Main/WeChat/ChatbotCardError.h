@interface ChatbotCardError : NSObject
{
    unsigned long long _code; // +0x8
    NSString * _message; // +0x10
}
+ (id)makeWithCode:(unsigned long long)arg1 message:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (unsigned long long)code;
- (void)setCode:(unsigned long long)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void).cxx_destruct;
@end
