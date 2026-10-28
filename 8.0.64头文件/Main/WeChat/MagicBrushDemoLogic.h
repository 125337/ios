@interface MagicBrushDemoLogic : NSObject <IMBFileSystem, IMBPkgManagement, MBCommonAdapterDelegate, IMBViewDelegate, IMBLifecycle>
{
    BOOL _isFullPage; // +0x8
    MagicBrushBiz * _magicbrush; // +0x10
    UIView * _containerView; // +0x18
    MBCommonAdapter * _mbCommonAdapter; // +0x20
    _TtC6WeChat24MagicBrushVConsoleHelper * _mbVConsoleHelper; // +0x28
    _TtC6WeChat27MagicBrushDemoPkgManagement * _pkgManagement; // +0x30
}
- (id)initWithIsFullPage:(BOOL)arg1;
- (void)start;
- (void)stop;
- (void)dealloc;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (id)getFileDataByPath:(id)arg1;
- (void)provideMainScript:(id /* block */)arg1;
- (id)provideFileSystem;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (id)magicbrush;
- (void)setMagicbrush:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)mbCommonAdapter;
- (void)setMbCommonAdapter:(id)arg1;
- (id)mbVConsoleHelper;
- (void)setMbVConsoleHelper:(id)arg1;
- (id)pkgManagement;
- (void)setPkgManagement:(id)arg1;
- (BOOL)isFullPage;
- (void)setIsFullPage:(BOOL)arg1;
- (void).cxx_destruct;
@end
