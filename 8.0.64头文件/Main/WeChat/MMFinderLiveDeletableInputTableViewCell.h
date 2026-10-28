@interface MMFinderLiveDeletableInputTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    BOOL _isInDeleteState; // +0x8
    BOOL _isEditing; // +0x9
    id /* block */ _shouldBeginEditingCallback; // +0x10
    id /* block */ _didEndEditingCallback; // +0x18
    id /* block */ _deleteCallback; // +0x20
    id /* block */ _deleteStateCallback; // +0x28
    id /* block */ _shouldEndEditingCheckCallback; // +0x30
    id /* block */ _editingChangedCallback; // +0x38
    UITextField * _textField; // +0x40
    UIView * _bgView; // +0x48
    MMUIButton * _deleteButton; // +0x50
    MMUIButton * _confirmDeleteButton; // +0x58
    UIPanGestureRecognizer * _pan; // +0x60
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)customLayoutSubviews;
- (id)bgView;
- (id)deleteButton;
- (id)confirmDeleteButton;
- (id)textField;
- (void)customizeTextField:(id)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)innerSetDeleteState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDeleteState:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)didClickDelete;
- (void)didClickConfirmDelete;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)clearText;
- (void)textFieldDidChangeContent:(id)arg1;
- (long long)textFieldWordLimit;
- (id /* block */)shouldBeginEditingCallback;
- (void)setShouldBeginEditingCallback:(id /* block */)arg1;
- (id /* block */)didEndEditingCallback;
- (void)setDidEndEditingCallback:(id /* block */)arg1;
- (id /* block */)deleteCallback;
- (void)setDeleteCallback:(id /* block */)arg1;
- (id /* block */)deleteStateCallback;
- (void)setDeleteStateCallback:(id /* block */)arg1;
- (id /* block */)shouldEndEditingCheckCallback;
- (void)setShouldEndEditingCheckCallback:(id /* block */)arg1;
- (id /* block */)editingChangedCallback;
- (void)setEditingChangedCallback:(id /* block */)arg1;
- (void)setTextField:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setConfirmDeleteButton:(id)arg1;
- (id)pan;
- (void)setPan:(id)arg1;
- (BOOL)isInDeleteState;
- (void)setIsInDeleteState:(BOOL)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (void).cxx_destruct;
@end
