@interface WCAdSellingPointLogic : WCAdvertiseOperationLogicBase
{
    id <WCAdSellingPointLogicDelegate> _delegate; // +0x8
    unsigned long long _itemCount; // +0x10
    unsigned long long _switchCount; // +0x18
    MMTimer * _logicTimer; // +0x20
    unsigned long long _currentTick; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)touch;
- (void)start;
- (void)stop;
- (void)reset;
- (id)fetchSwitchCountToReport;
- (void)touchWithAnimated:(BOOL)arg1;
- (void)scheduleSwitchSellingPoint;
- (BOOL)shouldFireTouchEvent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)itemCount;
- (void)setItemCount:(unsigned long long)arg1;
- (unsigned long long)switchCount;
- (void)setSwitchCount:(unsigned long long)arg1;
- (id)logicTimer;
- (void)setLogicTimer:(id)arg1;
- (unsigned long long)currentTick;
- (void)setCurrentTick:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
