@interface VoIPMPUIScreenView : MMUIView
{
    BOOL _isOrientationServiceEnable; // +0x8
    BOOL _isVideoMode; // +0x9
    BOOL _isCleared; // +0xa
    BOOL _isTalking; // +0xb
    BOOL _isMiniInAppActived; // +0xc
    BOOL _isMainLocal; // +0xd
    BOOL _isLocalCoveringRemote; // +0xe
    BOOL _isSplit; // +0xf
    BOOL _isSplitPrepartion; // +0x10
    BOOL _isAnimatingForSplit; // +0x11
    BOOL _isAnimatingForSplitPrepartion; // +0x12
    BOOL _isAnimatingForSplitTips; // +0x13
    BOOL _isWindowViewSubZoomingIn; // +0x14
    BOOL _isWindowViewSubDragging; // +0x15
    BOOL _isWindowViewSubCenterSetuped; // +0x16
    BOOL _isWindowViewSubSizeSetuped; // +0x17
    BOOL _isUsingHalfContentHeightAsSplitActiveRegionHeight; // +0x18
    BOOL _isWindowViewSubDraggingFromSplit; // +0x19
    BOOL _isWindowViewSubDraggingFromTopHalf; // +0x1a
    BOOL _isSplitTopTipsHidden; // +0x1b
    BOOL _isSplitBottomTipsHidden; // +0x1c
    double _screenSplitDraggableAreaHeight; // +0x20
    VoIPMPUIScreenWindowView * _remoteWindowView; // +0x28
    VoIPMPUIScreenWindowView * _localWindowView; // +0x30
    double _topBarHeight; // +0x38
    double _panelHeight; // +0x40
    id /* block */ _onWindowViewTapEvent; // +0x48
    id /* block */ _onWindowViewMoveEvent; // +0x50
    UIView * _contentView; // +0x58
    double _startEnteringSplitActiveRegionTimestamp; // +0x60
    double _splitTipsActiveRegionHeight; // +0x68
    unsigned long long _splitTipsLocation; // +0x70
    unsigned long long _splitTopTipsStatus; // +0x78
    double _splitTopTipsViewHeight; // +0x80
    UIView * _splitTopTipsView; // +0x88
    UIImageView * _splitTopTipsBackgroundImageView; // +0x90
    UIView * _splitTopTipsContainerView; // +0x98
    UIImageView * _splitTopTipsIconImageView; // +0xa0
    UILabel * _splitTopTipsLabel; // +0xa8
    unsigned long long _splitBottomTipsStatus; // +0xb0
    double _splitBottomTipsViewHeight; // +0xb8
    UIView * _splitBottomTipsView; // +0xc0
    UIImageView * _splitBottomTipsBackgroundImageView; // +0xc8
    UIView * _splitBottomTipsContainerView; // +0xd0
    UIImageView * _splitBottomTipsIconImageView; // +0xd8
    UILabel * _splitBottomTipsLabel; // +0xe0
    UIImageView * _splitBackgroundImageView; // +0xe8
    id /* block */ _dismissingSplitTipsBlock; // +0xf0
    id /* block */ _detectSplitPreprationBlock; // +0xf8
    CGPoint _switchToSplitPrepartionWindowViewSubDragToCenter; // +0x100
    CGPoint _windowViewSubCenter; // +0x110
    CGSize _windowViewSubSize; // +0x120
    CGSize _windowViewSubDefaultSize; // +0x130
    CGSize _windowViewSubMinScaleSize; // +0x140
    CGPoint _windowViewSubBeforeSplitCenter; // +0x150
    CGSize _windowViewSubBeforeSplitSize; // +0x160
}
- (void)moveWindowViewSubToOrigin:(CGPoint)arg1 withSize:(CGSize)arg2;
- (void)restore;
- (void)setWindowViewSubSize:(CGSize)arg1;
- (void)setWindowViewSubCenter:(CGPoint)arg1;
- (void)zoomWindowViewSubWithInCompletion:(id /* block */)arg1 outCompletion:(id /* block */)arg2;
- (id)windowViewMain;
- (id)windowViewSub;
- (void)cancelAllWindowViewAnimation;
- (void)setupSplit:(BOOL)arg1 forcibly:(BOOL)arg2;
- (BOOL)isWindowViewSubInPreSplitDraggableAreaTop;
- (BOOL)isWindowViewSubInPreSplitDraggableAreaBottom;
- (BOOL)isWindowViewSubInScreenSplitActiveRegionTop;
- (BOOL)isWindowViewSubInScreenSplitActiveRegionBottom;
- (void)layoutWindowViewMainWithIsWindowViewSubInScreenSplitActiveRegionTop:(BOOL)arg1 isWindowViewSubInScreenSplitActiveRegionBottom:(BOOL)arg2;
- (void)layoutWindowViewSubWithLastWindowViewSubFrame:(CGRect)arg1 isWindowViewSubInScreenSplitActiveRegionTop:(BOOL)arg2 isWindowViewSubInScreenSplitActiveRegionBottom:(BOOL)arg3;
- (void)layoutSplitBottomTips;
- (void)layoutSplitTopTips;
- (void)layoutSplitBackgroundImageView;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)isOrientationServiceEnable;
- (void)setIsOrientationServiceEnable:(BOOL)arg1;
- (BOOL)isVideoMode;
- (void)setIsVideoMode:(BOOL)arg1;
- (BOOL)isCleared;
- (void)setIsCleared:(BOOL)arg1;
- (double)screenSplitDraggableAreaHeight;
- (void)setScreenSplitDraggableAreaHeight:(double)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (id)remoteWindowView;
- (void)setRemoteWindowView:(id)arg1;
- (id)localWindowView;
- (void)setLocalWindowView:(id)arg1;
- (double)topBarHeight;
- (void)setTopBarHeight:(double)arg1;
- (double)panelHeight;
- (void)setPanelHeight:(double)arg1;
- (id /* block */)onWindowViewTapEvent;
- (void)setOnWindowViewTapEvent:(id /* block */)arg1;
- (id /* block */)onWindowViewMoveEvent;
- (void)setOnWindowViewMoveEvent:(id /* block */)arg1;
- (BOOL)isMiniInAppActived;
- (void)setIsMiniInAppActived:(BOOL)arg1;
- (BOOL)isMainLocal;
- (void)setIsMainLocal:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)isLocalCoveringRemote;
- (void)setIsLocalCoveringRemote:(BOOL)arg1;
- (BOOL)isSplit;
- (void)setIsSplit:(BOOL)arg1;
- (BOOL)isSplitPrepartion;
- (void)setIsSplitPrepartion:(BOOL)arg1;
- (CGPoint)switchToSplitPrepartionWindowViewSubDragToCenter;
- (void)setSwitchToSplitPrepartionWindowViewSubDragToCenter:(CGPoint)arg1;
- (BOOL)isAnimatingForSplit;
- (void)setIsAnimatingForSplit:(BOOL)arg1;
- (double)startEnteringSplitActiveRegionTimestamp;
- (void)setStartEnteringSplitActiveRegionTimestamp:(double)arg1;
- (BOOL)isAnimatingForSplitPrepartion;
- (void)setIsAnimatingForSplitPrepartion:(BOOL)arg1;
- (BOOL)isAnimatingForSplitTips;
- (void)setIsAnimatingForSplitTips:(BOOL)arg1;
- (double)splitTipsActiveRegionHeight;
- (void)setSplitTipsActiveRegionHeight:(double)arg1;
- (BOOL)isWindowViewSubZoomingIn;
- (void)setIsWindowViewSubZoomingIn:(BOOL)arg1;
- (BOOL)isWindowViewSubDragging;
- (void)setIsWindowViewSubDragging:(BOOL)arg1;
- (CGPoint)windowViewSubCenter;
- (BOOL)isWindowViewSubCenterSetuped;
- (void)setIsWindowViewSubCenterSetuped:(BOOL)arg1;
- (CGSize)windowViewSubSize;
- (BOOL)isWindowViewSubSizeSetuped;
- (void)setIsWindowViewSubSizeSetuped:(BOOL)arg1;
- (CGSize)windowViewSubDefaultSize;
- (void)setWindowViewSubDefaultSize:(CGSize)arg1;
- (CGSize)windowViewSubMinScaleSize;
- (void)setWindowViewSubMinScaleSize:(CGSize)arg1;
- (CGPoint)windowViewSubBeforeSplitCenter;
- (void)setWindowViewSubBeforeSplitCenter:(CGPoint)arg1;
- (CGSize)windowViewSubBeforeSplitSize;
- (void)setWindowViewSubBeforeSplitSize:(CGSize)arg1;
- (BOOL)isUsingHalfContentHeightAsSplitActiveRegionHeight;
- (void)setIsUsingHalfContentHeightAsSplitActiveRegionHeight:(BOOL)arg1;
- (BOOL)isWindowViewSubDraggingFromSplit;
- (void)setIsWindowViewSubDraggingFromSplit:(BOOL)arg1;
- (BOOL)isWindowViewSubDraggingFromTopHalf;
- (void)setIsWindowViewSubDraggingFromTopHalf:(BOOL)arg1;
- (unsigned long long)splitTipsLocation;
- (void)setSplitTipsLocation:(unsigned long long)arg1;
- (unsigned long long)splitTopTipsStatus;
- (void)setSplitTopTipsStatus:(unsigned long long)arg1;
- (BOOL)isSplitTopTipsHidden;
- (void)setIsSplitTopTipsHidden:(BOOL)arg1;
- (double)splitTopTipsViewHeight;
- (void)setSplitTopTipsViewHeight:(double)arg1;
- (id)splitTopTipsView;
- (void)setSplitTopTipsView:(id)arg1;
- (id)splitTopTipsBackgroundImageView;
- (void)setSplitTopTipsBackgroundImageView:(id)arg1;
- (id)splitTopTipsContainerView;
- (void)setSplitTopTipsContainerView:(id)arg1;
- (id)splitTopTipsIconImageView;
- (void)setSplitTopTipsIconImageView:(id)arg1;
- (id)splitTopTipsLabel;
- (void)setSplitTopTipsLabel:(id)arg1;
- (unsigned long long)splitBottomTipsStatus;
- (void)setSplitBottomTipsStatus:(unsigned long long)arg1;
- (BOOL)isSplitBottomTipsHidden;
- (void)setIsSplitBottomTipsHidden:(BOOL)arg1;
- (double)splitBottomTipsViewHeight;
- (void)setSplitBottomTipsViewHeight:(double)arg1;
- (id)splitBottomTipsView;
- (void)setSplitBottomTipsView:(id)arg1;
- (id)splitBottomTipsBackgroundImageView;
- (void)setSplitBottomTipsBackgroundImageView:(id)arg1;
- (id)splitBottomTipsContainerView;
- (void)setSplitBottomTipsContainerView:(id)arg1;
- (id)splitBottomTipsIconImageView;
- (void)setSplitBottomTipsIconImageView:(id)arg1;
- (id)splitBottomTipsLabel;
- (void)setSplitBottomTipsLabel:(id)arg1;
- (id)splitBackgroundImageView;
- (void)setSplitBackgroundImageView:(id)arg1;
- (id /* block */)dismissingSplitTipsBlock;
- (void)setDismissingSplitTipsBlock:(id /* block */)arg1;
- (id /* block */)detectSplitPreprationBlock;
- (void)setDetectSplitPreprationBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

