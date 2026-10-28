@interface QLayerManager : NSObject <QOverlayProtocol>
{
    void * _impl; // +0x8
    QMediator * _mediator; // +0x10
    TBOrderedSafeDictionary * _viewContainer; // +0x18
    QUniversalMapCounter * _universalCounter; // +0x20
    QUniversalMapCounter * _groundOverlayCounter; // +0x28
    double _deltalTimeStamp; // +0x30
    id <glOverlayGestureClickDelegate> _glOverlayClickDelegate; // +0x38
}
- (id)init;
- (void)dealloc;
- (void *)impl;
- (void)makeDirty;
- (float *)glViewMatrix;
- (float *)glProjectionMatrix;
- (CGPoint)glVertexForCoordinate:(CLLocationCoordinate2D)arg1;
- (double)glPointRatio;
- (id)getView;
- (struct)mapPointForPixelX:(double)arg1 Y:(double)arg2;
- (CGPoint)pixelForMapPoint:(struct)arg1;
- (void)addOverlayView:(id)arg1;
- (id)removeForOverlay:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (id)overlays;
- (void)update:(double)arg1;
- (BOOL)draw;
- (BOOL)isDirty;
- (void)setClickCheckPoint:(CGPoint)arg1;
- (void)notifyNoneGLLayerFound:(id)arg1 ClickPos:(CGPoint)arg2;
- (void)handleClickedGLOverlay:(id)arg1 withOverlayObj:(id)arg2;
- (LightColor)lightColorForUIColor:(id)arg1;
- (void)setAmbientLight:(id)arg1 intensity:(double)arg2;
- (void)addSpotFollowCameraLight:(id)arg1 intensity:(double)arg2;
- (void)addDirectionalLight:(id)arg1 direction:(_GLKVector3)arg2 intensity:(double)arg3;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)viewContainer;
- (void)setViewContainer:(id)arg1;
- (id)universalCounter;
- (void)setUniversalCounter:(id)arg1;
- (id)groundOverlayCounter;
- (void)setGroundOverlayCounter:(id)arg1;
- (double)deltalTimeStamp;
- (void)setDeltalTimeStamp:(double)arg1;
- (id)glOverlayClickDelegate;
- (void)setGlOverlayClickDelegate:(id)arg1;
- (void).cxx_destruct;
@end
