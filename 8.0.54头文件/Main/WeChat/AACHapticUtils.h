@interface AACHapticUtils : NSObject
+ (BOOL)supportRichTap;
+ (double)getCurrentTime;
+ (BOOL)invalidPlayerID:(long long)arg1;
+ (BOOL)stopCoreHaptic:(long long)arg1;
+ (long long)startPlayHapticWithAhapPath:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 error:(id /* block */)arg6;
+ (long long)startPlayHapticWithHEPath:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 error:(id /* block */)arg6;
+ (long long)startPlayHapticWithHEPath:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 playProgress:(id /* block */)arg6 error:(id /* block */)arg7;
+ (long long)startPlayHapticWithHEJsonString:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 error:(id /* block */)arg6;
+ (long long)startPlayHapticWithHEJsonString:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 playProgress:(id /* block */)arg6 error:(id /* block */)arg7;
+ (long long)startPlayHapticWithAHAPJsonString:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 error:(id /* block */)arg6;
+ (long long)InsertShortSignal:(id)arg1 type:(unsigned long long)arg2 delayTime:(double)arg3 error:(id /* block */)arg4;
+ (BOOL)sendParameters:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(id /* block */)arg4;
+ (BOOL)sendDynamicParametersJSONString:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(id /* block */)arg4;
+ (BOOL)scheduleParameterCurve:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(id /* block */)arg4;
+ (BOOL)scheduleCurveParameterJSONString:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(id /* block */)arg4;
+ (BOOL)sendDelayIntervalTime:(double)arg1 ID:(long long)arg2;
+ (void)quit;
+ (void)startEngine;
+ (void)stopEngine;
+ (void)stop;
+ (BOOL)isPlaying;
+ (BOOL)seekTo:(int)arg1;
+ (BOOL)pause;
+ (BOOL)start;
+ (void)playPatternWithAudio:(id)arg1 :(id)arg2 :(int)arg3;
+ (void)playExtPrebakedForHe:(int)arg1 :(int)arg2;
+ (long long)startPlayHapticWithHEPath:(id)arg1 delayTime:(double)arg2 Loop:(unsigned long long)arg3 error:(id /* block */)arg4;
+ (void)playEnvelope:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned char)arg4;
+ (void)playEnvelope:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned char)arg4 :(int)arg5;
+ (void)playPattern:(id)arg1 :(int)arg2;
+ (void)playPattern:(id)arg1 :(int)arg2 :(int)arg3 :(id /* block */)arg4;
+ (void)playPattern:(id)arg1 :(int)arg2 :(int)arg3;
+ (void)sendLoopParameter:(int)arg1 :(int)arg2;
@end

