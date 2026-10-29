@interface LiteAppConfigTriggerWhenModel : NSObject
{
    NSString * _eventName; // +0x8
    NSDictionary * _condition; // +0x10
}
- (id)init;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)condition;
- (void)setCondition:(id)arg1;
- (void).cxx_destruct;
@end
