@interface MMCanvasJsApiHandler : NSObject
{
    NSString * _canvasId; // +0x8
    double _videoTop; // +0x10
    double _videoBottom; // +0x18
    double _windowWidth; // +0x20
    id <MMCanvasJsApiHandlerViewDelegate> _delegate; // +0x28
    NSDictionary * _fontWeightMap; // +0x30
}
- (id)init;
- (void)setupApiWithJSContext:(id)arg1;
- (void)dealloc;
- (void)addApi_getId:(id)arg1;
- (void)addApi_getCanvas:(id)arg1;
- (void)addApi_getFontSize:(id)arg1;
- (void)addApi_isDarkMode:(id)arg1;
- (void)addApi_measureText:(id)arg1;
- (void)addApi_getFps:(id)arg1;
- (void)addApi_isOnScreen:(id)arg1;
- (void)addApi_getWidth:(id)arg1;
- (void)addApi_getHeight:(id)arg1;
- (void)addApi_getOffsetTop:(id)arg1;
- (void)addApi_getOffsetHeight:(id)arg1;
- (void)addApi_setHeight:(id)arg1;
- (void)addApi_setVideo:(id)arg1;
- (void)addApi_canVideoAutoPlay:(id)arg1;
- (void)addApi_restore:(id)arg1;
- (void)addApi_save:(id)arg1;
- (void)addApi_isCanvasViewInBackground:(id)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (double)videoTop;
- (void)setVideoTop:(double)arg1;
- (double)videoBottom;
- (void)setVideoBottom:(double)arg1;
- (double)windowWidth;
- (void)setWindowWidth:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fontWeightMap;
- (void)setFontWeightMap:(id)arg1;
- (void).cxx_destruct;
@end
