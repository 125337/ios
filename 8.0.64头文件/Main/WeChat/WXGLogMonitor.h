@interface WXGLogMonitor : NSObject
{
    NSString * _lastDate; // +0x8
}
+ (id)sharedMonitor;
- (void)monitorLogSize;
- (id)lastDate;
- (void)setLastDate:(id)arg1;
- (void).cxx_destruct;
@end
