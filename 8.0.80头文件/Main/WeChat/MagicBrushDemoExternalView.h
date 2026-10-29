@interface MagicBrushDemoExternalView : MagicBrushDemoLogic <IMBExternalViewDelegate>
{
    NSMutableDictionary * _internalViewDict; // +0x38
}
- (void)start;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onMainScriptInjected:(id)arg1;
- (id)internalViewDict;
- (void)setInternalViewDict:(id)arg1;
- (void).cxx_destruct;
@end
