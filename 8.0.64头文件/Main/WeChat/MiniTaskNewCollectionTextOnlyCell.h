@interface MiniTaskNewCollectionTextOnlyCell : MiniTaskCollectionBaseCell
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
    MMUILabel * _bizNameLabel; // +0x18
    UIImageView * _bizIconView; // +0x20
    UIView * _maskView; // +0x28
    UIView * _splitView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (CGRect)menuPopoverFrame;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)prepareForReuse;
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
