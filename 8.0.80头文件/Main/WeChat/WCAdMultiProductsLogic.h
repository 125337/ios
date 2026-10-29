@interface WCAdMultiProductsLogic : WCAdvertiseOperationLogicBase
{
    WCAdCardMultiProductsView * _multiProductsView; // +0x8
    id <WCAdMultiProductsLogicDelegate> _delegate; // +0x10
    WCDataItem * _dataItem; // +0x18
    MMTimer * _logicTimer; // +0x20
    unsigned long long _currentTick; // +0x28
}
- (id)initWithDataItem:(id)arg1;
- (void)dealloc;
- (id)multiProductsView;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)start;
- (void)stop;
- (void)scheduleMultiProductsViewAction;
- (void)tryToSwitchMultiProductsView;
- (void)updateActionButton;
- (void)updateActionButtonWithScale:(double)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)setMultiProductsView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)logicTimer;
- (void)setLogicTimer:(id)arg1;
- (unsigned long long)currentTick;
- (void)setCurrentTick:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
