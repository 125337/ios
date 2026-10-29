@interface WCFinderPostAttachCell : UITableViewCell
{
    UIImageView * _leftIconView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _recommendTipsLabel; // +0x18
    UILabel * _rightTipsLabel; // +0x20
    UIImageView * _rightImageView; // +0x28
    UIView * _rightCustomView; // +0x30
    UIImageView * _rightArrowView; // +0x38
    UIView * _redDotView; // +0x40
    UISwitch * _switchControl; // +0x48
    RichTextView * _descTextView; // +0x50
    WCFinderPostBubbleView * _bubbleView; // +0x58
    UIView * _customSecondRowView; // +0x60
    WCFinderPostAttachCellConfig * _currentConfig; // +0x68
}
+ (double)getTopBottomMargin;
+ (double)cellHeightWithConfig:(id)arg1 screenWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)updateWithConfig:(id)arg1;
- (void)layoutSubviews;
- (void)layoutAllSubviews;
- (void)onSwitchChanged:(id)arg1;
- (void)onTapRecommendTips;
- (void)onTapCell;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)recommendTipsLabel;
- (void)setRecommendTipsLabel:(id)arg1;
- (id)rightTipsLabel;
- (void)setRightTipsLabel:(id)arg1;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (id)rightCustomView;
- (void)setRightCustomView:(id)arg1;
- (id)rightArrowView;
- (void)setRightArrowView:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (id)switchControl;
- (void)setSwitchControl:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)customSecondRowView;
- (void)setCustomSecondRowView:(id)arg1;
- (id)currentConfig;
- (void)setCurrentConfig:(id)arg1;
- (void).cxx_destruct;
@end
