@interface CameraOpButtonWrapView : UIView
{
    UIButton * _topButton; // +0x8
    double _maxWidth; // +0x10
    UIView * _blurView; // +0x18
    UIImageView * _opIconView; // +0x20
    MMUILabel * _introLbl; // +0x28
    MMUILabel * _subtitleLbl; // +0x30
    MMBadgeView * _redDot; // +0x38
    UIView * _highlightMaskView; // +0x40
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setOpIcon:(id)arg1;
- (void)setIntroText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)updateAccessibilityLabel;
- (void)setShowNew:(BOOL)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)fixButtonWidth;
- (void)initHightlightedBlock;
- (id)topButton;
- (void)setTopButton:(id)arg1;
- (double)maxWidth;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)opIconView;
- (void)setOpIconView:(id)arg1;
- (id)introLbl;
- (void)setIntroLbl:(id)arg1;
- (id)subtitleLbl;
- (void)setSubtitleLbl:(id)arg1;
- (id)redDot;
- (void)setRedDot:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
