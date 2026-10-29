@interface CameraScanEnergyTracker : NSObject
{
    BOOL _isTracking; // +0x8
    BOOL _isReported; // +0x9
    unsigned int _sessionId; // +0xc
    unsigned int _prevNumCPUInfo; // +0x10
    id <CameraScanEnergyTrackerDelegate> _delegate; // +0x18
    unsigned long long _scene; // +0x20
    unsigned long long _scanStartTime; // +0x28
    unsigned long long _lastStateChangeTime; // +0x30
    long long _lastThermalState; // +0x38
    long long _enterThermalState; // +0x40
    long long _thermalStateSnapshot; // +0x48
    NSMutableArray * _thermalDurations; // +0x50
    NSMutableArray * _thermalEvents; // +0x58
    NSMutableArray * _appCPUSamples; // +0x60
    NSMutableArray * _deviceCPUSamples; // +0x68
    int * _prevCPUInfo; // +0x70
    NSObject<OS_dispatch_queue> * _samplingQueue; // +0x78
    NSObject<OS_dispatch_source> * _sampleTimer; // +0x80
    long long _sampleCounter; // +0x88
    unsigned long long _trackingStartTime; // +0x90
    NSMutableArray * _frameRateSamples; // +0x98
    unsigned long long _frameCount; // +0xa0
    unsigned long long _lastSecondFrameCount; // +0xa8
    NSRecursiveLock * _samplesLock; // +0xb0
    NSRecursiveLock * _thermalLock; // +0xb8
}
- (id)initWithScene:(unsigned long long)arg1 sessionId:(unsigned int)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)startTracking;
- (void)stopTracking;
- (void)startThermalTracking;
- (void)onThermalStateChange:(id)arg1;
- (void)stopThermalTracking;
- (long long)calculateThermalLevel;
- (long long)thermalWeightedScore;
- (id)compressedThermalTrace;
- (void)startSampling;
- (void)sampleTimerFiredOnBackgroundQueue;
- (void)stopSampling;
- (double)appCPUUsage;
- (double)appCPUAverage;
- (double)appCPUMax;
- (double)deviceCPUUsage;
- (double)deviceCPUAverage;
- (double)deviceCPUMax;
- (void)recordFrameDecoded;
- (double)actualFrameRate;
- (long long)totalFrameCount;
- (void)reportSamplingData;
- (long long)optValueForReport;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isTracking;
- (void)setIsTracking:(BOOL)arg1;
- (BOOL)isReported;
- (void)setIsReported:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (unsigned long long)scanStartTime;
- (void)setScanStartTime:(unsigned long long)arg1;
- (unsigned long long)lastStateChangeTime;
- (void)setLastStateChangeTime:(unsigned long long)arg1;
- (long long)lastThermalState;
- (void)setLastThermalState:(long long)arg1;
- (long long)enterThermalState;
- (void)setEnterThermalState:(long long)arg1;
- (long long)thermalStateSnapshot;
- (void)setThermalStateSnapshot:(long long)arg1;
- (id)thermalDurations;
- (void)setThermalDurations:(id)arg1;
- (id)thermalEvents;
- (void)setThermalEvents:(id)arg1;
- (id)appCPUSamples;
- (void)setAppCPUSamples:(id)arg1;
- (id)deviceCPUSamples;
- (void)setDeviceCPUSamples:(id)arg1;
- (int *)prevCPUInfo;
- (void)setPrevCPUInfo:(int *)arg1;
- (unsigned int)prevNumCPUInfo;
- (void)setPrevNumCPUInfo:(unsigned int)arg1;
- (id)samplingQueue;
- (void)setSamplingQueue:(id)arg1;
- (id)sampleTimer;
- (void)setSampleTimer:(id)arg1;
- (long long)sampleCounter;
- (void)setSampleCounter:(long long)arg1;
- (unsigned long long)trackingStartTime;
- (void)setTrackingStartTime:(unsigned long long)arg1;
- (id)frameRateSamples;
- (void)setFrameRateSamples:(id)arg1;
- (unsigned long long)frameCount;
- (void)setFrameCount:(unsigned long long)arg1;
- (unsigned long long)lastSecondFrameCount;
- (void)setLastSecondFrameCount:(unsigned long long)arg1;
- (id)samplesLock;
- (void)setSamplesLock:(id)arg1;
- (id)thermalLock;
- (void)setThermalLock:(id)arg1;
- (void).cxx_destruct;
@end
