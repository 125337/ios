@interface QMUAnnoViewAnimationMediator : NSObject <CAAnimationDelegate>
{
    BOOL _annoAnimationNeedRotate; // +0x8
    int _animationStatus; // +0xc
    int _annoCurrentEraseIndex; // +0x10
    int _annoInternalEraseIndexBackUp; // +0x14
    int _coordKVOCounter; // +0x18
    id /* block */ _coordCallBack; // +0x20
    double _annoAnimationAccumulateDistance; // +0x28
    double _annoAnimationSpeed; // +0x30
    double _annoCallbacklocationPrecision; // +0x38
    NSArray * _originalCoords; // +0x40
    UIView * _mapInternalRotateView; // +0x48
    id <QAnnotation> _observerTarget; // +0x50
    CGPoint _annoComparePoint; // +0x58
}
- (void)searchEraseInexWithInterpolatePoint:(CLLocationCoordinate2D)arg1 andOriginalPoints:(id)arg2;
- (id)generateNewCoordFromOrigin:(id)arg1 withIndex:(int)arg2 andRatio:(double)arg3;
- (id)getCoordinatesForLeftTimeMode:(CLLocationCoordinate2D)arg1;
- (id)getTranlateCoordinatesWithIndexChanged:(int)arg1 andRatio:(double)arg2;
- (BOOL)checkInterpolationIsOutOfPrecisionRangeWithInterpolation:(CLLocationCoordinate2D)arg1;
- (id)validateLocations:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setAnnoTranslateObserver:(id)arg1;
- (void)setUpObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)notifMoveAlongCallbackUpdateWithCoordinate:(CLLocationCoordinate2D)arg1 andAnimationStatus:(int)arg2;
- (void)sendAnimationInfoToCallback:(CLLocationCoordinate2D)arg1 Status:(int)arg2;
- (void)sendInterruptionCallBack;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)checkIfTargetAnimationExists:(id)arg1 withKey:(id)arg2;
- (void)generateAnimation:(id)arg1 rotationView:(id)arg2 locations:(id)arg3 validatedLocation:(id)arg4 time:(double)arg5 autoRotate:(BOOL)arg6 distanceFilter:(double)arg7;
- (void)startAnimation:(id)arg1 rotationView:(id)arg2 locations:(id)arg3 time:(double)arg4 autoRotate:(BOOL)arg5 distance:(double)arg6;
- (void)setTranslation:(id)arg1 withPoint:(int)arg2 andRatio:(float)arg3;
- (void)setAnimation:(id)arg1 withLeftTime:(double)arg2;
- (void)setTranslation:(id)arg1 withPoint:(int)arg2 andRatio:(float)arg3 andLeftTime:(double)arg4;
- (void)removeMoveAlongAnimation:(id)arg1;
- (BOOL)hasCoordAnimation:(id)arg1;
- (id /* block */)coordCallBack;
- (void)setCoordCallBack:(id /* block */)arg1;
- (int)animationStatus;
- (void)setAnimationStatus:(int)arg1;
- (int)annoCurrentEraseIndex;
- (void)setAnnoCurrentEraseIndex:(int)arg1;
- (CGPoint)annoComparePoint;
- (void)setAnnoComparePoint:(CGPoint)arg1;
- (double)annoAnimationAccumulateDistance;
- (void)setAnnoAnimationAccumulateDistance:(double)arg1;
- (double)annoAnimationSpeed;
- (void)setAnnoAnimationSpeed:(double)arg1;
- (double)annoCallbacklocationPrecision;
- (void)setAnnoCallbacklocationPrecision:(double)arg1;
- (BOOL)annoAnimationNeedRotate;
- (void)setAnnoAnimationNeedRotate:(BOOL)arg1;
- (int)annoInternalEraseIndexBackUp;
- (void)setAnnoInternalEraseIndexBackUp:(int)arg1;
- (id)originalCoords;
- (void)setOriginalCoords:(id)arg1;
- (id)mapInternalRotateView;
- (void)setMapInternalRotateView:(id)arg1;
- (id)observerTarget;
- (void)setObserverTarget:(id)arg1;
- (int)coordKVOCounter;
- (void)setCoordKVOCounter:(int)arg1;
- (void).cxx_destruct;
@end
