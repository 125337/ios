@interface FBSDKMeasurementEvent : NSObject
{
    NSString * _name; // +0x8
    NSDictionary * _args; // +0x10
}
+ (void)postNotificationForEventName:(id)arg1 args:(id)arg2;
- (void)postNotification;
- (id)initEventWithName:(id)arg1 args:(id)arg2;
- (void).cxx_destruct;
@end
