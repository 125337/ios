@interface MMFinderLiveKTVPerfAdjustLogic : NSObject
{
    BOOL _isBlackStreamFpsNeedUpdate; // +0x8
    unsigned long long _device; // +0x10
    id <MMLiveUniqueTaskId> _taskId; // +0x18
    long long _thermalState; // +0x20
}
+ (unsigned long long)getPerfDeviceType;
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)initNotifications;
- (void)updateThermalState:(long long)arg1;
- (int)maxBlackStreamFPS;
- (int)minBlackStreamFPS;
- (void)updateBlackStreamFPSNeedUpdate:(BOOL)arg1;
- (int)adjustBlackStreamFPSIfNeed:(int)arg1;
- (void)onMatrixPerfWarning:(id)arg1;
- (unsigned long long)device;
- (void)setDevice:(unsigned long long)arg1;
- (BOOL)isBlackStreamFpsNeedUpdate;
- (void)setIsBlackStreamFpsNeedUpdate:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (void).cxx_destruct;
@end
