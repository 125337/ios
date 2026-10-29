@interface WCFinderCommonSearchBar : MMUIView <UITextFieldDelegate>
{
    BOOL _isEditing; // +0x8
    UITextField * _textField; // +0x10
    id <WCFinderCommonSearchBarDelegate> _delegate; // +0x18
    UIImageView * _searchImageView; // +0x20
    UIButton * _clearBtn; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpView;
- (void)updateTextFieldPlaceholderText:(id)arg1;
- (void)layoutAllSubviews;
- (void)layoutSubviews;
- (void)setIsEditing:(BOOL)arg1;
- (void)onClickClearAction;
- (void)endTyping:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchImageView;
- (void)setSearchImageView:(id)arg1;
- (id)clearBtn;
- (void)setClearBtn:(id)arg1;
- (BOOL)isEditing;
- (void).cxx_destruct;
@end
