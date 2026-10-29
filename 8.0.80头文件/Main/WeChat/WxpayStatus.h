@interface WxpayStatus : NSObject <NSCopying>
{
    NSString * _code; // +0x8
    NSString * _message; // +0x10
}
+ (id)statusWithCode:(id)arg1;
+ (id)statusWithCode:(id)arg1 message:(id)arg2;
+ (id)ok;
- (id)initInternal;
- (BOOL)isOK;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)code;
- (id)message;
- (void).cxx_destruct;
@end
