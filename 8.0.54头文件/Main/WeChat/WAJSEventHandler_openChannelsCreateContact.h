@interface WAJSEventHandler_openChannelsCreateContact : WAJSEventHandler_BaseEvent <WCFinderCreateCoordinatorDelegate>
{
    WCFinderCreateCoordinator * _createCoordinator; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)finderCreateCoordinatorStartCreateUserComplete;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (void).cxx_destruct;
@end

