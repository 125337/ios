@interface MMNetworkStatistics : NSObject
{
    unsigned long long _wifiSent; // +0x8
    unsigned long long _wifiReceived; // +0x10
    unsigned long long _wwanSent; // +0x18
    unsigned long long _wwanReceived; // +0x20
}
- (unsigned long long)totalWifiUsage;
- (unsigned long long)totalWwanUsage;
- (id)diff:(id)arg1;
- (void)add:(id)arg1;
- (void)divideBySeconds:(unsigned long long)arg1;
- (unsigned long long)wifiSent;
- (void)setWifiSent:(unsigned long long)arg1;
- (unsigned long long)wifiReceived;
- (void)setWifiReceived:(unsigned long long)arg1;
- (unsigned long long)wwanSent;
- (void)setWwanSent:(unsigned long long)arg1;
- (unsigned long long)wwanReceived;
- (void)setWwanReceived:(unsigned long long)arg1;
@end
