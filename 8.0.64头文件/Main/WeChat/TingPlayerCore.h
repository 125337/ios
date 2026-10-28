@interface TingPlayerCore : NSObject <TingBizPlayerDelegate>
{
    BOOL _isAuditoryEnhEnable; // +0x8
    int _auditoryEnhMode; // +0xc
    long long _playerId; // +0x10
    TingPlayingInfo * _playingInfo; // +0x18
    TingBizPlayer * _bizPlayer; // +0x20
    TingBizPlayer * _holdBizPlayer; // +0x28
    TingTPResourceLoader * _resourceLoader; // +0x30
}
- (void)logInfo:(id)arg1;
- (void)logError:(id)arg1;
- (id)init;
- (void)setBizPlayer:(id)arg1;
- (void)loadItem:(id)arg1;
- (void)playWithItem:(id)arg1;
- (void)createPlayingInfoWithItem:(id)arg1;
- (void)pleload:(id)arg1;
- (BOOL)isNewTTSSentence:(id)arg1;
- (id)tingItemPreloadKey:(id)arg1;
- (void)play;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)clear;
- (BOOL)canSeek;
- (void)seekToTime:(double)arg1;
- (void)stopCurrentBizPlayer;
- (id)userInfoFromError:(id)arg1 tingItem:(id)arg2;
- (id)parseErrorFromUserInfo:(id)arg1;
- (id)parseTingItemFromUserInfo:(id)arg1;
- (id)currentDisplayElement;
- (void)setAudioMixPcmBuffer:(id)arg1 hasMore:(BOOL)arg2 streamType:(int)arg3 sampleRate:(int)arg4 sampleFormat:(int)arg5 channelCount:(int)arg6;
- (void)tingBizPlayer:(id)arg1 updateCurrentTime:(double)arg2 displayTime:(double)arg3 duration:(double)arg4;
- (void)tingBizPlayer:(id)arg1 onEvent:(int)arg2 error:(id)arg3;
- (void)tingBizPlayer:(id)arg1 onInfoEvent:(int)arg2 error:(id)arg3;
- (void)tingBizPlayer:(id)arg1 onDisplayFrameBufferOut:(id)arg2;
- (void)tingBizPlayer:(id)arg1 onDisplayElementAvailable:(id)arg2;
- (void)tingBizPlayerOnDisplayViewMTKViewCreated:(id)arg1;
- (void)setPlayRate:(float)arg1;
- (float)playRate;
- (BOOL)isPlayRateSupported;
- (void)setVolume:(float)arg1;
- (void)applyAuditoryEnhance:(BOOL)arg1 mode:(int)arg2;
- (id)getAuditoryEnhanceEffectArgs;
- (int)status;
- (double)currentTime;
- (double)displayTime;
- (double)duration;
- (double)bufferedTime;
- (id)tingItem;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (id)playingInfo;
- (void)setPlayingInfo:(id)arg1;
- (id)bizPlayer;
- (id)holdBizPlayer;
- (void)setHoldBizPlayer:(id)arg1;
- (id)resourceLoader;
- (void)setResourceLoader:(id)arg1;
- (BOOL)isAuditoryEnhEnable;
- (void)setIsAuditoryEnhEnable:(BOOL)arg1;
- (int)auditoryEnhMode;
- (void)setAuditoryEnhMode:(int)arg1;
- (void).cxx_destruct;
@end
