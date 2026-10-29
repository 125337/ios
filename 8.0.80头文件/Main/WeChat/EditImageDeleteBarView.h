@interface EditImageDeleteBarView : MMUIView
{
    UIView * _line; // +0x8
    BOOL _isSelected; // +0x10
    UIButton * _deleteBtn; // +0x18
    UILabel * _tipLabel; // +0x20
    unsigned long long _editImageUIStyle; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)reloadButton;
- (void)setFrame:(CGRect)arg1;
- (void)set_isSelected:(BOOL)arg1;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (id)_deleteBtn;
- (void)set_deleteBtn:(id)arg1;
- (BOOL)_isSelected;
- (id)_tipLabel;
- (void)set_tipLabel:(id)arg1;
- (unsigned long long)editImageUIStyle;
- (void).cxx_destruct;
@end
