@interface WxpayInvocation : NSObject
{
    WxpayCapabilityTarget * _target; // +0x8
    WxpayCallContext * _context; // +0x10
    WxpayPayload * _payload; // +0x18
    NSArray * _arguments; // +0x20
}
+ (id)invocationWithTarget:(id)arg1 context:(id)arg2 payload:(id)arg3;
+ (id)invocationWithTarget:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4;
- (id)initInternal;
- (id)description;
- (id)target;
- (id)context;
- (id)payload;
- (id)arguments;
- (void).cxx_destruct;
@end
