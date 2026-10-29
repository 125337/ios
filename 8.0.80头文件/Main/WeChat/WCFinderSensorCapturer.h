@interface WCFinderSensorCapturer : NSObject <WCProximityStateRecognizerDelegate>
{
    CMMotionManager * _motionMgr; // +0x8
    NSMutableArray * _acceDataArray; // +0x10
    NSMutableArray * _gyroDataArray; // +0x18
    NSMutableArray * _magnDataArray; // +0x20
    NSMutableArray * _proximityStateList; // +0x28
    NSMutableArray * _screenBrightnessList; // +0x30
    unsigned long long _lastReportTime; // +0x38
    unsigned long long _minCount; // +0x40
    MMTimer * _timer; // +0x48
}
+ (id)getClientAudioInfo;
- (id)init;
- (void)captureDataWithInterval:(double)arg1 minCount:(unsigned long long)arg2;
- (void)captureDataWithOptions:(unsigned long long)arg1 interval:(double)arg2 minCount:(unsigned long long)arg3;
- (void)startAccelerometerUpdates;
- (void)stopAccelerometerUpdates;
- (void)startGyroUpdates;
- (void)stopGyroUpdates;
- (void)startMagnetometerUpdates;
- (void)stopMagnetometerUpdates;
- (void)startProximityUpdates;
- (void)stopProximityUpdates;
- (void)startBrightnessMonitor;
- (void)stopBrightnessMonitor;
- (void)brightnessDidChange:(id)arg1;
- (void)stopCaptureDataIfOk;
- (void)processSensorData:(id)arg1;
- (void)report;
- (void)reset;
- (id)acceDataArray;
- (id)gyroDataArray;
- (id)magnDataArray;
- (id)proximityStateList;
- (id)screenBrightnessList;
- (void)onProximityStateChangeToCloseEar;
- (void)onProximityStateChangeToAwayFromEar;
- (id)motionMgr;
- (void)setMotionMgr:(id)arg1;
- (void)setAcceDataArray:(id)arg1;
- (void)setGyroDataArray:(id)arg1;
- (void)setMagnDataArray:(id)arg1;
- (void)setProximityStateList:(id)arg1;
- (void)setScreenBrightnessList:(id)arg1;
- (unsigned long long)lastReportTime;
- (void)setLastReportTime:(unsigned long long)arg1;
- (unsigned long long)minCount;
- (void)setMinCount:(unsigned long long)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
