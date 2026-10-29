@interface MiniTaskCollectionOutdateCell : MiniTaskCollectionBaseCell
{
    UIImageView * _coverImageView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    UIImageView * _bizIconView; // +0x20
    MMUIButton * _favButton; // +0x28
    MMUIButton * _deleteButton; // +0x30
    UIView * _bottomLine; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)snapShotView;
- (CGRect)menuPopoverFrame;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)setIsEditing:(BOOL)arg1;
- (void)prepareForReuse;
- (void)onSelectAtClose;
- (void)onSelectAtFav;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)bizIconView;
- (void)setBizIconView:(id)arg1;
- (id)favButton;
- (void)setFavButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end

