@interface MoveWithTouchAlgorithm : MMObject
{
    BOOL m_hasMoved; // +0x8
    BOOL m_hasStart; // +0x9
    BOOL _canMoveOutside; // +0xa
    BOOL _allowAdsorbToWindow; // +0xb
    BOOL _hasMoveLong; // +0xc
    id <MoveWithTouchAlgorithmDelegate> m_delegate; // +0x10
    double _edgeOffsetX; // +0x18
    double _edgeOffsetTop; // +0x20
    double _edgeOffsetBottom; // +0x28
    double _longMoveMinDelta; // +0x30
    long long _m_startOrientation; // +0x38
    CGPoint m_startPoint; // +0x40
    CGPoint m_maxMoveDistance; // +0x50
    CGPoint m_startPosition; // +0x60
    CGPoint _m_lastPosition; // +0x70
    optional<CGRect> _area; // +0x80
}
- (id)init;
- (void)setMoveWithTouchAlgorithmDelegate:(id)arg1;
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
- (CGPoint)m_lastPosition;
- (void)setM_lastPosition:(CGPoint)arg1;
- (long long)m_startOrientation;
- (void)setM_startOrientation:(long long)arg1;
- (BOOL)hasMoveLong;
- (void)setHasMoveLong:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
