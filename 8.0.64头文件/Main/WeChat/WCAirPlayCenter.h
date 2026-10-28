@interface WCAirPlayCenter : NSObject
{
    NSObject<OS_dispatch_queue> * _audioQueue; // +0x8
    AVAudioSessionRouteDescription * _cachedRoute; // +0x10
}
+ (id)sharedCenter;
- (id)init;
- (BOOL)isAirPlaying;
- (long long)currentAirPlayMode;
- (BOOL)isExternalPlaybackMode;
- (BOOL)isExternalScreenMode;
- (id)__currentRoute;
- (id)_getCurrentRouteSynchronously;
- (void)_updateCachedRouteAsynchronously;
- (void)audioSessionRouteChange:(id)arg1;
- (id)cachedRoute;
- (void)setCachedRoute:(id)arg1;
- (void).cxx_destruct;
@end
