@interface WCFinderLandscapeLongPressEduStateController : NSObject
{
    BOOL _isEduHintShowing; // +0x8
    BOOL _opportunityConsumed; // +0x9
    id /* block */ _onApplyEduHintForRate; // +0x10
    id /* block */ _onExitEduHint; // +0x18
    NSTimer * _showTimer; // +0x20
    NSTimer * _dismissTimer; // +0x28
    double _lastKnownCurrentRate; // +0x30
}
- (void)dealloc;
- (void)tryStartShowTimerWithUseNewStyle:(BOOL)arg1;
- (void)notifyCurrentRateDidChange:(double)arg1;
- (void)longPressDidEnd;
- (void)notifyLockPanelDidShow;
- (void)resetOpportunity;
- (void)_enterEduHintMode;
- (void)_exitEduHintMode;
- (id /* block */)onApplyEduHintForRate;
- (void)setOnApplyEduHintForRate:(id /* block */)arg1;
- (id /* block */)onExitEduHint;
- (void)setOnExitEduHint:(id /* block */)arg1;
- (BOOL)isEduHintShowing;
- (void)setIsEduHintShowing:(BOOL)arg1;
- (BOOL)opportunityConsumed;
- (void)setOpportunityConsumed:(BOOL)arg1;
- (id)showTimer;
- (void)setShowTimer:(id)arg1;
- (id)dismissTimer;
- (void)setDismissTimer:(id)arg1;
- (double)lastKnownCurrentRate;
- (void)setLastKnownCurrentRate:(double)arg1;
- (void).cxx_destruct;
@end
