@interface MMVideoRciRenderView : UIView
{
    BOOL _isInBackground; // +0x8
    CGSize _bufSize; // +0x10
    CGRect _frameRect; // +0x20
    CGRect _frame; // +0x40
    unsigned long long _busyCount; // +0x60
    UIPinchGestureRecognizer * _pinchGestureRecognizer; // +0x68
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x70
    MMCameraFocusSquare * _focusSquare; // +0x78
    unsigned int _originYuvYTexture; // +0x80
    BOOL _mirror; // +0x84
    BOOL _renderable; // +0x85
    BOOL _focusable; // +0x86
    BOOL _disableOpaqueRender; // +0x87
    BOOL _enableGestures; // +0x88
    BOOL _isInRotationAnimation; // +0x89
    float _rotationInDegree; // +0x8c
    int _videoBlockThreshold; // +0x90
    int _streamType; // +0x94
    int _blockIntervalMs; // +0x98
    int _mRawDataFrameType; // +0x9c
    unsigned long long _contentMode; // +0xa0
    id <MMVideoRenderViewDelegate> _delegate; // +0xa8
    unsigned long long _lastBlockDuration; // +0xb0
    id /* block */ _onRenderEvent; // +0xb8
    XImageViewRenderer * _renderer; // +0xc0
    CGRect _videoRect; // +0xc8
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)setup;
- (void)dealloc;
- (void)cleanup;
- (void)setEnableGestures:(BOOL)arg1;
- (void)setupLayer;
- (void)setDisableOpaqueRender:(BOOL)arg1;
- (void)renderWeEffectFrame:(id)arg1;
- (void)renderTexture:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)setFocusable:(BOOL)arg1;
- (void)initFocusView;
- (void)deallocFocusView;
- (void)focusTap:(id)arg1;
- (void)focusAtPoint:(CGPoint)arg1;
- (unsigned long long)contentMode;
- (void)setContentMode:(unsigned long long)arg1;
- (float)rotationInDegree;
- (void)setRotationInDegree:(float)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)mirror;
- (void)setMirror:(BOOL)arg1;
- (BOOL)renderable;
- (void)setRenderable:(BOOL)arg1;
- (BOOL)focusable;
- (BOOL)disableOpaqueRender;
- (int)videoBlockThreshold;
- (void)setVideoBlockThreshold:(int)arg1;
- (int)streamType;
- (void)setStreamType:(int)arg1;
- (int)blockIntervalMs;
- (void)setBlockIntervalMs:(int)arg1;
- (CGSize)bufSize;
- (unsigned long long)lastBlockDuration;
- (BOOL)enableGestures;
- (BOOL)isInRotationAnimation;
- (void)setIsInRotationAnimation:(BOOL)arg1;
- (id /* block */)onRenderEvent;
- (void)setOnRenderEvent:(id /* block */)arg1;
- (CGRect)videoRect;
- (void)setVideoRect:(CGRect)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (int)mRawDataFrameType;
- (void)setMRawDataFrameType:(int)arg1;
- (void).cxx_destruct;
@end

