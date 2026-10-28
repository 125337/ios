@interface MMFinderLiveSensitiveEditTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    id /* block */ _onSensitiveWordAddCallback; // +0x8
    FinderLiveSensitiveTextField * _textField; // +0x10
}
+ (id)identifier;
+ (double)preferHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTextField;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)handleForInputTextChanged:(id)arg1;
- (void)addSensitiveWord:(id)arg1;
- (unsigned int)getSensitiveWordMaxNum;
- (void)resignInput;
- (void)setIgnoreResignFirstResponder:(BOOL)arg1;
- (BOOL)ignoreResignFirstResponder;
- (id /* block */)onSensitiveWordAddCallback;
- (void)setOnSensitiveWordAddCallback:(id /* block */)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (void).cxx_destruct;
@end
