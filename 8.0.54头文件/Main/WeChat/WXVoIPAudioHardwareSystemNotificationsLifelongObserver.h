@interface WXVoIPAudioHardwareSystemNotificationsLifelongObserver : NSObject
{
    BOOL _isInterrupted; // +0x8
    BOOL _isAPPActive; // +0x9
    id <WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _delegateQueue; // +0x18
}
- (id)init:(id)arg1;
- (void)asyncRun:(id /* block */)arg1;
- (void)syncRun:(id /* block */)arg1;
- (void)runAfter:(int)arg1 block:(id /* block */)arg2;
- (void)initAPPActiveState;
- (void)observeSystemNotifications;
- (void)dealloc;
- (void)handleInterruption:(id)arg1;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleMediaServicesWereLost:(id)arg1;
- (void)handleMediaServicesWereReset:(id)arg1;
- (void)updateApplicationActiveState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isInterrupted;
- (void)setIsInterrupted:(BOOL)arg1;
- (BOOL)isAPPActive;
- (void)setIsAPPActive:(BOOL)arg1;
- (id)delegateQueue;
- (void)setDelegateQueue:(id)arg1;
- (void).cxx_destruct;
@end

