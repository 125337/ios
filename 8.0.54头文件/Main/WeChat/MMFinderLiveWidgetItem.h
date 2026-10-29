@interface MMFinderLiveWidgetItem : NSObject
{
    BOOL _alwaysAtLast; // +0x8
    BOOL _hideWhenConnectMic; // +0x9
    double _leadForEnterAnimation; // +0x10
    UIView * _view; // +0x18
    double _prepareToNormalStateDuration; // +0x20
    id /* block */ _prepareWeaken; // +0x28
    id /* block */ _enterCallback; // +0x30
    id /* block */ _changeStateCallback; // +0x38
    id /* block */ _changeToEnterStateCallbackForLayoutStyleChange; // +0x40
    id /* block */ _changeToNormalStateCallbackForLayoutStyleChange; // +0x48
}
- (BOOL)alwaysAtLast;
- (void)setAlwaysAtLast:(BOOL)arg1;
- (BOOL)hideWhenConnectMic;
- (void)setHideWhenConnectMic:(BOOL)arg1;
- (double)leadForEnterAnimation;
- (void)setLeadForEnterAnimation:(double)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (double)prepareToNormalStateDuration;
- (void)setPrepareToNormalStateDuration:(double)arg1;
- (id /* block */)prepareWeaken;
- (void)setPrepareWeaken:(id /* block */)arg1;
- (id /* block */)enterCallback;
- (void)setEnterCallback:(id /* block */)arg1;
- (id /* block */)changeStateCallback;
- (void)setChangeStateCallback:(id /* block */)arg1;
- (id /* block */)changeToEnterStateCallbackForLayoutStyleChange;
- (void)setChangeToEnterStateCallbackForLayoutStyleChange:(id /* block */)arg1;
- (id /* block */)changeToNormalStateCallbackForLayoutStyleChange;
- (void)setChangeToNormalStateCallbackForLayoutStyleChange:(id /* block */)arg1;
- (void).cxx_destruct;
@end

