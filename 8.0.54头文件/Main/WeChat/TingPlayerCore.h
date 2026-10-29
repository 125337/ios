@interface TingPlayerCore : NSObject <TingPlayingInfoDelegate>
{
    long long _playerId; // +0x8
    TingPlayingInfo * _playingInfo; // +0x10
    TingBizPlayer * _preloadBizPlayer; // +0x18
    TingBizPlayer * _holdBizPlayer; // +0x20
    TingTPResourceLoader * _resourceLoader; // +0x28
    NSMutableArray * _pendingStopList; // +0x30
}
- (void)logInfo:(id)arg1;
- (void)logError:(id)arg1;
- (id)init;
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
- (void)stopPreloadBizPlayer;
- (id)userInfoFromError:(id)arg1 tingItem:(id)arg2;
- (id)parseErrorFromUserInfo:(id)arg1;
- (id)parseTingItemFromUserInfo:(id)arg1;
- (id)currentDisplayElement;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 statusChanged:(int)arg3;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 onInfoEvent:(int)arg3 error:(id)arg4;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 onDisplayElementFrameOut:(id)arg3;
- (void)tingPlayingInfo:(id)arg1 bizPlayer:(id)arg2 onDisplayElementAvailable:(id)arg3;
- (void)tingPlayingInfo:(id)arg1 onDisplayViewMTKViewCreated:(id)arg2;
- (void)setPlayRate:(float)arg1;
- (float)playRate;
- (BOOL)isPlayRateSupported;
- (void)setVolume:(float)arg1;
- (id)pendingStopList;
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
- (id)preloadBizPlayer;
- (void)setPreloadBizPlayer:(id)arg1;
- (id)holdBizPlayer;
- (void)setHoldBizPlayer:(id)arg1;
- (id)resourceLoader;
- (void)setResourceLoader:(id)arg1;
- (void)setPendingStopList:(id)arg1;
- (void).cxx_destruct;
@end

