@interface MatrixGPUUtilization : NSObject
{
    float _deviceUtilization; // +0x8
    float _rendererUtilization; // +0xc
    float _tilerUtilization; // +0x10
}
+ (BOOL)isSupported;
+ (id)currentGPUUtilization;
+ (id)__getPerformanceStatistics;
+ (id)__getPerformanceStatisticsForSGX:(BOOL)arg1;
+ (id)__getPerformanceStatisticsForIntel;
+ (id)__getPerformanceStatisticsFromIteractor:(unsigned int)arg1 fastPath:(BOOL)arg2 outGpuEntry:(unsigned int *)arg3;
- (void)add:(id)arg1;
- (void)divideBy:(unsigned long long)arg1;
- (float)deviceUtilization;
- (void)setDeviceUtilization:(float)arg1;
- (float)rendererUtilization;
- (void)setRendererUtilization:(float)arg1;
- (float)tilerUtilization;
- (void)setTilerUtilization:(float)arg1;
@end
