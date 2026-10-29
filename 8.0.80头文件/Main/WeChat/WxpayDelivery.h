@interface WxpayDelivery : NSObject
{
    long long _kind; // +0x8
    long long _listeners; // +0x10
    NSString * _reason; // +0x18
}
+ (id)deliveredToListeners:(long long)arg1;
+ (id)rejectedWithReason:(id)arg1;
+ (id)droppedWithReason:(id)arg1;
+ (id)deliveryWithKind:(long long)arg1 reason:(id)arg2;
- (id)initInternal;
- (id)description;
- (long long)kind;
- (long long)listeners;
- (id)reason;
- (void).cxx_destruct;
@end
