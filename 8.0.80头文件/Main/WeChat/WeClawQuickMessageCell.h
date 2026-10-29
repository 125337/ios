@interface WeClawQuickMessageCell : UITableViewCell
{
    BOOL _showSelectControl; // +0x8
    BOOL _isCellSelected; // +0x9
    BOOL _isSnapshotMode; // +0xa
    UILabel * _titleLabel; // +0x10
    UILabel * _subtitleLabel; // +0x18
    UIImageView * _selectIconView; // +0x20
    MMUIButton * _editButton; // +0x28
}
+ (id)p_firstLineOfText:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onEditButtonTapped;
- (void)configureWithCommand:(id)arg1 isEditing:(BOOL)arg2 isSelected:(BOOL)arg3;
- (void)layoutSubviews;
- (void)updateCustomSeparatorLines;
- (CGRect)p_getReorderControlFrame;
- (void)customReorderControl;
- (void)setOfflineMode:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)selectIconView;
- (void)setSelectIconView:(id)arg1;
- (id)editButton;
- (void)setEditButton:(id)arg1;
- (BOOL)showSelectControl;
- (void)setShowSelectControl:(BOOL)arg1;
- (BOOL)isCellSelected;
- (void)setIsCellSelected:(BOOL)arg1;
- (BOOL)isSnapshotMode;
- (void)setIsSnapshotMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
