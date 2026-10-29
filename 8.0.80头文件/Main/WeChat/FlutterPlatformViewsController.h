@interface FlutterPlatformViewsController : NSObject
{
    unique_ptr<flutter::OverlayLayerPool, std::default_delete<flutter::OverlayLayerPool>> _layerPool; // +0x8
    unordered_map<long long, std::unique_ptr<flutter::EmbedderViewSlice>, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, std::unique_ptr<flutter::EmbedderViewSlice>>>> _slices; // +0x10
    unordered_map<std::string, NSObject<FlutterPlatformViewFactory> *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, NSObject<FlutterPlatformViewFactory> *>>> _factories; // +0x38
    unordered_map<std::string, FlutterPlatformViewGestureRecognizersBlockingPolicy, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, FlutterPlatformViewGestureRecognizersBlockingPolicy>>> _gestureRecognizersBlockingPolicies; // +0x60
    RefPtr<fml::TaskRunner> _platformTaskRunner; // +0x88
    unordered_map<long long, PlatformViewData, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, PlatformViewData>>> _platformViews; // +0x90
    unordered_map<long long, flutter::EmbeddedViewParams, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, flutter::EmbeddedViewParams>>> _currentCompositionParams; // +0xb8
    unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> _viewsToDispose; // +0xe0
    vector<long long, std::allocator<long long>> _compositionOrder; // +0x108
    vector<long long, std::allocator<long long>> _visitedPlatformViews; // +0x120
    unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> _viewsToRecomposite; // +0x138
    vector<long long, std::allocator<long long>> _previousCompositionOrder; // +0x160
    BOOL _hadPlatformViews; // +0x178
    BOOL _canApplyBlurBackdrop; // +0x179
    UIView * _flutterView; // +0x180
    UIViewController<FlutterViewResponder> * _flutterViewController; // +0x188
    FlutterClippingMaskViewPool * _maskViewPool; // +0x190
    SkISize _frameSize; // +0x198
}
- (id)init;
- (const void *)taskRunner;
- (void)setTaskRunner:(const void *)arg1;
- (void)onMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)onCreate:(id)arg1 result:(id /* block */)arg2;
- (void)onDispose:(id)arg1 result:(id /* block */)arg2;
- (void)onAcceptGesture:(id)arg1 result:(id /* block */)arg2;
- (void)onRejectGesture:(id)arg1 result:(id /* block */)arg2;
- (void)registerViewFactory:(id)arg1 withId:(id)arg2 gestureRecognizersBlockingPolicy:(int)arg3;
- (void)beginFrameWithSize:(SkISize)arg1;
- (void)cancelFrame;
- (int)postPrerollActionWithThreadMerger:(const void *)arg1;
- (void)endFrameWithResubmit:(BOOL)arg1 threadMerger:(const void *)arg2;
- (void)pushFilterToVisitedPlatformViews:(const void *)arg1 withRect:(const SkRect *)arg2;
- (void)prerollCompositeEmbeddedView:(long long)arg1 withParams:(unique_ptr<flutter::EmbeddedViewParams, std::default_delete<flutter::EmbeddedViewParams>>)arg2;
- (unsigned long long)embeddedViewCount;
- (id)platformViewForId:(long long)arg1;
- (id)flutterTouchInterceptingViewForId:(long long)arg1;
- (long long)firstResponderPlatformViewId;
- (void)clipViewSetMaskView:(id)arg1;
- (void)applyMutators:(const void *)arg1 embeddedView:(id)arg2 boundingRect:(const SkRect *)arg3;
- (void)compositeView:(long long)arg1 withParams:(const void *)arg2;
- (DlCanvas *)compositeEmbeddedViewWithId:(long long)arg1;
- (void)reset;
- (BOOL)submitFrame:(unique_ptr<flutter::SurfaceFrame, std::default_delete<flutter::SurfaceFrame>>)arg1 withIosContext:(const void *)arg2;
- (void)createMissingOverlays:(unsigned long long)arg1 withIosContext:(const void *)arg2;
- (void)performSubmit:(const void *)arg1 currentCompositionParams:(void *)arg2 viewsToRecomposite:(const void *)arg3 compositionOrder:(const void *)arg4 unusedLayers:(const void *)arg5 surfaceFrames:(const void *)arg6;
- (void)bringLayersIntoView:(const void *)arg1 withCompositionOrder:(const void *)arg2;
- (shared_ptr<flutter::OverlayLayer>)nextLayerInPool;
- (void)createLayerWithIosContext:(const void *)arg1 pixelFormat:(unsigned long long)arg2;
- (void)removeUnusedLayers:(const void *)arg1 withCompositionOrder:(const void *)arg2;
- (vector<UIView *, std::allocator<UIView *>>)computeViewsToDispose;
- (void)resetFrameState;
- (void)pushVisitedPlatformViewId:(long long)arg1;
- (void)prewarmOverlayLayers:(unsigned long long)arg1 withIosContext:(const void *)arg2 pixelFormat:(unsigned long long)arg3;
- (void)setMinRetainedOverlayLayerCount:(unsigned long long)arg1;
- (const void *)compositionParamsForView:(long long)arg1;
- (void *)layerPool;
- (void *)slices;
- (void *)factories;
- (void *)gestureRecognizersBlockingPolicies;
- (void *)platformViews;
- (void *)currentCompositionParams;
- (void *)viewsToDispose;
- (void *)compositionOrder;
- (void *)visitedPlatformViews;
- (void *)viewsToRecomposite;
- (void *)previousCompositionOrder;
- (id)createNativeKeyboardViewWithParam:(id)arg1;
- (id)flutterView;
- (void)setFlutterView:(id)arg1;
- (id)flutterViewController;
- (void)setFlutterViewController:(id)arg1;
- (id)maskViewPool;
- (SkISize)frameSize;
- (void)setFrameSize:(SkISize)arg1;
- (const void *)platformTaskRunner;
- (BOOL)hadPlatformViews;
- (void)setHadPlatformViews:(BOOL)arg1;
- (BOOL)canApplyBlurBackdrop;
- (void)setCanApplyBlurBackdrop:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
