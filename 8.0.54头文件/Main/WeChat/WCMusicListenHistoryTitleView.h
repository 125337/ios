@interface WCMusicListenHistoryTitleView : UIView
{
    NSString * _title; // +0x8
    id /* block */ _deleteButtonHandler; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUIButton * _deleteButton; // +0x20
    UIView * _separatorView; // +0x28
    UIEdgeInsets _contentEdgeInsets; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)onDeleteButtonClicked:(id)arg1;
- (id)titleLabel;
- (id)deleteButton;
- (id)separatorView;
- (UIEdgeInsets)contentEdgeInsets;
- (void)setContentEdgeInsets:(UIEdgeInsets)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id /* block */)deleteButtonHandler;
- (void)setDeleteButtonHandler:(id /* block */)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end

