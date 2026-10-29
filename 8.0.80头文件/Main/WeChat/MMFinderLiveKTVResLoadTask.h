@interface MMFinderLiveKTVResLoadTask : NSObject
{
    NSString * _taskKey; // +0x8
    id /* block */ _timeoutCallback; // +0x10
}
- (id)initWithTaskKey:(id)arg1;
- (void)start;
- (void)stop;
- (void)timeoutToLoad;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id /* block */)timeoutCallback;
- (void)setTimeoutCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
