@interface MiniTaskCollectionOutdateCell : MiniTaskCollectionBaseCell
{
    UIImageView * _coverImageView; // +0x8
    UIImageView * _extraIconImageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    UIImageView * _bizIconView; // +0x28
    MMUIButton * _favButton; // +0x30
    MMUIButton * _deleteButton; // +0x38
    UIView * _bottomLine; // +0x40
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
- (id)extraIconImageView;
- (void)setExtraIconImageView:(id)arg1;
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
