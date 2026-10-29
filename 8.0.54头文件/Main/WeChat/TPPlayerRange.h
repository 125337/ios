@interface TPPlayerRange : NSObject
{
    long long _startTimeMs; // +0x8
    long long _endTimeMs; // +0x10
}
+ (id)makeWithStartTimeMs:(long long)arg1 endTimeMs:(long long)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)endTimeMs;
- (void)setEndTimeMs:(long long)arg1;
@end

