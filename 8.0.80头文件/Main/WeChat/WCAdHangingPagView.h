@interface WCAdHangingPagView : WCAdPagView <WCCanvasCommonFileLoaderExt>
{
    BOOL _indicateToPlay; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 pagInfo:(id)arg2 config:(id)arg3;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)stop;
- (void)resume;
- (void)onDidEnterBackground:(id)arg1;
- (void)onDidBecomeActive:(id)arg1;
- (void)canvasCommonFileLoaderFileDidLoad:(id)arg1 fileMD5:(id)arg2;
- (BOOL)indicateToPlay;
- (void)setIndicateToPlay:(BOOL)arg1;
@end
