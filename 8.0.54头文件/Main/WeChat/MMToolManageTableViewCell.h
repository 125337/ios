@interface MMToolManageTableViewCell : UITableViewCell
{
    BOOL _isAdded; // +0x8
    id <MMToolManageTableViewCellDelegate> _delegate; // +0x10
    UIView * _bottomView; // +0x18
    UIButton * _editButton; // +0x20
    UIImageView * _reorderButton; // +0x28
    MMWebImageView * _iconImageView; // +0x30
    MMUILabel * _nameLabel; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)layoutSubviews;
- (void)onClickEdit;
- (id)bottomView;
- (id)nameLabel;
- (id)editButton;
- (id)iconImageView;
- (id)reorderButton;
- (void)configueCell:(id)arg1 isAdded:(BOOL)arg2;
- (void)configueCell:(id)arg1 isAdded:(BOOL)arg2 canUp:(BOOL)arg3 canDown:(BOOL)arg4;
- (BOOL)isTouchAtResortButton:(CGPoint)arg1;
- (BOOL)onAccessibilityCustomAction:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBottomView:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setReorderButton:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (BOOL)isAdded;
- (void)setIsAdded:(BOOL)arg1;
- (void).cxx_destruct;
@end

