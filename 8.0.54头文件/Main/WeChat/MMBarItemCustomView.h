@interface MMBarItemCustomView : UIView
{
    BOOL _showRedDot; // +0x8
    long long _badgeValue; // +0x10
    long long _alignBadgRightMargin; // +0x18
    MMBadgeView * _badgeView; // +0x20
    UIButton * _barButton; // +0x28
    UIEdgeInsets _extendTouchEdges; // +0x30
}
- (void)updateRedDotView;
- (void)setShowRedDot:(BOOL)arg1;
- (void)setBadgeValue:(long long)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)addBarItemButton:(id)arg1;
- (id)badgeView;
- (BOOL)showRedDot;
- (long long)badgeValue;
- (long long)alignBadgRightMargin;
- (void)setAlignBadgRightMargin:(long long)arg1;
- (void)setBadgeView:(id)arg1;
- (UIEdgeInsets)extendTouchEdges;
- (void)setExtendTouchEdges:(UIEdgeInsets)arg1;
- (id)barButton;
- (void)setBarButton:(id)arg1;
- (void).cxx_destruct;
@end

