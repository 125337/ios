@interface WCPayQrcodeUsagehalfPageCell : MMTableViewCell <UITextFieldDelegate>
{
    BOOL _isSelected; // +0x8
    BOOL _showInputField; // +0x9
    MMUILabel * _itemLabel; // +0x10
    UIView * _topSeperatorView; // +0x18
    UIView * _bottomSeperatorView; // +0x20
    UITextField * _inputTextField; // +0x28
    id <WCPayQrcodeUsagehalfPageCellDelegate> _m_delegate; // +0x30
    MMImageView * _checkBox; // +0x38
    UIButton * _container; // +0x40
}
- (void)awakeFromNib;
- (void)setFrame:(CGRect)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithSelected:(BOOL)arg1 showInputField:(BOOL)arg2;
- (void)layoutSubviews;
- (void)addBottomSeperator;
- (id)itemLabel;
- (id)checkBox;
- (id)topSeperatorView;
- (id)bottomSeperatorView;
- (id)inputTextField;
- (id)container;
- (id)textFieldContent;
- (void)textDidChange:(id)arg1;
- (void)onTapCell;
- (unsigned long long)accessibilityTraits;
- (void)setItemLabel:(id)arg1;
- (void)setTopSeperatorView:(id)arg1;
- (void)setBottomSeperatorView:(id)arg1;
- (void)setInputTextField:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setCheckBox:(id)arg1;
- (void)setContainer:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)showInputField;
- (void)setShowInputField:(BOOL)arg1;
- (void).cxx_destruct;
@end

