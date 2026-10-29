@interface TPTimeUtil : NSObject
+ (long long)getElapsedRealtimeSinceBootUsUsingClockGettime;
+ (long long)getElapsedRealtimeSinceBootUsUsingSysctl;
+ (long long)getElapsedRealtimeSinceBootMs;
+ (long long)getCurrentTimeSince1970Ms;
@end

