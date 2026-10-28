@interface MMLiveHalfScreenTitleBarView : UIView
{
    BOOL _forceDarkMode; // +0x8
    id <MMLiveHalfScreenTitleBarViewDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    NSString * _subTitle; // +0x20
    UIImage * _leftButtonImage; // +0x28
    MMUIButton * _closeBtn; // +0x30
    UIView * _titleView; // +0x38
    UIView * _indicatorView; // +0x40
    UIView * _backgroundView; // +0x48
    double _indicatorViewRightMargin; // +0x50
    MMUILabel * _titleLabel; // +0x58
    MMUILabel * _subTitleLabel; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 forceDarkMode:(BOOL)arg2;
- (void)initView;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setTitle:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setLeftButtonImage:(id)arg1;
- (void)setTitleLabelFont:(id)arg1;
- (void)setTitleLabelColor:(id)arg1;
- (void)onClickLeftButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (id)subTitle;
- (id)leftButtonImage;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (double)indicatorViewRightMargin;
- (void)setIndicatorViewRightMargin:(double)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
