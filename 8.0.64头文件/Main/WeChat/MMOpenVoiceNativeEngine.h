@interface MMOpenVoiceNativeEngine : NSObject
+ (IWXConfService *)getConfInst;
+ (int)initEngine:(id)arg1 subAppId:(id)arg2 sessionKey:(id)arg3 audioType:(int)arg4 maxWidth:(int)arg5 maxHeight:(int)arg6 videoRatio:(int)arg7 videoConfig:(int)arg8 forceCellularNetwork:(BOOL)arg9 nCallback:(IWXConfCallback *)arg10;
+ (int)GetCPUCapacity;
+ (id)generateInitInfo:(id)arg1 subAppId:(id)arg2 sessionKey:(id)arg3 audioType:(int)arg4 maxWidth:(int)arg5 maxHeight:(int)arg6 videoRatio:(int)arg7 videoConfig:(int)arg8 forceCellularNetwork:(BOOL)arg9;
+ (int)updateSessionKey:(id)arg1;
+ (int)joinRoom:(long long)arg1 roomType:(int)arg2 networkType:(int)arg3 muteAudio:(BOOL)arg4 videoConfig:(int)arg5 videoRatio:(int)arg6 fixedVideoRes:(int)arg7 maxFPS:(int)arg8;
+ (int)sendAudioData:(id)arg1 delay:(int)arg2;
+ (int)getAudioData:(char *)arg1 dataLength:(int)arg2;
+ (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
+ (int)sendVideoData:(ImagePlane *)arg1;
+ (int)getVoiceActivity:(int)arg1;
+ (int)SwitchAV:(BOOL)arg1 bOpenVideo:(BOOL)arg2 bScreenStatus:(BOOL)arg3;
+ (int)setCmdData:(int)arg1 data:(id)arg2;
+ (int)setCmdData:(int)arg1 dataPtr:(char *)arg2 dataLen:(int)arg3;
+ (void)onNetworkChanged:(int)arg1;
+ (int)exitRoom:(int)arg1;
+ (int)uninit;
+ (int)imageConvert:(void *)arg1 dstImg:(void *)arg2;
+ (int)subScribeVideoAndResList:(id)arg1 screenMembers:(id)arg2;
+ (int)sendCmdMsg:(id)arg1 targetMemberId:(int)arg2;
@end
