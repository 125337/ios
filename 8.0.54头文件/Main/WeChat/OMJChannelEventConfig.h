@interface OMJChannelEventConfig : NSObject
{
    NSString * _eventName; // +0x8
    NSString * _finderNickName; // +0x10
}
- (id)initWithBackingInfo:(const void *)arg1;
- (id)initWithEventName:(id)arg1 finderNickName:(id)arg2;
- (id)eventName;
- (id)finderNickName;
- (void).cxx_destruct;
@end

