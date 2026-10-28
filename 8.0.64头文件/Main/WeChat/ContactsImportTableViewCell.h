@interface ContactsImportTableViewCell : UITableViewCell
{
    OldAccountContact * _oldAccountContact; // +0x8
    id <ContactsImportTableViewCellDelegate> _delegate; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    UILabel * _nicknameLabel; // +0x20
    UIButton * _addButton; // +0x28
    UILabel * _addedLabel; // +0x30
    UIView * _separatorView; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOldAccountContact:(id)arg1;
- (void)layoutSubviews;
- (void)onTapAddButton;
- (id)oldAccountContact;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (id)addedLabel;
- (void)setAddedLabel:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end
