@interface MMFlutterHybridNavPageState : NSObject
{
    FlutterBasicMessageChannel * _pageStateChannel; // +0x8
}
- (id)initWithMessenger:(id)arg1;
- (void)requestPagePreload;
- (void)onViewReady:(id /* block */)arg1;
- (void)onPageWillAppear:(id /* block */)arg1;
- (void)onPageDidAppear:(id /* block */)arg1;
- (void)onPageWillDisappear:(id /* block */)arg1;
- (void)onPageDidDisappear:(id /* block */)arg1;
- (void)onAppEnterForeground:(id /* block */)arg1;
- (void)onAppEnterBackground:(id /* block */)arg1;
- (void)onPageEnter:(id /* block */)arg1;
- (void)onPageResumed:(id /* block */)arg1;
- (void)onPageInactive:(id /* block */)arg1;
- (void)onPagePaused:(id /* block */)arg1;
- (void)onPageViewDetached:(id /* block */)arg1;
- (void)onPageDetached:(id /* block */)arg1;
- (void)onPageExit:(id /* block */)arg1;
- (void)onEngineExit:(id /* block */)arg1;
- (void).cxx_destruct;
@end
