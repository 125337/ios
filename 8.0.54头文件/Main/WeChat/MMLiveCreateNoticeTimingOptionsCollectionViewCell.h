@interface MMLiveCreateNoticeTimingOptionsCollectionViewCell : UICollectionViewCell
{
    BOOL _enabled; // +0x8
    NSString * _descriptionAccessibilityLabel; // +0x10
    id <MMLiveCreateNoticeTimingOptionsCollectionViewCellDelegate> _delegate; // +0x18
    UIView * _containerView; // +0x20
    UILabel * _titleLabel; // +0x28
    UIView * _descriptionContainerView; // +0x30
    UILabel * _descriptionLabel; // +0x38
    MMUIButton * _descriptionActionButton; // +0x40
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (id)descriptionActionLabel;
- (void)setDescriptionActionLabel:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onDescriptionActionButtonTapped;
- (void)updateStyle;
- (id)descriptionAccessibilityLabel;
- (void)setDescriptionAccessibilityLabel:(id)arg1;
- (BOOL)enabled;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionContainerView;
- (void)setDescriptionContainerView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)descriptionActionButton;
- (void)setDescriptionActionButton:(id)arg1;
- (void).cxx_destruct;
@end

