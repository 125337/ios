@interface MMFinderLiveInteractionCountEditCell : WCTableViewNormalCellManager <UITextFieldDelegate>
{
    int _interactionType; // +0x8
    MMUIView * _contentView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUITextField * _textField; // +0x20
    id <MMFinderLiveInteractionCountEditCellDelegate> _delegate; // +0x28
}
- (id)initWithWidth:(double)arg1 height:(double)arg2 interactionType:(int)arg3;
- (void)initCellConfig;
- (void)initSubviewsWith:(double)arg1 height:(double)arg2;
- (id)accessibilityLabel;
- (id)textFieldPlaceHolder;
- (void)layoutUI;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChangeContent:(id)arg1;
- (void)onTextFieldHideKeyBoard;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (int)interactionType;
- (void)setInteractionType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
