@interface WCFinderJumpInfoLiteAppPluginSchedulerHandler : NSObject <LiteAppLifeCycleCallbackDelegate>
{
    BOOL _isBeingDismissed; // +0x8
    int _businessType; // +0xc
    UIViewController * _fromVC; // +0x10
    MMLiteAppViewController * _toLiteAppVC; // +0x18
}
- (void)handleLifeCycleEvent:(unsigned long long)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)toLiteAppVC;
- (void)setToLiteAppVC:(id)arg1;
- (int)businessType;
- (void)setBusinessType:(int)arg1;
- (BOOL)isBeingDismissed;
- (void)setIsBeingDismissed:(BOOL)arg1;
- (void).cxx_destruct;
@end

