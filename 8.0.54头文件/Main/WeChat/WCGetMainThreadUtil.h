@interface WCGetMainThreadUtil : NSObject
+ (void)getCurrentMainThreadStack:(id /* block */)arg1;
+ (int)getCurrentMainThreadStack:(id /* block */)arg1 withMaxEntries:(unsigned long long)arg2;
+ (int)getCurrentMainThreadStack:(id /* block */)arg1 withMaxEntries:(unsigned long long)arg2 withThreadCount:(unsigned long long *)arg3;
@end

