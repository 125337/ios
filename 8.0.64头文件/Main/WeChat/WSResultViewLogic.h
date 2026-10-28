@interface WSResultViewLogic : WSWebViewLogic <YYWebViewDelegate>
{
    NSString * _lastInputText; // +0x10
    unsigned long long _lastInputTime; // +0x18
}
- (id)initWithWebView:(id)arg1;
- (void)loadFile:(id)arg1;
- (void)loadUrlRequest:(id)arg1;
- (id)urlFromParamsBeforeLoadFile:(id)arg1;
- (void)prepareForDetailSearch:(id)arg1;
- (BOOL)notifyPreCheckQuery:(id)arg1;
- (void)updateLocalSuggestion:(id)arg1;
- (void)safeSendQueryChangedJSEvent:(id)arg1;
- (void)onWebViewFinishedLoad:(id)arg1;
- (void)onWebViewFailLoad:(id)arg1 withError:(id)arg2;
- (void)onWebViewTerminal:(id)arg1;
- (void)onJsEvaluateError:(id)arg1;
- (void)frequencyLimitCheck;
- (void).cxx_destruct;
@end
