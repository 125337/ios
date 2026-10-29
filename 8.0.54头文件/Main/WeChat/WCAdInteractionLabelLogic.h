@interface WCAdInteractionLabelLogic : WCAdvertiseOperationLogicBase
{
    id <WCAdInteractionLabelLogicDelegate> _delegate; // +0x8
    unsigned long long _itemCount; // +0x10
    UIView * _iconViewCache; // +0x18
    unsigned long long _switchCount; // +0x20
    MMTimer * _logicTimer; // +0x28
    unsigned long long _currentTick; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)touch;
- (void)start;
- (void)stop;
- (void)startTimer;
- (void)stopTimer;
- (void)touchWithAnimated:(BOOL)arg1;
- (void)scheduleSwitchLabel;
- (BOOL)shouldFireTouchEvent;
- (void)tryToSetIconPlaying:(BOOL)arg1;
- (void)resetIcon;
- (void)setIconPlaying:(BOOL)arg1 reset:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)itemCount;
- (void)setItemCount:(unsigned long long)arg1;
- (id)iconViewCache;
- (void)setIconViewCache:(id)arg1;
- (unsigned long long)switchCount;
- (void)setSwitchCount:(unsigned long long)arg1;
- (id)logicTimer;
- (void)setLogicTimer:(id)arg1;
- (unsigned long long)currentTick;
- (void)setCurrentTick:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

