@interface WxaFlutterViewLifeCycle : NSObject <WxaFlutterViewLifecycleDelegate>
{
    id <WxaFlutterViewControllerDelegate> _delegate; // +0x8
}
- (id)generateParams;
- (void)onCreateView:(unsigned long long)arg1 arguments:(id)arg2;
- (void)onResumeView:(unsigned long long)arg1 arguments:(id)arg2;
- (void)onPauseView:(unsigned long long)arg1 arguments:(id)arg2;
- (void)onDestroyView:(unsigned long long)arg1 arguments:(id)arg2;
- (void)onForeground:(unsigned long long)arg1 arguments:(id)arg2;
- (void)onBackground:(unsigned long long)arg1 arguments:(id)arg2;
- (void)onDestroy:(unsigned long long)arg1 arguments:(id)arg2;
- (void)onBackPressed:(unsigned long long)arg1 arguments:(id)arg2;
- (void)onPagePause:(unsigned long long)arg1 arguments:(id)arg2;
- (void)onPageResume:(unsigned long long)arg1 arguments:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
