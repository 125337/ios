@interface ContactTagListBottomBar : WCBottomBar
{
    BOOL _isEditing; // +0x8
    UIButton * _createTagButton; // +0x10
    UIButton * _editTagsButton; // +0x18
    UIButton * _moveToButton; // +0x20
    UIButton * _deleteButton; // +0x28
    id <ContactTagListBottomBarDelegate> _m_delegate; // +0x30
    MMUILabel * _titleLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)reloadView;
- (void)layoutSubviews;
- (void)setIsEditing:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)onCreateTag;
- (void)onEditTags;
- (void)onMoveTo;
- (void)onDelete;
- (id)createTagButton;
- (void)setCreateTagButton:(id)arg1;
- (id)editTagsButton;
- (void)setEditTagsButton:(id)arg1;
- (id)moveToButton;
- (void)setMoveToButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)isEditing;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
