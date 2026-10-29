@interface _MpBindPhoneHelper : NSObject <WCAccountBindPhoneControlLogicDelegate>
{
    WCAccountBindPhoneControlLogic * _bindLogic; // +0x8
    id _retainCycle; // +0x10
    id /* block */ _completion; // +0x18
}
- (void)start;
- (void)finishWithBound:(BOOL)arg1;
- (void)scheduleBindPhoneWatchdog;
- (BOOL)bindPhonePageOnScreen;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (id)bindLogic;
- (void)setBindLogic:(id)arg1;
- (id)retainCycle;
- (void)setRetainCycle:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
