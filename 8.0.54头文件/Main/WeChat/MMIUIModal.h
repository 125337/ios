@interface MMIUIModal : NSObject
{
    Handle<std::shared_ptr<kinda::IUIModal>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onCreateLayout:(id)arg1;
- (void)setFuncDelegate:(id)arg1;
- (id)getFuncDelegate;
- (void)setPlatformDelegate:(id)arg1;
- (void)keyboardWillShow:(float)arg1;
- (void)keyboardWillHide;
- (void)viewDidTransitionToNewSize;
- (void)onModalEnterBackground;
- (void)onModalEnterForeground;
- (void)onDestroy;
- (void)onClickAndroidBack;
- (id)getReportUrl;
- (BOOL)isShowAndroidCenterPadding;
- (id)statusbarColor;
- (id)navigationBarColor;
- (void)onFirstRenderFinish;
- (BOOL)usePanelModalMode;
- (BOOL)useKeyboardCoverMode;
- (BOOL)useImmediateKeyboardAnimation;
- (BOOL)forceShowInLightMode;
- (float)animationCutLinePosition;
- (BOOL)inVisibleOnRecently;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

