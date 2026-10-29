@interface MJTimeCostReporterService : NSObject
{
    NSMutableDictionary * _eventStartDates; // +0x8
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)markEventBeginWithName:(id)arg1;
- (void)markEventEndWithName:(id)arg1;
- (void)markEventEndWithName:(id)arg1 endReason:(id)arg2;
- (void)markEventEndWithName:(id)arg1 endReason:(id)arg2 params:(id)arg3;
- (void)reportEventWithName:(id)arg1 params:(id)arg2;
- (id)eventStartDates;
- (void)setEventStartDates:(id)arg1;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (void).cxx_destruct;
@end

