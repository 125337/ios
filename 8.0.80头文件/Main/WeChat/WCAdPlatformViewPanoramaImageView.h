@interface WCAdPlatformViewPanoramaImageView : WCAdPlatformViewBase
{
    BOOL _showLoading; // +0x8
    NSString * _imageUrl; // +0x10
    NSString * _canvasKey; // +0x18
    NSString * _componentId; // +0x20
    FlutterMethodChannel * _channel; // +0x28
    WCAdPanoramaContainerView * _panoramaContainerView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;
- (id)view;
- (void)handleJsEvent:(id)arg1 params:(id)arg2 needCallback:(BOOL)arg3 result:(id /* block */)arg4;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)canvasKey;
- (void)setCanvasKey:(id)arg1;
- (id)componentId;
- (void)setComponentId:(id)arg1;
- (BOOL)showLoading;
- (void)setShowLoading:(BOOL)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)panoramaContainerView;
- (void)setPanoramaContainerView:(id)arg1;
- (void).cxx_destruct;
@end
