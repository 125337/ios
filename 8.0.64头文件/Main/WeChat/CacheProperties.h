@interface CacheProperties : NSObject
{
    int _priority; // +0x8
    long long _type; // +0x10
    long long _threshold; // +0x18
    long long _minKeep; // +0x20
}
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)threshold;
- (void)setThreshold:(long long)arg1;
- (long long)minKeep;
- (void)setMinKeep:(long long)arg1;
- (int)priority;
- (void)setPriority:(int)arg1;
@end
