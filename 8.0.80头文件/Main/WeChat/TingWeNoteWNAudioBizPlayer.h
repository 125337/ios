@interface TingWeNoteWNAudioBizPlayer : TingBizPlayer <IWNAudioMgrExt>
{
    BOOL _hasCallPrepared; // +0x8
    BOOL _hasCallStartPlayBeforePrepared; // +0x9
    BOOL _wnExtRegistered; // +0xa
    BOOL _userPaused; // +0xb
    BOOL _intentionalStop; // +0xc
    unsigned int _lastOffsetMs; // +0x10
    unsigned int _pausedOffsetMs; // +0x14
    unsigned int _pendingSeekMs; // +0x18
}
- (void)dealloc;
- (id)resolvedLocalPath;
- (id)wnPlayObjectId;
- (BOOL)isOurWNAudioTrackActive;
- (void)tingWeNoteEnsureWNAudioExt;
- (void)tingWeNoteUnregisterWNAudioExt;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnEndPlayWNAudio:(id)arg1;
- (int)playerKernelType;
- (BOOL)isPlayRateSupported;
- (BOOL)canSeek;
- (double)duration;
- (double)currentTime;
- (double)displayTime;
- (double)bufferedTime;
- (void)reset;
- (void)prepareToPlay;
- (void)startWNPlaybackFromOffsetMs:(unsigned int)arg1;
- (void)play;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)seekToTime:(double)arg1;
- (BOOL)hasCallPrepared;
- (void)setHasCallPrepared:(BOOL)arg1;
- (BOOL)hasCallStartPlayBeforePrepared;
- (void)setHasCallStartPlayBeforePrepared:(BOOL)arg1;
- (BOOL)wnExtRegistered;
- (void)setWnExtRegistered:(BOOL)arg1;
- (BOOL)userPaused;
- (void)setUserPaused:(BOOL)arg1;
- (BOOL)intentionalStop;
- (void)setIntentionalStop:(BOOL)arg1;
- (unsigned int)lastOffsetMs;
- (void)setLastOffsetMs:(unsigned int)arg1;
- (unsigned int)pausedOffsetMs;
- (void)setPausedOffsetMs:(unsigned int)arg1;
- (unsigned int)pendingSeekMs;
- (void)setPendingSeekMs:(unsigned int)arg1;
@end
