@interface WxpayKitFeatureStatus : NSObject
{
    NSString * _code; // +0x8
    NSString * _message; // +0x10
    NSDictionary * _result; // +0x18
}
- (id)initWithCode:(id)arg1 message:(id)arg2 result:(id)arg3;
- (id)initWithCode:(id)arg1 message:(id)arg2;
- (id)code;
- (void)setCode:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (void).cxx_destruct;
@end
