@interface MagicSclFrameSetView : UIView <_TtP6WeChat24ICommonCoverViewProvider_>
{
    BOOL _isOutOfBounds; // +0x8
    BOOL _hasSetup; // +0x9
    BOOL _unbindFrameSetOnDealloc; // +0xa
    int _viewId; // +0xc
    _TtC6WeChat16MagicSclFrameSet * _frameSet; // +0x10
    WACanvasCoverViewContainer * _coverView; // +0x18
    NSMutableArray * _canvasIds; // +0x20
    long long _viewState; // +0x28
    unsigned long long _activeTime; // +0x30
    NSString * _frameSetName; // +0x38
    NSString * _bizName; // +0x40
    _TtC6WeChat22MagicSclViewCoverLogic * _coverLogic; // +0x48
    NSHashTable * _sizeChangeObservers; // +0x50
}
- (id)init:(id)arg1;
- (id)init:(id)arg1 bizName:(id)arg2;
- (void)resetFrameSet:(id)arg1;
- (void)resetViewId:(int)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void)layoutSubviews;
- (void)redraw;
- (void)setHidden:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)initFrameSet:(id)arg1;
- (void)bind:(id)arg1;
- (void)unbind;
- (void)addSubview:(id)arg1;
- (void)setIsOutOfBounds:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)isRecycled;
- (void)recycle;
- (void)restore;
- (id)provideContainerView;
- (void)showStartupCoverView;
- (void)removeStartupCoverViewFromScl;
- (void)addSizeChangeObserver:(id)arg1;
- (void)removeSizeChangeObserver:(id)arg1;
- (void)notifySizeChangeObservers;
- (id)frameSet;
- (void)setFrameSet:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)canvasIds;
- (void)setCanvasIds:(id)arg1;
- (BOOL)isOutOfBounds;
- (BOOL)hasSetup;
- (void)setHasSetup:(BOOL)arg1;
- (BOOL)unbindFrameSetOnDealloc;
- (void)setUnbindFrameSetOnDealloc:(BOOL)arg1;
- (long long)viewState;
- (void)setViewState:(long long)arg1;
- (unsigned long long)activeTime;
- (void)setActiveTime:(unsigned long long)arg1;
- (int)viewId;
- (void)setViewId:(int)arg1;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)coverLogic;
- (void)setCoverLogic:(id)arg1;
- (id)sizeChangeObservers;
- (void)setSizeChangeObservers:(id)arg1;
- (void).cxx_destruct;
@end
