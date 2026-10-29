@interface WCAdvertiseSphereView : MMUIView <WCCanvasImageLoaderObserver, SCNSceneRendererDelegate, UIGestureRecognizerDelegate>
{
    BOOL _showFullCoverButton; // +0x8
    BOOL _forbidVerticalPan; // +0x9
    BOOL _isHorizontalView; // +0xa
    BOOL _shouldRemoveThumbWithAnimation; // +0xb
    BOOL _idleState; // +0xc
    unsigned int _downloadScene; // +0x10
    int _stateType; // +0x14
    int _renderStateType; // +0x18
    int _idleCheckCount; // +0x1c
    WCMediaItem * _mediaData; // +0x20
    id <WCAdvertiseSphereViewDelegate> _delegate; // +0x28
    WCAdSphereCardInfo * _sphereInfo; // +0x30
    unsigned long long _sphereType; // +0x38
    unsigned long long _monitoringType; // +0x40
    unsigned long long _monitoringTypeToResume; // +0x48
    double _gestureDelayTime; // +0x50
    UIButton * _fullCoverButton; // +0x58
    UIImageView * _thumbView; // +0x60
    SCNView * _scnView; // +0x68
    SCNNode * _cameraNode; // +0x70
    UIPanGestureRecognizer * _panGesture; // +0x78
    NSObject * _motionDataLock; // +0x80
    CMDeviceMotion * _oriMotion; // +0x88
    CMDeviceMotion * _previousMotion; // +0x90
    double _angleAtX; // +0x98
    CMDeviceMotion * _idleMotion; // +0xa0
    CGPoint _lastPoint; // +0xa8
    CGPoint _fingerRotation; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1 sphereInfo:(id)arg2 delegate:(id)arg3 downloadScene:(unsigned int)arg4 type:(unsigned long long)arg5;
- (void)dealloc;
- (void)initNotificationObserver;
- (void)onViewWillResignActive:(id)arg1;
- (void)onViewDidBecomeActive:(id)arg1;
- (void)resetMotionData;
- (BOOL)isLoadingSphereResource;
- (void)willMoveToSuperview:(id)arg1;
- (void)setShowFullCoverButton:(BOOL)arg1;
- (BOOL)isHorizontalViewForSize:(CGSize)arg1;
- (id)generateSCNView;
- (id)generateCameraNode;
- (id)generateSphereNodeWith:(id)arg1;
- (void)initSCNView;
- (void)loadSphereResource;
- (id)fetchSphereResourceFor:(id)arg1;
- (void)loadSphereResourceAtRenderer:(id)arg1 withImage:(id)arg2;
- (void)playScene;
- (void)stopScene;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)initThumbView;
- (void)removeThumbView;
- (void)delayRemoveThumbView;
- (void)loadThumbResource;
- (void)updateStateWithType:(int)arg1;
- (void)updateBackGroundColor;
- (id)fetchOriginSnapshotDirectly;
- (id)fetchCurrentSnapshot;
- (id)fetchOriginSnapshot;
- (void)generateOriginSnapshot;
- (BOOL)checkSnapshotImage:(id)arg1;
- (void)initFullCoverButton;
- (void)removeFullCoverButton;
- (void)onClickAdTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)delayClickAdTouchButton;
- (void)delayClearTouchButtonColor;
- (void)onClick;
- (void)tryToNoticeIdleStateChanged:(BOOL)arg1;
- (void)tryToStartMonitoring;
- (void)tryToStartMonitoringWithType:(unsigned long long)arg1;
- (void)startMonitoring;
- (void)tryToStopMonitoring;
- (void)initDeviceMotion;
- (void)stopDeviceMotion;
- (void)updateCameraOrientation;
- (SCNVector4)fetchOrientationFromDeviceMotion:(id)arg1 againstOriMotion:(id)arg2 fingerRotation:(CGPoint)arg3;
- (double)fetchPitchDiffFromCurrentMotion:(id)arg1 againstPreviousMotion:(id)arg2;
- (void)checkIdleStateFromCurrentMotion:(id)arg1;
- (void)initGesture;
- (void)removeGesture;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (double)fetchAngleForDistance:(double)arg1;
- (BOOL)willNewAngleXOverRightAngleWith:(double)arg1;
- (void)onPanGestureEnd;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)mediaData;
- (void)setMediaData:(id)arg1;
- (BOOL)showFullCoverButton;
- (BOOL)forbidVerticalPan;
- (void)setForbidVerticalPan:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sphereInfo;
- (void)setSphereInfo:(id)arg1;
- (BOOL)isHorizontalView;
- (void)setIsHorizontalView:(BOOL)arg1;
- (unsigned int)downloadScene;
- (void)setDownloadScene:(unsigned int)arg1;
- (unsigned long long)sphereType;
- (void)setSphereType:(unsigned long long)arg1;
- (int)stateType;
- (void)setStateType:(int)arg1;
- (int)renderStateType;
- (void)setRenderStateType:(int)arg1;
- (unsigned long long)monitoringType;
- (void)setMonitoringType:(unsigned long long)arg1;
- (unsigned long long)monitoringTypeToResume;
- (void)setMonitoringTypeToResume:(unsigned long long)arg1;
- (double)gestureDelayTime;
- (void)setGestureDelayTime:(double)arg1;
- (id)fullCoverButton;
- (void)setFullCoverButton:(id)arg1;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (BOOL)shouldRemoveThumbWithAnimation;
- (void)setShouldRemoveThumbWithAnimation:(BOOL)arg1;
- (id)scnView;
- (void)setScnView:(id)arg1;
- (id)cameraNode;
- (void)setCameraNode:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (CGPoint)lastPoint;
- (void)setLastPoint:(CGPoint)arg1;
- (CGPoint)fingerRotation;
- (void)setFingerRotation:(CGPoint)arg1;
- (id)motionDataLock;
- (void)setMotionDataLock:(id)arg1;
- (id)oriMotion;
- (void)setOriMotion:(id)arg1;
- (id)previousMotion;
- (void)setPreviousMotion:(id)arg1;
- (double)angleAtX;
- (void)setAngleAtX:(double)arg1;
- (id)idleMotion;
- (void)setIdleMotion:(id)arg1;
- (int)idleCheckCount;
- (void)setIdleCheckCount:(int)arg1;
- (BOOL)idleState;
- (void)setIdleState:(BOOL)arg1;
- (void).cxx_destruct;
@end

