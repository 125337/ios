@interface WAPNAuthManagerCell : UITableViewCell
{
    id <WAPNAuthManagerCellDelegate> _actionDelegate; // +0x8
    WAPNAuthPhoneInfo * _phoneInfo; // +0x10
    long long _slideState; // +0x18
    WAPNAuthCellSlideView * _wrapView; // +0x20
    UIImageView * _leadingIcon; // +0x28
    UIButton * _deleteIconButton; // +0x30
    UILabel * _numberLabel; // +0x38
    UILabel * _tagLabel; // +0x40
    UIImageView * _arrow; // +0x48
    UIButton * _deleteButton; // +0x50
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)onTapDeleteIcon;
- (void)onTapDeleteConfirm;
- (void)setSlideState:(long long)arg1 animated:(BOOL)arg2;
- (void)configureAsPhone:(id)arg1 managing:(BOOL)arg2 readyDelete:(BOOL)arg3;
- (void)configureAsAddRow;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)phoneInfo;
- (void)setPhoneInfo:(id)arg1;
- (long long)slideState;
- (void)setSlideState:(long long)arg1;
- (id)wrapView;
- (void)setWrapView:(id)arg1;
- (id)leadingIcon;
- (void)setLeadingIcon:(id)arg1;
- (id)deleteIconButton;
- (void)setDeleteIconButton:(id)arg1;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (id)arrow;
- (void)setArrow:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (void).cxx_destruct;
@end
