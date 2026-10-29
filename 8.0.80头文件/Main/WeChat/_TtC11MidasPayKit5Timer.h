@interface _TtC11MidasPayKit5Timer : NSObject
{
     timeout; // +0x8
     shouldHandleResignActive; // +0x10
     repeats; // +0x11
     timeoutAction; // +0x18
     resignActiveAction; // +0x28
     stopAction; // +0x38
     isTimeoutActionFired; // +0x48
     isAppActive; // +0x49
}
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)fireTimeoutAction;
- (void)fireStopAction;
- (void)fireResignActiveAction;
- (id)init;
- (void).cxx_destruct;
@end
