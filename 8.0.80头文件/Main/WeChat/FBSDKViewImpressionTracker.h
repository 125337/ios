@interface FBSDKViewImpressionTracker : NSObject
{
    NSMutableSet * _trackedImpressions; // +0x8
    NSString * _eventName; // +0x10
}
+ (id)impressionTrackerWithEventName:(id)arg1;
- (id)initWithEventName:(id)arg1;
- (void)dealloc;
- (void)logImpressionWithIdentifier:(id)arg1 parameters:(id)arg2;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)eventName;
- (void).cxx_destruct;
@end
