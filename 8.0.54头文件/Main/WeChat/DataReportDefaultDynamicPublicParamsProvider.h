@interface DataReportDefaultDynamicPublicParamsProvider : NSObject <DataReportDynamicPublicParamsProvider>
{
    NSString * m_deviceModel; // +0x8
    NSString * m_osVersion; // +0x10
    NSString * m_ipv4; // +0x18
    NSString * m_ipv6; // +0x20
    unsigned long long m_lastGetIPTime; // +0x28
}
- (void)setDynamicPublicParams:(id)arg1;
- (void)setDynamicPublicEventParams:(id)arg1 params:(id)arg2;
- (long long)getNetworkType:(int)arg1;
- (id)getIPV6Address:(id)arg1;
- (id)getIPV4Address:(id)arg1;
- (id)getIPAddressArray;
- (BOOL)isValidatIP:(id)arg1;
- (void).cxx_destruct;
@end

