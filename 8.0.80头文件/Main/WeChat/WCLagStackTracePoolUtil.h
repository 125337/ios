@interface WCLagStackTracePoolUtil : NSObject
+ (id)makeCallTreeWithStackCyclePool:(unsigned long long * *)arg1 stackCount:(unsigned long long *)arg2 maxStackTraceCount:(unsigned long long)arg3;
@end
