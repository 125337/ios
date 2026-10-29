@interface MiniTaskCollectionScheduleCell : MiniTaskCollectionBaseCell
{
    MMUILabel * _contentLabel; // +0x8
    MMUILabel * _nameLabel; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMUILabel * _remindTimeLabel; // +0x20
    MMUIButton * _remindButton; // +0x28
    MMUIButton * _deleteButton; // +0x30
    UIView * _separatorView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (CGRect)menuPopoverFrame;
- (id)menuItems;
- (void)setViewModel:(id)arg1;
- (void)setIsEditing:(BOOL)arg1;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (id)getContactDisplayName:(id)arg1;
- (void)onRemindButtonClick:(id)arg1;
- (void)onDeleteButtonClick:(id)arg1;
- (void)onDeleteMenuClick:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)remindTimeLabel;
- (void)setRemindTimeLabel:(id)arg1;
- (id)remindButton;
- (void)setRemindButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end
