@interface WCFinderLiveEventsReporter : NSObject
{
    MMFinderLiveTask * _liveTask; // +0x8
}
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)initWithLiveTask:(id)arg1;
- (void)dealloc;
- (id)finderNickname;
- (unsigned int)kvLogID;
- (void)reportEventWithModule:(long long)arg1 eventName:(id)arg2 description:(id)arg3;
- (id)liveTask;
- (void).cxx_destruct;
@end
