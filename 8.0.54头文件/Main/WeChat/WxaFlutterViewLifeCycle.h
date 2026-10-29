@interface WxaFlutterViewLifeCycle : NSObject <WxaFlutterViewLifecycleDelegate>
{
    id <WxaFlutterViewControllerDelegate> _delegate; // +0x8
}
- (id)generateParams;
- (void)onCreateView:(int)arg1 arguments:(id)arg2;
- (void)onResumeView:(int)arg1 arguments:(id)arg2;
- (void)onPauseView:(int)arg1 arguments:(id)arg2;
- (void)onDestroyView:(int)arg1 arguments:(id)arg2;
- (void)onForeground:(int)arg1 arguments:(id)arg2;
- (void)onBackground:(int)arg1 arguments:(id)arg2;
- (void)onDestroy:(int)arg1 arguments:(id)arg2;
- (void)onBackPressed:(int)arg1 arguments:(id)arg2;
- (void)onPagePause:(int)arg1 arguments:(id)arg2;
- (void)onPageResume:(int)arg1 arguments:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

