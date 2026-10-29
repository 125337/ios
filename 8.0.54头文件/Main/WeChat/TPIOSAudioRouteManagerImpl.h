@interface TPIOSAudioRouteManagerImpl : NSObject <ITPAppleAudioRouteImpl>
{
    set<ITPAudioRouteManagerCallback *, std::less<ITPAudioRouteManagerCallback *>, std::allocator<ITPAudioRouteManagerCallback *>> _callbacks; // +0x8
    deque<TPAudioRouteDescription, std::allocator<TPAudioRouteDescription>> _currentRoutes; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)addCallback:(ITPAudioRouteManagerCallback *)arg1;
- (void)removeCallback:(ITPAudioRouteManagerCallback *)arg1;
- (deque<TPAudioRouteDescription, std::allocator<TPAudioRouteDescription>>)getCurrentRoutes;
- (BOOL)isRouteTypeOn:(int)arg1;
- (int)getRouteTypeFromAVAudioSessionPort:(id)arg1;
- (void)updateCurrentRoutesFromOutputs:(id)arg1;
- (void)initCurrentRoutes;
- (void)registerObserver;
- (void)unRegisterObserver;
- (void)onAudioSessionRouteChange:(id)arg1;
- (void)updateCurrentRoute:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

