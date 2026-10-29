@interface MMLiveResourceFetcherBuilder : NSObject
+ (id)createDefault;
+ (id)createWithMaximumRetryCount:(unsigned long long)arg1;
+ (id)createUnarchiving;
+ (id)createFanout;
+ (id)createFanoutWithMaximumRetryCount:(unsigned long long)arg1;
+ (id)createRootlessWithMaximumRetryCount:(unsigned long long)arg1;
@end

