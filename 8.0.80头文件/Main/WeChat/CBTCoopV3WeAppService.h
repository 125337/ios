@interface CBTCoopV3WeAppService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
+ (BOOL)shouldSkipHandoffForTask:(id)arg1 handoff:(id)arg2;
+ (BOOL)isAgentCardScene:(unsigned long long)arg1;
+ (BOOL)markPreRenderedIfNeededForKey:(id)arg1;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleGetIcon:(id)arg1;
- (void)sendIconResponse:(id)arg1 url:(id)arg2 displayName:(id)arg3;
- (void)handleLaunchWeApp:(id)arg1;
- (id)launchContextFromPayload:(id)arg1;
- (void)doOpenWeApp:(id)arg1;
- (id)agentSessionIdForAppId:(id)arg1;
- (void)handlePreRenderWeApp:(id)arg1;
- (void)doPreRenderWeApp:(id)arg1;
- (id)topViewController;
- (void).cxx_destruct;
@end
