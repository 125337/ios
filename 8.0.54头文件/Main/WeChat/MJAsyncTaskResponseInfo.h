@interface MJAsyncTaskResponseInfo : NSObject
{
    unsigned long long _queryIntervalMillis; // +0x8
    NSData * _contextBuff; // +0x10
}
+ (id)infoWithQueryIntervalMillis:(unsigned long long)arg1 contextBuff:(id)arg2;
- (id)initWithQueryIntervalMillis:(unsigned long long)arg1 contextBuff:(id)arg2;
- (unsigned long long)queryIntervalMillis;
- (id)contextBuff;
- (void).cxx_destruct;
@end

