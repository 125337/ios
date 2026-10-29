@interface WAAppTaskStackInstance : NSObject
{
    BOOL _enterBackgroundFromQuickReplyMsg; // +0x8
    WAUINavigationController * _nav; // +0x10
    WAAppOpenParameter * _cachedTaskOpenInfo; // +0x18
    WAAppTaskExtInfo * _cachedTaskExtInfo; // +0x20
    WAAppTansitionController * _cachedTransitionController; // +0x28
    WAAppTaskHandlerWrapper * _handlerWrapper; // +0x30
    WARunningModeParameter * _cachedRunningModeParams; // +0x38
}
- (id)nav;
- (void)setNav:(id)arg1;
- (id)cachedTaskOpenInfo;
- (void)setCachedTaskOpenInfo:(id)arg1;
- (id)cachedTaskExtInfo;
- (void)setCachedTaskExtInfo:(id)arg1;
- (id)cachedTransitionController;
- (void)setCachedTransitionController:(id)arg1;
- (id)handlerWrapper;
- (void)setHandlerWrapper:(id)arg1;
- (id)cachedRunningModeParams;
- (void)setCachedRunningModeParams:(id)arg1;
- (BOOL)enterBackgroundFromQuickReplyMsg;
- (void)setEnterBackgroundFromQuickReplyMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end
