@interface MMMusicHorizontalScrollingView : UIView
{
    MMUILabel * m_label1; // +0x8
    MMUILabel * m_label2; // +0x10
    MMTimer * m_timer; // +0x18
    CAGradientLayer * m_maskLayer; // +0x20
    double m_distance; // +0x28
    double m_maxWidth; // +0x30
    double m_distancePerSecond; // +0x38
    double m_maskWidth; // +0x40
    BOOL isLabelCenter; // +0x48
    BOOL isLyricsPanelType; // +0x49
}
- (id)init;
- (void)dealloc;
- (void)initMaskLayer;
- (void)setLabelCenter:(BOOL)arg1;
- (void)setText:(id)arg1 textColor:(id)arg2 textFont:(id)arg3 maxWidth:(double)arg4;
- (void)setMaxWidth:(double)arg1;
- (void)setLyricsPanelType:(BOOL)arg1;
- (void)removeAnimation;
- (void)restartScroll;
- (void)resetScrollStatus;
- (void)resetAndInitTimer;
- (BOOL)isLabelAnimating;
- (double)label2AnimationMoveDistance;
- (double)loopAnimationDuration;
- (void)onTimer;
- (void).cxx_destruct;
@end

