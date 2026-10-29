@interface WCAdCommonInteractionLogic : WCAdvertiseOperationLogicBase <WCAdInteractionDeviceMotionContainerDelegate>
{
    WCAdCommonInteractionView * _interactionView; // +0x8
    id <WCAdCommonInteractionLogicDelegate> _delegate; // +0x10
    WCAdCommonInteractionInfo * _interactionInfo; // +0x18
    WCAdInteractionDeviceMotionContainer * _deviceMotionContainer; // +0x20
    long long _interactionState; // +0x28
}
+ (id)getCommonInteractionLogicWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithInteractionInfo:(id)arg1;
- (void)dealloc;
- (void)addNotificationObservers;
- (void)onWindowDidBecomeKey:(id)arg1;
- (void)onViewWillResignActive:(id)arg1;
- (void)onViewDidBecomeActive:(id)arg1;
- (id)interactionView;
- (id)deviceMotionContainer;
- (void)start;
- (void)stop;
- (void)update;
- (void)reset;
- (void)updateDeviceMotionState;
- (BOOL)isApplicationStateValid;
- (BOOL)isInteractionViewContainerVisible;
- (BOOL)isTimelineScene;
- (id)fetchRelatedDataItem;
- (unsigned long long)fetchRelatedItemScene;
- (id)fetchInteractionReportInfo;
- (void)updateShakeMaxGForceWithX:(double)arg1 y:(double)arg2;
- (void)reportShakeSucceedEvent;
- (void)deviceMotionAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)setInteractionView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)interactionInfo;
- (void)setInteractionInfo:(id)arg1;
- (void)setDeviceMotionContainer:(id)arg1;
- (long long)interactionState;
- (void)setInteractionState:(long long)arg1;
- (void).cxx_destruct;
@end

