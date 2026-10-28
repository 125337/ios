@interface WCMegaBulletCacheModel : NSObject
{
    BOOL _hadMore; // +0x8
    BOOL _error; // +0x9
    WCFinderBulletCache * _cache; // +0x10
    double _nextTime; // +0x18
    NSData * _lastBuffer; // +0x20
    NSMutableDictionary * _tasks; // +0x28
    NSMutableDictionary * _existedTag; // +0x30
}
+ (double)preLoadDuration;
- (id)init;
- (BOOL)shouldRequestInPosition:(double)arg1;
- (void)tagExistFrom:(double)arg1 to:(double)arg2 videoLength:(double)arg3;
- (BOOL)rangExistInTimeLine:(double)arg1;
- (void)clear;
- (id)cache;
- (void)setCache:(id)arg1;
- (double)nextTime;
- (BOOL)hadMore;
- (BOOL)isError;
- (void)setError:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (id)existedTag;
- (void)setExistedTag:(id)arg1;
- (void).cxx_destruct;
@end
