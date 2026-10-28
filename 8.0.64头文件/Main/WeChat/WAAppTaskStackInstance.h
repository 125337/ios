@interface WAAppTaskStackInstance : NSObject
{
    WAUINavigationController * _nav; // +0x8
    WAAppOpenParameter * _cachedTaskOpenInfo; // +0x10
    WAAppTaskExtInfo * _cachedTaskExtInfo; // +0x18
    WAAppTansitionController * _cachedTransitionController; // +0x20
    WAAppTaskHandlerWrapper * _handlerWrapper; // +0x28
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
- (void).cxx_destruct;
@end
