@interface MMFinderLivePromoteListBaseTableViewCell : MMMultiMenuTableViewCell
{
    BOOL _editHidePushButton; // +0x40
    id /* block */ _actionBlock; // +0x48
    MMFinderLivePromoteListBaseViewItem * _item; // +0x50
    MMWebImageView * _webImageView; // +0x58
    MMUILabel * _titleTagLabel; // +0x60
    MMUILabel * _titleLabel; // +0x68
    MMUILabel * _detailLabel; // +0x70
    MMUIButton * _actionButton; // +0x78
    UIView * _lineView; // +0x80
}
+ (id)identifier;
- (void)updateWithViewItem:(id)arg1;
- (void)updateHidePushButtonState:(BOOL)arg1;
- (void)onActionButtonClicked:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)createUI;
- (BOOL)enableMenuAction;
- (void)configEditMenuButtons;
- (double)preferHeight;
- (double)preferWidth;
- (void)layoutUI;
- (id)webImageView;
- (id)actionButton;
- (id)titleLabel;
- (id)detailLabel;
- (id)lineView;
- (void)categoryItem:(id)arg1 onLikeStatusChanged:(BOOL)arg2;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setWebImageView:(id)arg1;
- (id)titleTagLabel;
- (void)setTitleTagLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setLineView:(id)arg1;
- (BOOL)editHidePushButton;
- (void)setEditHidePushButton:(BOOL)arg1;
- (void).cxx_destruct;
@end
