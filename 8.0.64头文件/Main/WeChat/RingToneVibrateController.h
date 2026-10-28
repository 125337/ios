@interface RingToneVibrateController : NSObject
{
    BOOL _storageFilelongTermIfNeed; // +0x8
    BOOL _isVibrating; // +0x9
    id <RingToneVibrateDataSource> _dataSource; // +0x10
    id /* block */ _onVibrate; // +0x18
    NSString * _identifier; // +0x20
}
+ (BOOL)VibrateEnabled;
+ (BOOL)SupportCustomizedVibrate;
+ (BOOL)CustomizedVibrateEnabled;
+ (BOOL)CustomizedVibrateEnabledWhileAuditioning;
+ (BOOL)CustomizedVibrateEnabledWhileAPPBackground;
+ (void)ClassicsRepeatVibration;
- (void)executeInHapticQueueWithBlock:(id /* block */)arg1;
- (void)checkAndPlayVibrateFile:(id)arg1;
- (void)replay;
- (void)stop;
- (void)tryVibrateWithRingID:(id)arg1;
- (double)getVibrateProgressWithStartPlayTime:(unsigned long long)arg1;
- (void)setIsVibrating:(BOOL)arg1;
- (void)applicationWillBecomeActive;
- (void)applicationEnterBackground;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)storageFilelongTermIfNeed;
- (void)setStorageFilelongTermIfNeed:(BOOL)arg1;
- (id /* block */)onVibrate;
- (void)setOnVibrate:(id /* block */)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (BOOL)isVibrating;
- (void).cxx_destruct;
@end
