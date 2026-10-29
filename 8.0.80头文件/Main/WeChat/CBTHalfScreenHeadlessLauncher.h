@interface CBTHalfScreenHeadlessLauncher : NSObject
{
    NSMutableSet * _placeholderPushedKeys; // +0x8
    NSMutableDictionary * _sdkDelayedDestroyGenerations; // +0x10
    NSMutableSet * _headlessAudioActiveKeys; // +0x18
    NSMutableDictionary * _presentFromVCProviders; // +0x20
    NSMutableDictionary * _launchDismissedCallbacks; // +0x28
}
+ (id)sharedInstance;
- (id)init;
- (void)setPresentFromVCProvider:(id /* block */)arg1 forBusinessIdPrefix:(id)arg2;
- (id)presentFromVCForInstanceKey:(id)arg1;
- (void)setLaunchDismissedCallback:(id /* block */)arg1 forBusinessIdPrefix:(id)arg2;
- (void)notifyLaunchDismissedForInstanceKey:(id)arg1;
- (void)createEngineWithoutPresent:(id)arg1 launchRevision:(unsigned long long)arg2;
- (void)presentPlaceholderEngine:(id)arg1 launchRevision:(unsigned long long)arg2 routeUrl:(id)arg3;
- (BOOL)isPlaceholderPushed:(id)arg1;
- (void)handleLaunchDismissed:(id)arg1;
- (void)handleSessionDestroyed:(id)arg1;
- (void)parseRouteUrl:(id)arg1 routeName:(id *)arg2 params:(id *)arg3;
- (void)handleHeadlessLaunchFailure:(id)arg1 launchRevision:(unsigned long long)arg2;
- (void)releaseHeadlessAudioIfNeeded:(id)arg1;
- (void)scheduleSdkDelayedDestroy:(id)arg1;
- (void)cancelSdkDelayedDestroy:(id)arg1;
- (void)sdkDelayedDestroyFire:(id)arg1;
- (id)placeholderPushedKeys;
- (void)setPlaceholderPushedKeys:(id)arg1;
- (id)sdkDelayedDestroyGenerations;
- (void)setSdkDelayedDestroyGenerations:(id)arg1;
- (id)headlessAudioActiveKeys;
- (void)setHeadlessAudioActiveKeys:(id)arg1;
- (id)presentFromVCProviders;
- (void)setPresentFromVCProviders:(id)arg1;
- (id)launchDismissedCallbacks;
- (void)setLaunchDismissedCallbacks:(id)arg1;
- (void).cxx_destruct;
@end
