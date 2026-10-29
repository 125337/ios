@interface MMFinderLiveInteractionTextEditCell : WCTableViewNormalCellManager <UITextFieldDelegate>
{
    MMUIView * _contentView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUITextField * _textField; // +0x18
    id <MMFinderLiveInteractionTextEditCellDelegate> _delegate; // +0x20
}
- (id)initWithWidth:(double)arg1 height:(double)arg2;
- (void)initCellConfig;
- (void)initSubviewsWith:(double)arg1 height:(double)arg2;
- (id)accessibilityLabel;
- (void)layoutUI;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChangeContent:(id)arg1;
- (void)onTextFieldHideKeyBoard;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
