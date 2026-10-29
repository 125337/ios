@interface TencentLBSIndoorPDRManager : NSObject
{
    BOOL _isBleLocationStart; // +0x8
    int _startNum; // +0xc
    int _mSteps; // +0x10
    TencentLBSSensorManager * _sensorManager; // +0x18
    NSObject<OS_dispatch_source> * _timer; // +0x20
    NSObject<OS_dispatch_source> * _pdrCalbackTimer; // +0x28
    double _heading; // +0x30
    NSMutableArray * _pdrCallBacks; // +0x38
    long long _lastPdrUpdateT; // +0x40
    long long _lastPdrCallbackT; // +0x48
    long long _startpdrT; // +0x50
    double _bleArriveTime; // +0x58
}
+ (id)sharedInstance;
- (id)init;
- (void)setPdrCallBackBlock:(id /* block */)arg1;
- (void)removePdrcallbackFromArray:(id /* block */)arg1;
- (void)startPdr;
- (void)setPdrCoorType:(int)arg1;
- (void)onBleLocationCreateWithlat:(double)arg1 lng:(double)arg2 accuracy:(double)arg3 building:(id)arg4 floor:(id)arg5;
- (void)stopPdr;
- (int)obtainPdrSteps;
- (void)startPdrInPdrQueue;
- (void)inPdrQueueBleLocationCreateWithlat:(double)arg1 lng:(double)arg2 accuracy:(double)arg3 building:(id)arg4 floor:(id)arg5;
- (void)stopPdrInQueue;
- (id)sensorManager;
- (void)setSensorManager:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)pdrCalbackTimer;
- (void)setPdrCalbackTimer:(id)arg1;
- (double)heading;
- (void)setHeading:(double)arg1;
- (int)startNum;
- (void)setStartNum:(int)arg1;
- (BOOL)isBleLocationStart;
- (void)setIsBleLocationStart:(BOOL)arg1;
- (id)pdrCallBacks;
- (void)setPdrCallBacks:(id)arg1;
- (long long)lastPdrUpdateT;
- (void)setLastPdrUpdateT:(long long)arg1;
- (long long)lastPdrCallbackT;
- (void)setLastPdrCallbackT:(long long)arg1;
- (long long)startpdrT;
- (void)setStartpdrT:(long long)arg1;
- (double)bleArriveTime;
- (void)setBleArriveTime:(double)arg1;
- (int)mSteps;
- (void)setMSteps:(int)arg1;
- (void).cxx_destruct;
@end

