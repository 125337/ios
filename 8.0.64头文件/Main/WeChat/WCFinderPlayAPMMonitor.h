@interface WCFinderPlayAPMMonitor : NSObject <CNetworkStatusExt>
{
    unsigned long long _lastNetworkType; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)reportDiskFreeSpaceSize;
- (void)ReachabilityChange:(unsigned int)arg1;
- (unsigned long long)lastNetworkType;
- (void)setLastNetworkType:(unsigned long long)arg1;
@end
