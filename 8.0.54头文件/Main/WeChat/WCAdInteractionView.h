@interface WCAdInteractionView : MMUIView <WCAdInteractionContentViewDelegate, CAAnimationDelegate>
{
    id <WCAdInteractionViewDelegate> _delegate; // +0x8
    NSArray * _events; // +0x10
    NSDictionary * _resources; // +0x18
    NSDictionary * _actions; // +0x20
    NSArray * _determinationInfos; // +0x28
    WCAdInteractionContentView * _baseContentView; // +0x30
    NSMutableDictionary * _firedTimeEventCache; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 interactionInfo:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)parseInteractionInfo:(id)arg1;
- (void)showContentView;
- (void)hideContentView;
- (void)activeContentView;
- (void)suspendContentView;
- (void)terminateContentView;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)clearAllCaches;
- (void)fireActionsForEventType:(unsigned long long)arg1;
- (void)fireActionsForTimeEventWithInterval:(double)arg1;
- (void)fireActionsForEventType:(unsigned long long)arg1 subType:(unsigned long long)arg2 determinationId:(id)arg3 interval:(double)arg4 params:(id)arg5;
- (void)fireActionWithInfo:(id)arg1 withParams:(id)arg2;
- (void)drawWithInfo:(id)arg1;
- (void)showOrUpdateResourceWithResource:(id)arg1 action:(id)arg2 toView:(id)arg3 updateOnly:(BOOL)arg4;
- (void)hideOrRemoveResourceWithResource:(id)arg1 action:(id)arg2 fromView:(id)arg3 hide:(BOOL)arg4;
- (id)fetchSubviewInView:(id)arg1 byTag:(long long)arg2;
- (id)fetchSubviewForResource:(id)arg1;
- (void)appendAnimationForAction:(id)arg1 fromView:(id)arg2 completeBlock:(id /* block */)arg3;
- (int)findMaxDurationForAction:(id)arg1 fromView:(id)arg2;
- (void)addAnimationWithInfo:(id)arg1 toView:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)addKeyframeAnimationWithInfo:(id)arg1 toView:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)addSimpleAnimationWithInfo:(id)arg1 toView:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)operateGestureWithInfo:(id)arg1;
- (void)updateGestureForResource:(id)arg1 withAction:(id)arg2;
- (void)operateProgressWithInfo:(id)arg1 withPercent:(double)arg2;
- (void)operateActivityWithInfo:(id)arg1;
- (void)operateReportWithInfo:(id)arg1 params:(id)arg2;
- (void)fireDeterminationWithResourceId:(id)arg1 forType:(unsigned long long)arg2 params:(id)arg3;
- (id)fetchContentReportInfo;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)fetchResourceInfoWithResourceId:(id)arg1;
- (id)fetchDeterminationInfoWithResourceId:(id)arg1;
- (void)contentViewBeClickedWithResourceId:(id)arg1;
- (void)deviceMotionOrientationChangedWithXAngle:(double)arg1 yAngle:(double)arg2 zAngle:(double)arg3;
- (void)deviceMotionAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)events;
- (void)setEvents:(id)arg1;
- (id)resources;
- (void)setResources:(id)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (id)determinationInfos;
- (void)setDeterminationInfos:(id)arg1;
- (id)baseContentView;
- (void)setBaseContentView:(id)arg1;
- (id)firedTimeEventCache;
- (void)setFiredTimeEventCache:(id)arg1;
- (void).cxx_destruct;
@end

