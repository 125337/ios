@interface AACHapticEngineManager : NSObject
{
    BOOL _engineStatus; // +0x8
    BOOL _isAudioInteruptBegan; // +0x9
    BOOL _headphonesConnected; // +0xa
    BOOL _isBackgroundAudioMode; // +0xb
    BOOL _isNeedResetCategory; // +0xc
    CHHapticEngine * _engine; // +0x10
    NSMutableArray * _ahapAry; // +0x18
    NSRecursiveLock * _lock; // +0x20
    NSDate * _firstDate; // +0x28
    NSDate * _pauseDate; // +0x30
    NSDate * _startDate; // +0x38
    double _offsetTime; // +0x40
}
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (id)init;
- (id)ahapAry;
- (void)InitializeTheEngine;
- (void)startEngine;
- (void)stopEngine;
- (void)stopPlayer:(id)arg1;
- (double)getCurrentTime;
- (BOOL)invalidPlayerID:(long long)arg1;
- (BOOL)stopCoreHaptic:(long long)arg1;
- (long long)startPlayHapticWithAhapPath:(id)arg1 patternAry:(id)arg2 mode:(unsigned long long)arg3 delayTime:(double)arg4 Loop:(unsigned long long)arg5 amplitude:(id)arg6 playProgress:(id /* block */)arg7 error:(id /* block */)arg8;
- (id)StripAudioPath:(id)arg1 :(id)arg2;
- (void)statrtPlayerWithPattern:(id)arg1 currentCount:(int)arg2;
- (BOOL)sendParameters:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(id /* block */)arg4;
- (BOOL)scheduleParameterCurve:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(id /* block */)arg4;
- (BOOL)sendDelayIntervalTime:(double)arg1 ID:(long long)arg2;
- (void)sendLoopParameter:(int)arg1 :(int)arg2;
- (BOOL)isPlaying;
- (BOOL)seekTo:(int)arg1;
- (BOOL)pause;
- (BOOL)start;
- (void)removeObjecFromLockArry:(id)arg1;
- (void)addObjecToLockArry:(id)arg1;
- (id)copyObjecFromLockArry:(id)arg1;
- (void)dealloc;
- (id)engine;
- (void)setEngine:(id)arg1;
- (BOOL)engineStatus;
- (void)setEngineStatus:(BOOL)arg1;
- (BOOL)isAudioInteruptBegan;
- (void)setIsAudioInteruptBegan:(BOOL)arg1;
- (BOOL)headphonesConnected;
- (void)setHeadphonesConnected:(BOOL)arg1;
- (BOOL)isBackgroundAudioMode;
- (void)setIsBackgroundAudioMode:(BOOL)arg1;
- (BOOL)isNeedResetCategory;
- (void)setIsNeedResetCategory:(BOOL)arg1;
- (void)setAhapAry:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)firstDate;
- (void)setFirstDate:(id)arg1;
- (id)pauseDate;
- (void)setPauseDate:(id)arg1;
- (id)startDate;
- (void)setStartDate:(id)arg1;
- (double)offsetTime;
- (void)setOffsetTime:(double)arg1;
- (void).cxx_destruct;
@end
