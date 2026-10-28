@interface MiniTaskNewCollectionNormalCell : MiniTaskCollectionBaseCell
{
    UIImageView * _coverImageView; // +0x8
    UIImageView * _extraIconImageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    MMUILabel * _bizNameLabel; // +0x28
    UIImageView * _bizIconView; // +0x30
    UIView * _maskView; // +0x38
    UIView * _splitView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)snapShotView;
- (CGRect)menuPopoverFrame;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)prepareForReuse;
- (void)setContentAlpha:(double)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)extraIconImageView;
- (void)setExtraIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)bizNameLabel;
- (void)setBizNameLabel:(id)arg1;
- (id)bizIconView;
- (void)setBizIconView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)splitView;
- (void)setSplitView:(id)arg1;
- (void).cxx_destruct;
@end
