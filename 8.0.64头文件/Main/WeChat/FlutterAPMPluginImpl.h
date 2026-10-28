@interface FlutterAPMPluginImpl : NSObject <MMFlutterPlugin, WeAPMApi>
{
    BOOL _isRootEngine; // +0x8
    NSNumber * _bindFlutterInstanceMills; // +0x10
    NSNumber * _transitionStartMills; // +0x18
    NSNumber * _transitionEndMills; // +0x20
    NSNumber * _transitionMode; // +0x28
    NSNumber * _pageEnterMills; // +0x30
    NSNumber * _engineCreateStartMs; // +0x38
    NSNumber * _engineCreateFinishMs; // +0x40
    FlutterEngine * _engine; // +0x48
}
- (id)init;
- (void)setIsRootEngine:(BOOL)arg1;
- (id)initWithEngineCreateStartMs:(id)arg1 engineCreateFinishMs:(id)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)getDartVMMemoryInfoWithCompletion:(id /* block */)arg1;
- (id)getFlutterEngineCreateFinishMillsWithError:(id *)arg1;
- (id)getFlutterEngineCreateStartMillsWithError:(id *)arg1;
- (id)getNativeFirstPointerDownMillsWithError:(id *)arg1;
- (id)getNativeFirstScrollMillsWithError:(id *)arg1;
- (id)getSnapshotRenderMillsWithError:(id *)arg1;
- (id)getBindFlutterInstanceMillsWithError:(id *)arg1;
- (id)getPageEnterMillsWithError:(id *)arg1;
- (id)getTransitionReportInfoWithError:(id *)arg1;
- (id)bindFlutterInstanceMills;
- (void)setBindFlutterInstanceMills:(id)arg1;
- (id)transitionStartMills;
- (void)setTransitionStartMills:(id)arg1;
- (id)transitionEndMills;
- (void)setTransitionEndMills:(id)arg1;
- (id)transitionMode;
- (void)setTransitionMode:(id)arg1;
- (id)pageEnterMills;
- (void)setPageEnterMills:(id)arg1;
- (id)engineCreateStartMs;
- (void)setEngineCreateStartMs:(id)arg1;
- (id)engineCreateFinishMs;
- (void)setEngineCreateFinishMs:(id)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (BOOL)isRootEngine;
- (void).cxx_destruct;
@end
