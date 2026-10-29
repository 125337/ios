@interface JSCProtocolAdapter : NSObject
{
    JSCTarget * _target; // +0x8
    NSMutableDictionary * _styleMap; // +0x10
    BOOL _isEvaluating; // +0x18
    NSString * _lastScriptEval; // +0x20
    int _lastNodeId; // +0x28
    int _lastPageExecutionContextId; // +0x2c
    id _lastReqID; // +0x30
    id _lastConsoleMessage; // +0x38
    JSCScreencastSession * _screencastSession; // +0x40
}
- (id)initWithTarget:(id)arg1;
- (void)initMessageFilters;
- (id)onDomGetDocument;
- (id)onCssSetStyleTexts:(id)arg1;
- (id)onCssGetMatchedStylesForNode:(id)arg1;
- (id)onCssGetBackgroundColors:(id)arg1;
- (id)onCssAddRule:(id)arg1;
- (id)onCssGetPlatformFontsForNode:(id)arg1;
- (id)onCssGetMatchedStylesForNodeResult:(id)arg1;
- (id)onPageStartScreencast:(id)arg1;
- (id)onPageStopScreencast:(id)arg1;
- (id)onPageScreencastFrameAck:(id)arg1;
- (id)onPageGetNavigationHistory:(id)arg1;
- (id)onDomEnable:(id)arg1;
- (id)onDomSetInspectMode:(id)arg1;
- (id)onDomPushNodesByBackendIdsToFrontend:(id)arg1;
- (id)onDomGetBoxModel:(id)arg1;
- (id)onDomGetNodeForLocation:(id)arg1;
- (id)onDOMDebuggerGetEventListeners:(id)arg1;
- (id)onDebuggerCanSetScriptSource:(id)arg1;
- (id)onDebuggerSetBlackboxPatterns:(id)arg1;
- (id)onDebuggerSetAsyncCallStackDepth:(id)arg1;
- (id)onDebuggerEnable:(id)arg1;
- (id)onDebuggerScriptParsed:(id)arg1;
- (id)onEmulationCanEmulate:(id)arg1;
- (id)onInputEmulateTouchFromMouseEvent:(id)arg1;
- (id)onConsoleMessageAdded:(id)arg1;
- (id)onConsoleMessageRepeatCountUpdated:(id)arg1;
- (id)onNetworkCanEmulateNetworkConditions:(id)arg1;
- (id)onRuntimeEnable:(id)arg1;
- (id)onRuntimeCompileScript:(id)arg1;
- (id)onRuntimeExecutionContextCreated:(id)arg1;
- (id)onRuntimeEvaluate:(id)arg1;
- (id)onRuntimeGetProperties:(id)arg1;
- (id)onInspectorInspect:(id)arg1;
- (id)onHeapProfilerTakeHeapSnapshot:(id)arg1;
- (id)onProfilerStop:(id)arg1;
- (void)removeProfilesDeadLoop:(id)arg1 nodes:(id)arg2;
- (id)onScriptProfilerTrackingComplete:(id)arg1;
- (void).cxx_destruct;
@end

