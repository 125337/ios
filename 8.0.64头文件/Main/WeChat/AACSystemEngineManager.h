@interface AACSystemEngineManager : NSObject
{
    NSMutableArray * _playIDAry; // +0x8
}
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
- (id)playIDAry;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (id)init;
- (void)applicationBecomeActive:(id)arg1;
- (void)applicationEnterBackground:(id)arg1;
- (double)getCurrentTime;
- (BOOL)invalidPlayerID:(long long)arg1;
- (BOOL)stopSystyemAudio:(long long)arg1;
- (long long)startPlayHapticWithAhapPath:(id)arg1 patternAry:(id)arg2 delayTime:(double)arg3 allTime:(double)arg4 Loop:(unsigned long long)arg5 playProgress:(id /* block */)arg6 error:(id /* block */)arg7;
- (BOOL)sendDelayIntervalTime:(double)arg1 ID:(long long)arg2;
- (void)sendLoopParameter:(int)arg1 :(int)arg2;
- (BOOL)isPlaying;
- (BOOL)seekTo:(int)arg1;
- (BOOL)pause;
- (BOOL)start;
- (void)removeObjecFromLockArry:(id)arg1;
- (void)addObjecToLockArry:(id)arg1;
- (id)copyObjecFromLockArry:(id)arg1;
- (void)setPlayIDAry:(id)arg1;
- (void).cxx_destruct;
@end
