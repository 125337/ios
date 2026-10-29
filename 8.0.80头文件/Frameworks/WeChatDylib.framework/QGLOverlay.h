@interface QGLOverlay : QShape <QOverlay>
{
    BOOL _visible; // +0x8
    BOOL _interactive; // +0x9
    BOOL _drawn; // +0xa
    BOOL _dirty; // +0xb
    int _zIndex; // +0xc
    int _minZoomLevel; // +0x10
    int _maxZoomLevel; // +0x14
    long long _displayLevel; // +0x18
    id <QGLOverlayDelegate> _delegate; // +0x20
    double _opacity; // +0x28
    void * _impl; // +0x30
    void * _layerListener; // +0x38
    id <QOverlayProtocol> _containerDelegate; // +0x40
}
+ (BOOL)validateStartPoints:(id)arg1;
- (id)executeCommand:(id)arg1 commandJson:(id)arg2;
- (id)getType:(id)arg1 error:(id *)arg2;
- (void)setVisible:(id)arg1 error:(id *)arg2;
- (id)getVisible:(id)arg1 error:(id *)arg2;
- (void)enableClick:(id)arg1 error:(id *)arg2;
- (id)getClickEnabled:(id)arg1 error:(id *)arg2;
- (void)setZoomLevelRange:(id)arg1 error:(id *)arg2;
- (void)setZIndex:(int)arg1;
- (int)zIndex;
- (void)setDisplayLevel:(long long)arg1;
- (long long)displayLevel;
- (double)screenScale;
- (void)drawCallback;
- (void *)createImpl;
- (void)destoryImpl;
- (void)setVisible:(BOOL)arg1;
- (void)setOpacity:(double)arg1;
- (void)setMinZoomLevel:(int)arg1 maxZoomLevel:(int)arg2;
- (void)setMinZoomLevel:(int)arg1;
- (void)setMaxZoomLevel:(int)arg1;
- (id)getType;
- (BOOL)isSupportClick;
- (void)makeDirty;
- (void)render;
- (void)setNeedsDisplay;
- (struct)boundingMapRect;
- (float *)glViewMatrix;
- (float *)glProjectionMatrix;
- (CGPoint)glVertexForCoordinate:(CLLocationCoordinate2D)arg1;
- (double)glPointRatio;
- (id)init;
- (void)dealloc;
- (void)notifyOverlayProgress:(double)arg1 hasError:(BOOL)arg2;
- (void)doUpdateLevel:(void *)arg1;
- (void)doUpdateIndex:(void *)arg1;
- (int)layerLevelForDisplayLevel:(long long)arg1;
- (long long)displayLevelForLayerLevel:(int)arg1;
- (BOOL)validateDisplayLevelParam:(long long)arg1;
- (void)recordGLoverlayCount:(id)arg1;
- (void)startTranslateAnimation:(id)arg1 duration:(double)arg2 initRotation:(double)arg3 autoRotate:(BOOL)arg4;
- (void)notifOverlayDidTapWithOverlayObject:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)visible;
- (double)opacity;
- (int)minZoomLevel;
- (int)maxZoomLevel;
- (BOOL)interactive;
- (void)setInteractive:(BOOL)arg1;
- (void *)impl;
- (void)setImpl:(void *)arg1;
- (void *)layerListener;
- (void)setLayerListener:(void *)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (BOOL)drawn;
- (void)setDrawn:(BOOL)arg1;
- (BOOL)dirty;
- (void)setDirty:(BOOL)arg1;
- (void).cxx_destruct;
@end
