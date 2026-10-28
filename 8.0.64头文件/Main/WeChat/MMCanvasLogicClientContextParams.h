@interface MMCanvasLogicClientContextParams : NSObject
{
    BOOL _preload; // +0x8
    MMWebCanvasItemData * _canvasItemData; // +0x10
    long long _pubPkgVersion; // +0x18
    long long _bizPkgVersion; // +0x20
    double _windowWidth; // +0x28
    id <MMWebJsCanvasViewPortDelegate> _viewDelegate; // +0x30
    id /* block */ _prepareCompletion; // +0x38
    id /* block */ _deleteHandler; // +0x40
}
- (id)canvasItemData;
- (void)setCanvasItemData:(id)arg1;
- (long long)pubPkgVersion;
- (void)setPubPkgVersion:(long long)arg1;
- (long long)bizPkgVersion;
- (void)setBizPkgVersion:(long long)arg1;
- (double)windowWidth;
- (void)setWindowWidth:(double)arg1;
- (BOOL)preload;
- (void)setPreload:(BOOL)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id /* block */)prepareCompletion;
- (void)setPrepareCompletion:(id /* block */)arg1;
- (id /* block */)deleteHandler;
- (void)setDeleteHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
