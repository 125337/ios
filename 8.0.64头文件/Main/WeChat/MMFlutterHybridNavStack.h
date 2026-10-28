@interface MMFlutterHybridNavStack : NSObject
{
    NSMutableArray * _viewStack; // +0x8
    NSMutableDictionary * _viewMap; // +0x10
    NSString * _engineGroupId; // +0x18
    BOOL _isPushToNonFlutterViewController; // +0x20
    NSString * _pendingPauseViewEngineId; // +0x28
    NSMutableDictionary * _pausedEngine; // +0x30
}
- (id)initWithEngineGroupId:(id)arg1;
- (id)engineGroupId;
- (void)viewWillAppear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (void)viewDidDisappear:(id)arg1;
- (void)viewDidBePopedOrDismissed:(id)arg1;
- (void)viewDealloc:(id)arg1;
- (void)onPushToNewViewController:(id)arg1 isFlutter:(BOOL)arg2;
- (BOOL)isStackTop:(id)arg1;
- (void)dealloc;
- (BOOL)hasFlutterPage;
- (BOOL)hasActiveFlutterPage;
- (void).cxx_destruct;
@end
