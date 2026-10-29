@interface GCKeyValueSettingCell : GCBaseCollectionViewCell <UITextFieldDelegate>
{
    UILabel * _titleLabel; // +0x8
    UITextField * _textFiled; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithCellModel:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)textFiled;
- (void)setTextFiled:(id)arg1;
- (void).cxx_destruct;
@end
