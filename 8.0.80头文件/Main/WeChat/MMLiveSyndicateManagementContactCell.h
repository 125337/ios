@interface MMLiveSyndicateManagementContactCell : UITableViewCell
{
    BOOL _canRemove; // +0x8
    WCFinderContact * _contact; // +0x10
    unsigned long long _role; // +0x18
    id <MMLiveSyndicateManagementContactCellDelegate> _delegate; // +0x20
    WCFinderHeadImageView * _avatar; // +0x28
    UILabel * _nickname; // +0x30
    UILabel * _roleLabel; // +0x38
    UIButton * _removeButton; // +0x40
    UIView * _separator; // +0x48
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setContact:(id)arg1;
- (void)setRole:(unsigned long long)arg1;
- (void)setCanRemove:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onRemoveTapped;
- (void)updateContact;
- (id)contact;
- (unsigned long long)role;
- (BOOL)canRemove;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)roleLabel;
- (void)setRoleLabel:(id)arg1;
- (id)removeButton;
- (void)setRemoveButton:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (void).cxx_destruct;
@end
