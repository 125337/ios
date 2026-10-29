@interface ReportCachePendingItem : NSObject
{
    unsigned long long _timestampMs; // +0x8
    NSString * _str; // +0x10
}
- (unsigned long long)timestampMs;
- (void)setTimestampMs:(unsigned long long)arg1;
- (id)str;
- (void)setStr:(id)arg1;
- (void).cxx_destruct;
@end
