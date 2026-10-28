@interface MMWebViewPerformanceTimeRecord : NSObject
{
    BOOL _isNewCategory; // +0x8
    NSString * _name; // +0x10
    unsigned long long _timeInMs; // +0x18
    unsigned long long _sequence; // +0x20
    NSString * _detail; // +0x28
    unsigned long long _relativeTimeInMs; // +0x30
}
- (id)descriptionWithStartTime:(unsigned long long)arg1;
- (long long)timeCompare:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)timeInMs;
- (void)setTimeInMs:(unsigned long long)arg1;
- (unsigned long long)sequence;
- (void)setSequence:(unsigned long long)arg1;
- (BOOL)isNewCategory;
- (void)setIsNewCategory:(BOOL)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (unsigned long long)relativeTimeInMs;
- (void)setRelativeTimeInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
