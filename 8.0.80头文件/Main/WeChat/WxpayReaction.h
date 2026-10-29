@interface WxpayReaction : NSObject
{
    long long _kind; // +0x8
    WxpayStatus * _status; // +0x10
    WxpayPayload * _payload; // +0x18
    id _value; // +0x20
}
+ (id)acceptedWithPayload:(id)arg1 value:(id)arg2;
+ (id)completed;
+ (id)completedWithStatus:(id)arg1;
+ (id)completedWithStatus:(id)arg1 payload:(id)arg2 value:(id)arg3;
+ (id)pending;
+ (id)unsupported;
+ (id)unsupportedWithStatus:(id)arg1;
+ (id)reactionWithKind:(long long)arg1 status:(id)arg2 payload:(id)arg3 value:(id)arg4;
- (id)reactionWithPayload:(id)arg1;
- (id)initInternal;
- (id)description;
- (long long)kind;
- (id)status;
- (id)payload;
- (id)value;
- (void).cxx_destruct;
@end
