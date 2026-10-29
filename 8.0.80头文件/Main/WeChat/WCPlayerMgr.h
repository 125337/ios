@interface WCPlayerMgr : MMUserService <WCPlayerCoreAdapterDelegate, MMServiceProtocol>
{
    BOOL _bDownloadProxyInitFail; // +0x8
    BOOL _isAppResignActive; // +0x9
    BOOL _isBluetoothAudioRoute; // +0xa
    int _localServerReinitFailCount; // +0xc
    unsigned int _taskCount; // +0x10
    unsigned int _lastNoDataBufferingTime; // +0x14
    unsigned int _backgroundSequence; // +0x18
    NSMutableArray * _arrAggregate; // +0x20
    NSObject<OS_dispatch_queue> * _audioSessionQueue; // +0x28
    double _currOutputVolume; // +0x30
    NSMutableArray * _arrBufferingTimes; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (id)shareQueue;
- (unsigned int)getBackgroundSeq;
- (double)getCurrOutputVolume;
- (BOOL)isAppResignActive;
- (BOOL)isPictureInPictureSupported;
- (void)setDownloadProxyInitFail;
- (BOOL)isProxyUnavailable;
- (void)onLocalServerReinitFail;
- (unsigned int)newPlayerTaskId;
- (void)addNotification;
- (void)onApplicationBecomeActive;
- (void)onApplicationWillResignActive;
- (void)startObserveAudioRoute;
- (void)stopObserveAudioRoute;
- (void)updateAudioRouteCache;
- (BOOL)isBluetoothAudioRouteActive;
- (void)startObserveOutputVolume;
- (void)stopObserveOutputVolume;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addPlayerObj:(id)arg1;
- (void)removePlayerObj:(id)arg1;
- (BOOL)hasAnyUnMutePlayingPlayer;
- (BOOL)isPlayingWithFilePath:(id)arg1;
- (id)getAllPlayingItemsIdentifier;
- (BOOL)isPlayingWithIdentifier:(id)arg1;
- (BOOL)isPlayingWithPlayerScene:(unsigned long long)arg1;
- (id)getPlayerPlaybackInfoWithIdentifier:(id)arg1;
- (void)setScreenLightAlways:(BOOL)arg1;
- (unsigned int)getAndIncPlayCount:(id)arg1;
- (unsigned int)clearAllPlayerWithPlayerScene:(unsigned long long)arg1;
- (void)onPlayerStartBuffering:(id)arg1;
- (unsigned long long)getHaveNoDataBufferingCount;
- (id)arrAggregate;
- (void)setArrAggregate:(id)arg1;
- (id)audioSessionQueue;
- (void)setAudioSessionQueue:(id)arg1;
- (BOOL)bDownloadProxyInitFail;
- (void)setBDownloadProxyInitFail:(BOOL)arg1;
- (int)localServerReinitFailCount;
- (void)setLocalServerReinitFailCount:(int)arg1;
- (unsigned int)taskCount;
- (void)setTaskCount:(unsigned int)arg1;
- (void)setIsAppResignActive:(BOOL)arg1;
- (double)currOutputVolume;
- (void)setCurrOutputVolume:(double)arg1;
- (unsigned int)lastNoDataBufferingTime;
- (void)setLastNoDataBufferingTime:(unsigned int)arg1;
- (id)arrBufferingTimes;
- (void)setArrBufferingTimes:(id)arg1;
- (unsigned int)backgroundSequence;
- (void)setBackgroundSequence:(unsigned int)arg1;
- (BOOL)isBluetoothAudioRoute;
- (void)setIsBluetoothAudioRoute:(BOOL)arg1;
- (void).cxx_destruct;
@end
