@interface MMWebCanvasViewProxy : MMObject
{
    MMWebCanvasView * _canvasView; // +0x8
    id <MMWebCanvasViewDataDelegate> _dataDelegate; // +0x10
    id <MMWebCanvasViewEventDelegate> _eventDelegate; // +0x18
}
- (BOOL)isFileExist:(id)arg1;
- (id)getFileData:(id)arg1;
- (id)getFileDataWithUrl:(id)arg1;
- (void)onCancelAllFileTask;
- (id)createImageWithSvgData:(id)arg1 resize:(CGSize)arg2 scale:(double)arg3;
- (id)getCommandBufferScript;
- (void)systemLog:(id)arg1;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)onFirstFrameRendered:(unsigned int)arg1;
- (void)onOpenGLViewEnterBackground;
- (void)onOpenGLViewEnterForeground;
- (id)canvasView;
- (void)setCanvasView:(id)arg1;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (id)eventDelegate;
- (void)setEventDelegate:(id)arg1;
- (void).cxx_destruct;
@end
