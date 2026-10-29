@interface MMLiveMetricsInfoRecordInfo : NSObject <NSCopying>
{
    double _appCPUUsage; // +0x8
    double _deviceGPUUsage; // +0x10
    double _footprintMemory; // +0x18
}
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (double)appCPUUsage;
- (void)setAppCPUUsage:(double)arg1;
- (double)deviceGPUUsage;
- (void)setDeviceGPUUsage:(double)arg1;
- (double)footprintMemory;
- (void)setFootprintMemory:(double)arg1;
@end
