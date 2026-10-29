@interface WxpayHttpResponse : NSObject <NSCopying>
{
    NSString * _finalUrl; // +0x8
    long long _statusCode; // +0x10
    NSString * _statusText; // +0x18
    NSArray * _headers; // +0x20
    NSData * _body; // +0x28
    long long _errorCode; // +0x30
    NSString * _errorMessage; // +0x38
    long long _dnsMode; // +0x40
}
+ (id)failureWithCode:(long long)arg1 message:(id)arg2 dnsMode:(long long)arg3;
- (id)initWithFinalUrl:(id)arg1 statusCode:(long long)arg2 statusText:(id)arg3 headers:(id)arg4 body:(id)arg5 errorCode:(long long)arg6 errorMessage:(id)arg7 dnsMode:(long long)arg8;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)finalUrl;
- (long long)statusCode;
- (id)statusText;
- (id)headers;
- (id)body;
- (long long)errorCode;
- (id)errorMessage;
- (long long)dnsMode;
- (void).cxx_destruct;
@end
