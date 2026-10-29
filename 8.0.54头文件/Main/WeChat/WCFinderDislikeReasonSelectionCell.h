@interface WCFinderDislikeReasonSelectionCell : UITableViewCell
{
    BOOL _hideCheckbox; // +0x8
    UILabel * _reasonLabel; // +0x10
    UIView * _seperator; // +0x18
    UIImageView * _checkboxImageView; // +0x20
    double _layoutWidth; // +0x28
}
+ (double)defaultCellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCheckBoxHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;
- (void)updateWithWording:(id)arg1 selected:(BOOL)arg2;
- (id)checkboxImageWithSelected:(BOOL)arg1;
- (id)reasonLabel;
- (void)setReasonLabel:(id)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (id)checkboxImageView;
- (void)setCheckboxImageView:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (BOOL)hideCheckbox;
- (void)setHideCheckbox:(BOOL)arg1;
- (void).cxx_destruct;
@end

