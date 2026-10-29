@interface WCFinderCreateCoordinatorDelegateObj : NSObject <WCFinderCreateCoordinatorDelegate>
{
    id _delegateHost; // +0x8
    WCFinderCreateCoordinator * _createCoordinator; // +0x10
}
+ (id)bindDelegateObjWithHost:(id)arg1;
- (void)unBindSelf;
- (void)finderCreateCoordinatorStartCreateUserComplete;
- (void)finderCreateAccountCancel:(id)arg1;
- (id)delegateHost;
- (void)setDelegateHost:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (void).cxx_destruct;
@end

