@interface MMMsgHeaderTipsView : UIView
{
    BOOL _showRightArrow; // +0x8
    BOOL _showBorder; // +0x9
    BOOL _isExpanded; // +0xa
    id <MMMsgHeaderTipsViewDelegate> _delegate; // +0x10
    double _maxWidth; // +0x18
    UIImage * _iconImage; // +0x20
    NSArray * _iconImages; // +0x28
    double _animationDuration; // +0x30
    NSString * _title; // +0x38
    UIColor * _titleColor; // +0x40
    UIColor * _rightArrowColor; // +0x48
    UIColor * _borderColor; // +0x50
    double _borderWidth; // +0x58
    UIButton * _button; // +0x60
    UIImageView * _iconImageView; // +0x68
    UILabel * _titleLabel; // +0x70
    UIImageView * _arrowImageView; // +0x78
    CGSize _iconSize; // +0x80
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)setShowRightArrow:(BOOL)arg1;
- (void)setRightArrowColor:(id)arg1;
- (void)setShowBorder:(BOOL)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setIconImage:(id)arg1;
- (void)setIconImages:(id)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)initUI;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateIconSize;
- (void)onButtonClick;
- (id)delegate;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (id)iconImage;
- (id)iconImages;
- (double)animationDuration;
- (id)title;
- (id)titleColor;
- (BOOL)showRightArrow;
- (id)rightArrowColor;
- (BOOL)showBorder;
- (id)borderColor;
- (double)borderWidth;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
