@interface MMIUIPage : NSObject
{
    Handle<std::shared_ptr<kinda::IUIPage>> _cppRefHandle; // +0x8
}
+ (id)createAppUipage:(id)arg1;
- (id)initWithCpp:(const void *)arg1;
- (void)setPlatformFuncDelegate:(id)arg1;
- (id)getPlatformFuncDelegate;
- (void)setPlatformDelegate:(id)arg1;
- (void)onCreateLayout:(id)arg1;
- (void)onCreate;
- (void)onFirstLayoutFinished;
- (void)onDestroy;
- (void)onVisible;
- (void)onInvisible;
- (void)onResume;
- (void)onPause;
- (void)onBack;
- (void)viewDidTransitionToNewSize;
- (id)defaultNavigationBarConfig;
- (id)keyboardTopView;
- (float)keyboardTopViewBottomMargin;
- (void)keyboardWillShow:(float)arg1;
- (void)keyboardWillHide;
- (BOOL)fullPageMode;
- (BOOL)useSafeAreaToLayout;
- (BOOL)enableInteractivePop;
- (id)getReportUrl;
- (void)onClickAndroidBack;
- (void)startLoading:(id)arg1 block:(BOOL)arg2;
- (void)stopLoading;
- (BOOL)forceShowInLightMode;
- (BOOL)inVisibleOnRecently;
- (void)notify:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

