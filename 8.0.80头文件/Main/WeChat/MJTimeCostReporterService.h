@interface MJTimeCostReporterService : NSObject
{
    NSMutableDictionary * _eventStartDates; // +0x8
    NSMutableDictionary * _eventParams; // +0x10
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x18
    NSString * _keySeparator; // +0x20
}
+ (id)sharedInstance;
- (id)init;
- (id)_calcKeyWithName:(id)arg1 uid:(id)arg2;
- (void)markEventBeginWithName:(id)arg1;
- (void)markEventBeginWithName:(id)arg1 uid:(id)arg2;
- (void)markEventEndWithName:(id)arg1;
- (void)markEventEndWithName:(id)arg1 uid:(id)arg2;
- (void)markEventEndWithName:(id)arg1 endReason:(id)arg2;
- (void)markEventEndWithName:(id)arg1 uid:(id)arg2 endReason:(id)arg3;
- (void)markEventEndWithName:(id)arg1 endReason:(id)arg2 params:(id)arg3;
- (void)markEventEndWithName:(id)arg1 uid:(id)arg2 endReason:(id)arg3 params:(id)arg4;
- (void)addParams:(id)arg1 forRunningEventName:(id)arg2;
- (void)addParams:(id)arg1 forRunningEventName:(id)arg2 uid:(id)arg3;
- (void)reportEventWithName:(id)arg1 params:(id)arg2;
- (id)eventStartDates;
- (void)setEventStartDates:(id)arg1;
- (id)eventParams;
- (void)setEventParams:(id)arg1;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (id)keySeparator;
- (void)setKeySeparator:(id)arg1;
- (void).cxx_destruct;
@end
