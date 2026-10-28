@interface WANativeViewPlugin : NSObject <FlutterPlatformViewFactory>
{
    NSMapTable * _platformContainerViews; // +0x8
    NSMapTable * _textureContainers; // +0x10
    NSMapTable * _nativeViews; // +0x18
    CADisplayLink * _displayLink; // +0x20
}
- (id)init;
- (void)destroy;
- (void)registerEngine:(id)arg1;
- (id)createWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)createArgsCodec;
- (void)insertNativeView:(id)arg1 viewId:(long long)arg2;
- (void)removeNativeView:(long long)arg1;
- (void)addTextureContainer:(id)arg1;
- (id)removeTextureContainer:(long long)arg1;
- (void)updateDisplayLink;
- (void)refreshDisplay;
- (void)invalidateDisplayLink;
- (void)handleNativeViewPointerEvent:(id)arg1;
- (id)platformContainerViews;
- (void)setPlatformContainerViews:(id)arg1;
- (id)textureContainers;
- (void)setTextureContainers:(id)arg1;
- (id)nativeViews;
- (void)setNativeViews:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end
