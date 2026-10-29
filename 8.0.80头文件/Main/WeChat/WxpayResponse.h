@interface WxpayResponse : NSObject
{
    BOOL _keepAlive; // +0x8
    NSString * _statusCode; // +0x10
    NSString * _message; // +0x18
    WxpayPayload * _payload; // +0x20
    id _value; // +0x28
}
+ (id)responseFromReaction:(id)arg1;
+ (id)responseFromOutcome:(id)arg1;
+ (id)successWithPayload:(id)arg1;
+ (id)successWithValue:(id)arg1;
+ (id)failureWithCode:(id)arg1 message:(id)arg2;
- (id)initWithStatusCode:(id)arg1 message:(id)arg2 payload:(id)arg3 keepAlive:(BOOL)arg4;
- (id)initWithStatusCode:(id)arg1 message:(id)arg2 payload:(id)arg3 value:(id)arg4 keepAlive:(BOOL)arg5;
- (id)statusCode;
- (void)setStatusCode:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (BOOL)keepAlive;
- (void)setKeepAlive:(BOOL)arg1;
- (id)value;
- (void).cxx_destruct;
@end
