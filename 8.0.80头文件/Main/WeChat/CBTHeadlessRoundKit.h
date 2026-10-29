@interface CBTHeadlessRoundKit : NSObject
{
    CBTHeadlessRoundKitTrampoline * _observerTrampoline; // +0x8
    CBTHeadlessVoiceObserver * _observerWrapper; // +0x10
}
+ (id)sharedInstance;
- (id)configDataFromRequest:(id)arg1;
- (void)ensureObserverAttached;
- (id)startRound:(id)arg1 delegate:(id)arg2;
- (id)observerTrampoline;
- (void)setObserverTrampoline:(id)arg1;
- (id)observerWrapper;
- (void)setObserverWrapper:(id)arg1;
- (void).cxx_destruct;
@end
