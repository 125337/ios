@interface WxpayOutcome : NSObject
{
    long long _kind; // +0x8
    WxpayStatus * _status; // +0x10
    WxpayPayload * _payload; // +0x18
    id _value; // +0x20
}
+ (id)partialWithStatus:(id)arg1 payload:(id)arg2 value:(id)arg3;
+ (id)done;
+ (id)doneWithStatus:(id)arg1;
+ (id)doneWithStatus:(id)arg1 payload:(id)arg2 value:(id)arg3;
+ (id)outcomeWithKind:(long long)arg1 status:(id)arg2 payload:(id)arg3 value:(id)arg4;
- (id)initInternal;
- (BOOL)isTerminal;
- (id)description;
- (long long)kind;
- (id)status;
- (id)payload;
- (id)value;
- (void).cxx_destruct;
@end
