@interface WCPayF2FTransferFavorItemView : UIView
{
    BOOL _showInfoButton; // +0x8
    BOOL _showSeparator; // +0x9
    BOOL _enabled; // +0xa
    BOOL _checkState; // +0xb
    UIImage * _iconImage; // +0x10
    NSString * _title; // +0x18
    NSString * _subTitle; // +0x20
    unsigned long long _accessoryType; // +0x28
    UIColor * _titleColor; // +0x30
    UIColor * _subTitleColor; // +0x38
    id <WCPayF2FTransferFavorItemViewDelegate> _delegate; // +0x40
    UIView * _contentView; // +0x48
    UIImageView * _iconView; // +0x50
    UILabel * _titleLabel; // +0x58
    UIImageView * _infoButton; // +0x60
    UILabel * _subTitleLabel; // +0x68
    UIImageView * _accessoryView; // +0x70
    UIView * _separator; // +0x78
    UIAccessibilityElement * _selfAccssbilityElement; // +0x80
    UIAccessibilityElement * _infoButtonAccssbilityElement; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)configureLayout;
- (void)sizeToFit;
- (void)layoutSubviews;
- (CGSize)currentAccessorySize;
- (id)currentAccessoryImage;
- (void)handleTap:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setSubTitleColor:(id)arg1;
- (void)setCheckState:(BOOL)arg1;
- (void)handleHighlightWithTouchLocation:(CGPoint)arg1;
- (void)dismissHighlight;
- (BOOL)considerLocationInInfoButton:(CGPoint)arg1;
- (id)selectedCheckboxImage;
- (id)unselectedCheckboxImage;
- (id)disabledCheckboxImage;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)title;
- (BOOL)showInfoButton;
- (void)setShowInfoButton:(BOOL)arg1;
- (id)subTitle;
- (unsigned long long)accessoryType;
- (void)setAccessoryType:(unsigned long long)arg1;
- (BOOL)showSeparator;
- (void)setShowSeparator:(BOOL)arg1;
- (BOOL)enabled;
- (id)titleColor;
- (id)subTitleColor;
- (BOOL)checkState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)infoButton;
- (void)setInfoButton:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)selfAccssbilityElement;
- (void)setSelfAccssbilityElement:(id)arg1;
- (id)infoButtonAccssbilityElement;
- (void)setInfoButtonAccssbilityElement:(id)arg1;
- (void).cxx_destruct;
@end

