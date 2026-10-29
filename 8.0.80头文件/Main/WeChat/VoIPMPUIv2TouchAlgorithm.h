@interface VoIPMPUIv2TouchAlgorithm : MMObject
{
    BOOL m_hasMoved; // +0x8
    BOOL m_hasStart; // +0x9
    BOOL _canMoveOutside; // +0xa
    BOOL _allowAdsorbToWindow; // +0xb
    BOOL _isChangingFoldToUnfold; // +0xc
    BOOL _shouldScaleMinWhenFold; // +0xd
    BOOL _isScaling; // +0xe
    BOOL _hasMoveLong; // +0xf
    id <VoIPMPUIv2TouchAlgorithmDelegate> m_delegate; // +0x10
    double _edgeOffsetX; // +0x18
    double _edgeOffsetTop; // +0x20
    double _edgeOffsetBottom; // +0x28
    double _longMoveMinDelta; // +0x30
    double _foldPositionRemainingWidth; // +0x38
    unsigned long long _foldType; // +0x40
    double _maxScale; // +0x48
    double _minScale; // +0x50
    double _minWhenFoldScale; // +0x58
    double _initialDistance; // +0x60
    CGPoint m_startPoint; // +0x68
    CGPoint m_maxMoveDistance; // +0x78
    CGPoint m_startPosition; // +0x88
    CGSize _originSize; // +0x98
    CGPoint _m_lastPosition; // +0xa8
    CGSize _willFoldSize; // +0xb8
    CGRect _beganToScaleFrame; // +0xc8
    optional<CGRect> _area; // +0xe8
}
+ (double)distanceBetweenPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2;
- (id)init;
- (void)setVoIPMPUIv2TouchAlgorithmDelegate:(id)arg1;
- (void)setupScaleVars:(id)arg1;
- (double)calculateScaleRatioWithOriginX:(double)arg1 viewWidth:(double)arg2 screenWidth:(double)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)startCalculate;
- (void)stopCalculate;
- (void)calculateMaxDistance;
- (void)adsorbToWindow;
- (BOOL)tryFoldToWindowBorder;
- (void)doFoldToBorder;
- (CGPoint)m_startPoint;
- (void)setM_startPoint:(CGPoint)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_hasMoved;
- (void)setM_hasMoved:(BOOL)arg1;
- (BOOL)m_hasStart;
- (void)setM_hasStart:(BOOL)arg1;
- (CGPoint)m_maxMoveDistance;
- (void)setM_maxMoveDistance:(CGPoint)arg1;
- (CGPoint)m_startPosition;
- (void)setM_startPosition:(CGPoint)arg1;
- (double)edgeOffsetX;
- (void)setEdgeOffsetX:(double)arg1;
- (double)edgeOffsetTop;
- (void)setEdgeOffsetTop:(double)arg1;
- (double)edgeOffsetBottom;
- (void)setEdgeOffsetBottom:(double)arg1;
- (double)longMoveMinDelta;
- (void)setLongMoveMinDelta:(double)arg1;
- (BOOL)canMoveOutside;
- (void)setCanMoveOutside:(BOOL)arg1;
- (optional<CGRect>)area;
- (void)setArea:(optional<CGRect>)arg1;
- (BOOL)allowAdsorbToWindow;
- (void)setAllowAdsorbToWindow:(BOOL)arg1;
- (BOOL)isChangingFoldToUnfold;
- (void)setIsChangingFoldToUnfold:(BOOL)arg1;
- (double)foldPositionRemainingWidth;
- (void)setFoldPositionRemainingWidth:(double)arg1;
- (unsigned long long)foldType;
- (void)setFoldType:(unsigned long long)arg1;
- (CGSize)originSize;
- (void)setOriginSize:(CGSize)arg1;
- (double)maxScale;
- (void)setMaxScale:(double)arg1;
- (double)minScale;
- (void)setMinScale:(double)arg1;
- (double)minWhenFoldScale;
- (void)setMinWhenFoldScale:(double)arg1;
- (BOOL)shouldScaleMinWhenFold;
- (void)setShouldScaleMinWhenFold:(BOOL)arg1;
- (BOOL)isScaling;
- (void)setIsScaling:(BOOL)arg1;
- (CGPoint)m_lastPosition;
- (void)setM_lastPosition:(CGPoint)arg1;
- (BOOL)hasMoveLong;
- (void)setHasMoveLong:(BOOL)arg1;
- (double)initialDistance;
- (void)setInitialDistance:(double)arg1;
- (CGRect)beganToScaleFrame;
- (void)setBeganToScaleFrame:(CGRect)arg1;
- (CGSize)willFoldSize;
- (void)setWillFoldSize:(CGSize)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
